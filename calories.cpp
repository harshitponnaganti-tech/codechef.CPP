#include <iostream>
using namespace std;

int main() {
    int X, Y, Z;
    cin >> X >> Y >> Z;

    int eaten = Y * Z;

    if (eaten > X)
        cout << -1;
    else
        cout << X - eaten;

    return 0;
}
