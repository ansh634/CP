#include<bits/stdc++.h>
using namespace std;

int main() {
    long long int n;
    cin >> n;

    long long int three = n / 3;
    long long int five = n / 5;
    long long int fifteen = n / 15; 

    long long int result = three + five - fifteen;

    cout << result << endl;

    return 0;
}
