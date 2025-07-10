class Solution {
public:
    int maxFreeTime(int eventTime, vector<int>& s, vector<int>& e) {
        int n = s.size();
        vector<int> gap(n+1,0);
        for(int i=1;i<n;i++){
            gap[i] = s[i] - e[i-1];
        }
        gap[0] = s[0];
        gap[n] = eventTime - e[n-1];
        vector<int> leftbest(n,0);
        vector<int> rightbest(n,0);
        int currmax = 0;
        for(int i=1;i<n;i++){
            currmax = max(currmax, gap[i-1]);
            leftbest[i] = currmax;
        }
        currmax = 0;
        for(int i=n-2;i>=0;i--){
            currmax = max(currmax, gap[i+2]);
            rightbest[i] = currmax;
        }
        currmax = 0;
        for(int i=0;i<n;i++){
            int total = 0;
            if(leftbest[i] >= e[i] - s[i] || rightbest[i] >= e[i] - s[i]){
                total += e[i] - s[i];
            }
            currmax = max(currmax, total+gap[i] + gap[i+1]);
        }
        return currmax;
    }
};