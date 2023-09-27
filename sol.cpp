class Solution {
public:
    char nextGreatestLetter(vector<char>& letters, char target) {
        char mn = '?';
        for (char c : letters) {
            if (c > target) {
                if (mn == '?' || c < mn)
                    mn = c;
            }
        }
        return (mn != '?' ? mn : letters[0]);
    }
};
