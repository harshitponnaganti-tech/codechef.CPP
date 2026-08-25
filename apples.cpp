#include <iostream>
using namespace std;

int main() {
    int X, A, B;
    cin >> X;
    cin >> A >> B;

    if (X >= A + B)
        cout << "Yes" << endl;
    else
        cout << "No" << endl;

    return 0;
}
