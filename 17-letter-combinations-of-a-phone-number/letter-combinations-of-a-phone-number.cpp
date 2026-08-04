class Solution {
public:
    vector<string> letterCombinations(string digits) {

        vector<string> arr2 = {"a", "b", "c"};
        vector<string> arr3 = {"d", "e", "f"};
        vector<string> arr4 = {"g", "h", "i"};
        vector<string> arr5 = {"j", "k", "l"};
        vector<string> arr6 = {"m", "n", "o"};
        vector<string> arr7 = {"p", "q", "r", "s"};
        vector<string> arr8 = {"t", "u", "v"};
        vector<string> arr9 = {"w", "x", "y", "z"};

        vector<string> result;

        if (digits.empty())
            return result;

        vector<vector<string>> keypad = {
            {}, {}, arr2, arr3, arr4, arr5, arr6, arr7, arr8, arr9
        };

        string temp;

        solve(0, digits, keypad, temp, result);

        return result;
    }

    void solve(int index, string &digits,
               vector<vector<string>> &keypad,
               string &temp,
               vector<string> &result) {

        if (index == digits.size()) {
            result.push_back(temp);
            return;
        }

        int num = digits[index] - '0';

        for (string ch : keypad[num]) {
            temp += ch;
            solve(index + 1, digits, keypad, temp, result);
            temp.pop_back();
        }
    }
};