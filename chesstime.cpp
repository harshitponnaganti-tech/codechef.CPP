#include <iostream>
using namespace std;

int main() {
    int T;
    cin >> T;

    while (T--) {
        int N;
        cin >> N;

        // Convert hours to minutes, then divide by 20
        cout << (N * 60) / 20 << endl;
    }

    return 0;
}
