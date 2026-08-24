#include <bits/stdc++.h>
using namespace std;

int main() {
    int X, Y;
    cin >> X >> Y;

    if (Y > X)
        cout << "INCREASED\n";
    else if (Y < X)
        cout << "DECREASED\n";
    else
        cout << "SAME\n";

    return 0;
}
