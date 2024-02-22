#include <iostream>
#include <vector>

using namespace std;

int main() {
    int n;
    cin >> n;

    const int buildings = 4, floors = 3, rooms = 10;
    vector<vector<vector<int>>> tenants(buildings, vector<vector<int>>(floors, vector<int>(rooms, 0)));

    for (int i = 0; i < n; i++) {
        int b, f, r, v;
        cin >> b >> f >> r >> v;

        tenants[b - 1][f - 1][r - 1] += v;
    }

    for (int b = 0; b < buildings; b++) {
        for (int f = 0; f < floors; f++) {
            for (int r = 0; r < rooms; r++) {
                cout << " " << tenants[b][f][r];
            }
            cout << endl;
        }

        if (b < buildings - 1) {
            cout << "####################" << endl;
        }
    }

    return 0;
}
