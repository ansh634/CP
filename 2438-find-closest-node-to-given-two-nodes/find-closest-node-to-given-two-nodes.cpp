class Solution {
public:
    vector<int> BFS(int start, const vector<int>& edges){
        int n = edges.size();
        vector<int> dist(n, -1);
        queue<pair<int, int>> q;
        q.push({start, 0});
        vector<bool> visited(n, false);
        while (!q.empty()){
            auto [node, d] = q.front(); q.pop(); 
            if (visited[node])
                continue;
            visited[node] = true;
            dist[node] = d;
            int next_node = edges[node];
            if (next_node != -1){
                q.push({next_node, d + 1});
            }
        }
        return dist;
    }
    int closestMeetingNode(vector<int>& edges, int node1, int node2) {
        vector<int> dist1 = BFS(node1, edges);
        vector<int> dist2 = BFS(node2, edges);
        int min_dist = INT_MAX;
        int res = -1;
        for (int i = 0; i < (int)edges.size(); i++){
            if (dist1[i] != -1 && dist2[i] != -1){
                int max_dist = max(dist1[i], dist2[i]);
                if (max_dist < min_dist){
                    min_dist = max_dist;
                    res = i;
                }
            }
        }
        return res;
    }
};