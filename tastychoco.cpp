#include <iostream>
using namespace std;

int main() {
    int T;
    cin >> T;

    while (T--) {
        int X, Y;
        cin >> X >> Y;

        int chocolate = 2 * X;
        int candy = 5 * Y;

        if (chocolate > candy)
            cout << "Chocolate\n";
        else if (candy > chocolate)
            cout << "Candy\n";
        else
            cout << "Either\n";
    }

    return 0;
}
