#include <bits/stdc++.h>
using namespace std;
int main()
{
	long long int n ,a = 0, b = 1, c, i;
	cin>>n;
    if (n == 0)
		return a;
	for (i = 2; i <= n; i++) {
		c = a + b;
		a = b;
		b = c;
	}

	cout << b<<endl;
	return 0;
}