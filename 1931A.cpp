#include <bits/stdc++.h>
#define ll long long int
#define nline '\n'
using namespace std;

void solve()
{
    ll n;
    cin >> n;

    map<ll, vector<string>> hMap;

    for (char ch = 'a'; ch <= 'z'; ch++)
    {
        for (char ch1 = 'a'; ch1 <= 'z'; ch1++)
        {
            for (char ch2 ='a'; ch2 <= 'z'; ch2++)
            {
                int curr = (ch - 'a') + (ch1 - 'a') + (ch2 - 'a') + 3;

                string ans = "";

                ans += ch;
                ans += ch1;
                ans += ch2;

                hMap[curr].push_back(ans);
            }
        }
    }

    sort(hMap[n].begin(), hMap[n].end());

    cout << hMap[n][0] << nline;
 
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