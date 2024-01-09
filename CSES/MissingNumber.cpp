
#include <bits/stdc++.h>

#define lli long long int
#define ld long double

using namespace std;

int main() {
    lli n;
    cin >> n;

    vector<lli> v;

    for (lli i = 0; i < n - 1; i++){
        lli m;
        cin >> m;
        v.push_back(m);
    }

    sort(v.begin(), v.end());

    for (lli i = 0; i < n; ++i) {
        if (v[i] != i + 1){
            cout << i + 1;
            return 0;
        }
    }
}