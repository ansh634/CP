#include <bits/stdc++.h>
using namespace std;

int bubbleSort(vector<int>& arr) {
    int n = arr.size();
    int swaps = 0;
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                swap(arr[j], arr[j + 1]);
                swaps++;
            }
        }
    }
    return swaps;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> arr(n);
        for (int i = 0; i < n; i++) cin >> arr[i];
        
        int totalSwaps = bubbleSort(arr);
        cout << totalSwaps << "\n";
    }
    
    return 0;
}
