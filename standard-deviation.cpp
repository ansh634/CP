#include <iostream>
#include <vector>
#include <cmath>
#include <iomanip>

int main() {
    while (true) {
        long long int n;
        std::cin >> n;

        if (n == 0) {
            break;  // Exit the loop if n is zero
        }

        std::vector<double> arr(n);
        long double sum = 0;

        for (int i = 0; i < n; i++) {
            std::cin >> arr[i];
            sum += arr[i];
        }

        long double m = sum / n;
        long double var = 0;

        for (int i = 0; i < n; i++) {
            var += pow(arr[i] - m, 2) / n;
        }

        long double dev = sqrt(var);
        std::cout<<std::fixed << std::setprecision(8) << dev << std::endl;
    }

    return 0;
}
