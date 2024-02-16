#include <bits/stdc++.h>
using namespace std;

int main() {
    long long m, n, o;
    cin >> m >> n >> o;

    long long a = ((m + o - 1) / o) * ((n + o - 1) / o);

    cout << a << endl;

    return 0;
}
