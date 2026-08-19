#include <bits/stdc++.h>
using namespace std;

int main() {
    int X, Y, Z;
    cin >> X >> Y >> Z;

    int cost = X;
    if (Z > 50) {
        cost += (Z - 50) * Y;
    }

    cout << cost << '\n';
    return 0;
}
