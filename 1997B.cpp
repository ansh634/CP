#include <bits/stdc++.h>
using namespace std;
const int dx[] = {1, -1, 0, 0};
const int dy[] = {0, 0, 1, -1};

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;
        vector<string> arr(2);
        cin >> arr[0] >> arr[1];

        auto bfs = [&](const vector<string>& arr, vector<vector<bool>>& visited, int i, int j) {
            queue<pair<int, int>> q;
            q.push({i, j});
            visited[i][j] = true;

            while (!q.empty()) {
                auto current = q.front();
                int cx = current.first;
                int cy = current.second;
                q.pop();

                for (int k = 0; k < 4; ++k) {
                    int nx = cx + dx[k], ny = cy + dy[k];
                    if (nx >= 0 && nx < 2 && ny >= 0 && ny < n && !visited[nx][ny] && arr[nx][ny] == '.') {
                        visited[nx][ny] = true;
                        q.push({nx, ny});
                    }
                }
            }
        };

        auto countRegions = [&](const vector<string>& arr) {
            vector<vector<bool>> visited(2, vector<bool>(n, false));
            int regions = 0;

            for (int i = 0; i < 2; ++i) {
                for (int j = 0; j < n; ++j) {
                    if (!visited[i][j] && arr[i][j] == '.') {
                        bfs(arr, visited, i, j);
                        regions++;
                    }
                }
            }

            return regions;
        };

        int originalRegions = countRegions(arr);
        int result = 0;

        for (int i = 0; i < 2; ++i) {
            for (int j = 0; j < n; ++j) {
                if (arr[i][j] == '.') {
                    arr[i][j] = 'x';
                    int newRegions = countRegions(arr);
                    if (newRegions == 3) {
                        result++;
                    }
                    arr[i][j] = '.';
                }
            }
        }

        cout << result << endl;
    }

    return 0;
}
