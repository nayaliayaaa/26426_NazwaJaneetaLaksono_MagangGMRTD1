#include <bits/stdc++.h>
using namespace std;

long long ceil_div(long long a, long long b) {
    return (a + b - 1) / b;
}

int main() {
    long long k, n, m;
    cin >> k >> n >> m;

    if (n == 0 && m == 0) {
        cout << 0 << '\n';
        return 0;
    }

    if (n % 3 != 0 || m % 3 != 0) {
        cout << -1 << '\n';
        return 0;
    }

    long long c2 = k / 2; 
    long long c1 = k;     

    long long x = n / 3; 
    long long y = m / 3;  

    if (x > 0 && c2 == 0) {
        cout << -1 << '\n';
        return 0;
    }

    if (y > 0 && c1 == 0) {
        cout << -1 << '\n';
        return 0;
    }

    long long ans = 0;

    
    if (x > 0) {
        ans += ceil_div(2 * x, c2); 
        ans += 2 * ceil_div(x, c2); 
    }

    // Barang 1 kg
    if (y > 0) {
        ans += ceil_div(2 * y, c1); 
        ans += 2 * ceil_div(y, c1); 
    }

    cout << ans << '\n';

    return 0;
}