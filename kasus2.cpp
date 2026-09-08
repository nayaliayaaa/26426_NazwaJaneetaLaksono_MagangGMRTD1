#include <bits/stdc++.h>
using namespace std;

int main() {
    long long n, C, R, K;
    cin >> n >> C >> R >> K;

    long long battery = C;
    long long usedCharge = 0;
    long long completed = 0;

    for (int i = 0; i < n; i++) {
        long long x;
        cin >> x;

        if (battery < x) {
            if (usedCharge >= K) {
                break;
            }
            usedCharge++;

            battery = min(C, battery + R);
        }

        if (battery < x) {
            break;
        }

        battery -= x;
        completed++;
    }

    cout << completed << '\n';

    return 0;
}