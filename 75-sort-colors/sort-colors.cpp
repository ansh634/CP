class Solution {
public:
    void sortColors(vector<int>& nums) {
        int zCount = 0;
        int oCount = 0;
        int tCount = 0;
        for (auto num : nums) {
            if (num == 0) zCount++;
            else if (num == 1) oCount++;
            else tCount++;
        }
        int t = 0;
        for (int i = 0; i < zCount; i++) nums[t++] = 0;
        for (int i = 0; i < oCount; i++) nums[t++] = 1;
        for (int i = 0; i < tCount; i++) nums[t++] = 2;
    }
};