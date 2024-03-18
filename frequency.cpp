#include <iostream>
#include <vector>
#include <unordered_map>
#include <algorithm>
using namespace std;

bool compare(pair<int, int>& a, pair<int, int>& b) {
    if (a.second == b.second)
        return a.first < b.first; // Sort by value in descending order when frequency is the same
    return a.second < b.second; // Sort by frequency in ascending order
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> arr(n);
        unordered_map<int, int> freq_map;

        // Read input and count frequencies
        for (int i = 0; i < n; ++i) {
            cin >> arr[i];
            freq_map[arr[i]]++;
        }

        // Convert frequency map to vector of pairs
        vector<pair<int, int>> freq_pairs;
        for (auto& kv : freq_map) {
            freq_pairs.push_back(kv);
        }

        // Sort frequency pairs
        sort(freq_pairs.begin(), freq_pairs.end(), compare);

        // Print the sorted array
        for (auto& freq_pair : freq_pairs) {
            int num = freq_pair.first;
            int freq = freq_pair.second;
            for (int i = 0; i < freq; ++i) {
                cout << num << " ";
            }
        }
        cout << endl;
    }
    return 0;
}
