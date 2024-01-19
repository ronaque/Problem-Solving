
#include <bits/stdc++.h>

#define lli long long int
#define ld long double
#define line '\n'

using namespace std;

int main() {
    int t;
    cin >> t;
    for (int i = 0; i < t; ++i) {
        lli n;
        cin >> n;
        lli t1 = 1, t2 = 2;
        lli sum = 2;
        for (lli j = t1 + t2; j <= n; j = t1 + t2) {
            if (j % 2 == 0)
                sum += j;
            t1 = t2;
            t2 = j;
        }
        cout << sum << line;
    }
}