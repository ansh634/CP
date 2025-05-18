class Solution {
public:
    int mod = 1e9 + 7;
    void generateStates(int m, vector<vector<int>>& states, vector<int>& curr) {
        if (curr.size() == m) {
            states.push_back(curr);
            return;
        }
        for (int color = 0; color < 3; color++) {
            if (curr.empty() || curr.back() != color) {
                curr.push_back(color);
                generateStates(m, states, curr);
                curr.pop_back();
            }
        }
    }

    bool isCompatible(const vector<int>& a, const vector<int>& b) {
        for (int i = 0; i < a.size(); i++)
            if (a[i] == b[i]) return false;
        return true;
    }

    int colorTheGrid(int m, int n) {
        vector<vector<int>> states;
        vector<int> curr;
        generateStates(m, states, curr);
        int sz = states.size();

        
        vector<vector<int>> adj(sz);
        for (int i = 0; i < sz; i++)
            for (int j = 0; j < sz; j++)
                if (isCompatible(states[i], states[j]))
                    adj[i].push_back(j);
        vector<int> dp(sz, 1);  
        for (int col = 1; col < n; col++) {
            vector<int> new_dp(sz, 0);
            for (int i = 0; i < sz; i++) {
                for (int j : adj[i]) {
                    new_dp[j] = (new_dp[j] + dp[i]) % mod;
                }
            }
            dp = new_dp;
        }
        int result = 0;
        for (int val : dp) result = (result + val) % mod;
        return result;
    }
};