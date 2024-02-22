#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int main() {
    int a, b, C;
    cin >> a >> b >> C;

    double S = 0.5 * a * b * sin(C * M_PI / 180.0);
    double L = a + b + sqrt(a * a + b * b - 2 * a * b * cos(C * M_PI / 180.0));
    double h = b * sin(C * M_PI / 180.0);

    cout << fixed << setprecision(8) << S << endl;
    cout << fixed << setprecision(8) << L << endl;
    cout << fixed << setprecision(8) << h << endl;

    return 0;
}
