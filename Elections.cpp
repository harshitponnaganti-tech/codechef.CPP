#include <bits/stdc++.h>
using namespace std;

int main() {
    int N, K;
    cin >> N >> K;

    int required = N / 2 + 1;
    cout << max(0, required - K) << endl;

    return 0;
}
