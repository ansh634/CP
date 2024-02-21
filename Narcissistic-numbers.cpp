#include <iostream>

using namespace std;

// Function to calculate the number of digits in a given number
int countDigits(int num) {
  long long  int count = 0;
    while (num != 0) {
        num /= 10;
        count++;
    }
    return count;
}

// Function to check if a number is a Narcissistic number
bool isNarcissistic(int num) {
  long long  int originalNum = num;
  long long  int numDigits = countDigits(num);
   long long int sum = 0;

    while (num != 0) {
      long long  int digit = num % 10;

        // Using multiplication instead of pow
      long long  int poweredDigit = 1;
        for (int i = 0; i < numDigits; ++i) {
            poweredDigit *= digit;
        }

        sum += poweredDigit;
        num /= 10;
    }

    return (sum == originalNum);
}

int main() {
  long long  int number;
    cin >> number;

    if (isNarcissistic(number)) {
        cout << "Yes" << endl;
    } else {
        cout << "No" << endl;
    }

    return 0;
}
