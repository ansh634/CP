class Solution {
public:
    vector<int> solve(int n, vector<vector<int>>& adj) {
        vector<int> ans(n, 0);
        vector<bool> vis(n, false);
        vis[0] = true;
        queue<pair<int, int>> q;
        q.push({0, 0});
        while (!q.empty()) {
            auto top = q.front();
            q.pop();
            if (top.second % 2 == 0) {
                ans[top.first] = 1;
            }
            for (auto x : adj[top.first]) {
                if (!vis[x]) {
                    vis[x] = true;
                    q.push({x, top.second + 1});
                }
            }
        }
        return ans;
    }

    vector<int> maxTargetNodes(vector<vector<int>>& edges1,
                               vector<vector<int>>& edges2) {
        int n = edges1.size();
        int m = edges2.size();
        vector<vector<int>> adj1(n + 1);
        vector<vector<int>> adj2(m + 1);
        for (int i = 0; i < n; i++) {
            adj1[edges1[i][0]].push_back(edges1[i][1]);
            adj1[edges1[i][1]].push_back(edges1[i][0]);
        }
        for (int i = 0; i < m; i++) {
            adj2[edges2[i][0]].push_back(edges2[i][1]);
            adj2[edges2[i][1]].push_back(edges2[i][0]);
        }
        vector<int> tree1 = solve(n + 1, adj1);
        vector<int> tree2 = solve(m + 1, adj2);
        int t1 = accumulate(tree1.begin(), tree1.end(), 0);
        int t2 = accumulate(tree2.begin(), tree2.end(), 0);
        int maxeven = max(t2, ((m + 1) - t2));
        vector<int> ans(n + 1);
        for (int i = 0; i <= n; i++) {
            if (tree1[i] == 1) {
                ans[i] = t1 + maxeven;
            } else {
                ans[i] = ((n + 1) - t1) + maxeven;
            }
        }
        return ans;
    }
};