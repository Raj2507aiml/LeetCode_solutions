class Solution {
public:
    bool checkRecord(string s) {
        int countP = 0;
        int countL = 0;
        int countA = 0;
        int start = 0;
        int end = s.length();
        while (start < end) {
            if (s[start] == 'P') {
                countP++;
                countL = 0; 
            }
            if (s[start] == 'A') {
                countA++;
                countL = 0; 
            }
            if (s[start] == 'L') {
                countL++;
                if (countL >= 3)
                    return false;
            }
            if (countA >= 2)
                return false;
            start++;
        }
        return true;
    }
};