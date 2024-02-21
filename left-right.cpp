#include<bits/stdc++.h>
using namespace std;

int main() {
   long long int n;
    cin >> n;
   long long int thousands = n / 1000;
   long long int hundreds = (n % 1000) / 100;
  long long  int tens = (n % 100) / 10;
   long long int units = n % 10;

   long long int swappedNumber = units * 1000 + hundreds * 100 + tens * 10 + thousands;

    cout << swappedNumber << endl;

    return 0;
}
