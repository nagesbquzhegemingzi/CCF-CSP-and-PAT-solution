#include <bits/stdc++.h>
using namespace std;
using gg = long long;
int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    gg a, b;
    cin >> a >> b;
    a = (gg)round((b - a) / 100.0);
    cout << setfill('0') << setw(2) << a / 3600 << ":" << setw(2) << a / 60 % 60
         << ":" << setw(2) << a % 60;
    return 0;
}