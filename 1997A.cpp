#include <bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin >> t;
    vector<string> res(t);

    for (int i = 0; i < t; ++i) {
        string s;
        cin >> s;
        string bs;
        int maxTime = -1;
        for (char ch = 'a'; ch <= 'z'; ++ch) {
            for (size_t j = 0; j <= s.length(); ++j) {
                string newString = s.substr(0, j) + ch + s.substr(j);
                int time = 2; 

                for (size_t k = 1; k < newString.length(); ++k) {
                    if (newString[k] == newString[k - 1])
                        time += 1;
                    else
                        time += 2;
                }

                if (time > maxTime) {
                    maxTime = time;
                    bs = newString;
                }
            }
        }

        res[i] = bs;
    }

    for (const string& result : res) {
        cout << result << endl;
    }

    return 0;
}
