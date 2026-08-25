#include <iostream>
using namespace std;

int main() {
    int T;
    cin >> T;

    while (T--) {
        int X, P, Q;
        cin >> X >> P >> Q;

        int withoutTicket = P - Q;
        int fine = withoutTicket * X;

        cout << fine << endl;
    }

    return 0;
}
