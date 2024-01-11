
#include <bits/stdc++.h>

#define lli long long int
#define ld long double

using namespace std;

lli triangular(lli x){
    return x * (x + 1) / 2;
}

int main() {
    lli n;
    cin >> n;
    while(n--) {
        lli m;
        cin >> m;
        m--;
        lli sum = 0;
        sum += 3 * triangular(m/3);
        sum += 5 * triangular(m/5);
        sum -= 15 * triangular(m/15);
        cout << sum << endl;
    }
}