#include <bits/stdc++.h>
using namespace std;

int main() {
    string X;
    cin >> X;

    for (int i = 1; i < X.size(); i++) {
        if (X[i] != X[0]) {
            cout << "Yes\n";
            return 0;
        }
    }

    cout << "No\n";
    return 0;
}
