class Solution {
    public:
        int lengthOfLastWord(string s) {
        int index_of_space = s.length() - 1;
        while (index_of_space >= 0 && s[index_of_space] == ' ') {
            index_of_space--;
        }
        int length = 0;
        for (int i = index_of_space; i >= 0; i--) {
            if (s[i] != ' ') {
                length++;
            } else {
                break;
            }
        }
        return length;
        }        
};
