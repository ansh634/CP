  #include <bits/stdc++.h>
#define ll long long int
#define nline '\n'
using namespace std;

void solve()
{
    ll n;
    cin >> n;

    ll maxEle = INT_MIN, minEle = INT_MAX;

    for (int i = 0; i < n; i++)
    {
        ll temp;
        cin >> temp;

        maxEle = max(maxEle, temp);
        minEle = min(minEle, temp);
    }

    if (minEle < 0)
        cout << minEle << nline;
    else
        cout << maxEle << nline;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll T = 1;
    cin >> T;
    while (T--) 
    {
        solve();
    }

}