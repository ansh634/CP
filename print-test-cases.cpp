#include <iostream>
using namespace std;

int main() {
    int x, caseNumber = 1;

    while (true) {
        cin >> x;

        if (x == 0) {
            break;  
        }

        cout << "Case " << caseNumber << ": " << x << endl;
        caseNumber++;
    }

    return 0;
}
