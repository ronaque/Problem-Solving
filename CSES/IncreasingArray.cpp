
#include <bits/stdc++.h>

#define lli long long int
#define ld long double

using namespace std;

int main() {
    lli n, moves = 0;
    cin >> n;
    vector<lli> v{};

    for (lli i = 0; i < n; ++i) {
      lli x;
      cin >> x;
      v.push_back(x);
    }

    for (lli i = 1; i < v.size() ; ++i) {
        if (v[i] < v[i - 1]) {
            moves += v[i - 1] - v[i];
            v[i] = v[i - 1];
        }
    }

    cout << moves;
}