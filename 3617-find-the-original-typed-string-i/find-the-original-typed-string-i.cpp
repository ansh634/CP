class Solution {
public:
    int possibleStringCount(string word) {
        if (word.empty()) return 0;

        int res = 1;
        char lastChar = word[0];

        for (int i = 1; i < word.length(); ++i) {
            if (word[i] == lastChar) {
                ++res;
            } else {
                lastChar = word[i];
            }
        }
        return res;
    }
};