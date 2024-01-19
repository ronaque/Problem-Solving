
#include <bits/stdc++.h>

#define lli long long int
#define ld long double
#define line '\n'
#define DEBUG false

using namespace std;

bool is_prime(lli j){
    for (int i = 2; i < j/2; ++i) {
        if (j % i == 0)
            return false;
    }
    return true;
}

int main() {
    clock_t begin = clock();

    int t;
    cin >> t;
    for (int i = 0; i < t; ++i) {
        lli n;
        cin >> n;
        if (is_prime(n)){
            cout << n << line;
            continue;
        }
        for (lli j = 2; j < n; j++) {
            if (n % j == 0){
                n /= j;
                if (is_prime(n)){
                    cout << n << line;
                    break;
                }

                j = 1;
            }
        }
    }

    clock_t end = clock();

    if (DEBUG)
        cout << (end - begin) / (double)CLOCKS_PER_SEC << line;
}