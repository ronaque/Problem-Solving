#include <bits/stdc++.h>

#define lli long long int
#define ld long double

using namespace std;

int main() {
    lli n;
    cin >> n;
    while (n != 1) {
        printf("%lld ", n);
        if (n % 2 == 0) {
            n = n / 2;
        } else {
            n = n * 3 + 1;
        }
    }
    printf("%lld", n);
}