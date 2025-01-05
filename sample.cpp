#include <iostream>
#include <string>
#include <vector>
using namespace std;

// Function to check if t is a subsequence of s
bool canBeSubsequence(string &s, string &t) {
    int m = s.size(), n = t.size();
    int j = 0; // Index for t
    for (int i = 0; i < m && j < n; i++) {
        if (s[i] == t[j]) {
            j++;
        }
    }
    return (j == n);
}

int main() {
    int T;
    cin >> T;
    
    while (T--) {
        string s, t;
        cin >> s >> t;
        
        bool possible = false;
        int n = s.size(), m = t.size();
        
        // Attempt to replace "?" in a way that allows t to be a subsequence
        for (int i = 0; i <= n - m; i++) {
            string temp = s;
            int k = 0;
            for (int j = i; j < i + m; j++) {
                if (temp[j] == '?' || temp[j] == t[k]) {
                    temp[j] = t[k];
                    k++;
                } else {
                    break;
                }
            }
            if (k == m && canBeSubsequence(temp, t)) {
                possible = true;
                for (char &ch : temp) {
                    if (ch == '?') {
                        ch = 'a';
                    }
                }
                s = temp;
                break;
            }
        }
        
        if (possible) {
            cout << "YES" << endl;
            cout << s << endl;
        } else {
            cout << "NO" << endl;
        }
    }
    
    return 0;
}
