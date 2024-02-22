#include<bits/stdc++.h>
using namespace std;

int main() {
    long long int t;
    cin >> t;

    while(t--) {
        long long int l, r, m;
        cin >> l >> r >> m;

        long long int page = m / l;
        long long int code = m / r;

        if (m % l != 0) {
            page++;
        }

        if (m % r != 0) {
            code++;
        }

        cout << page + code << endl;
    }

    return 0;
}
