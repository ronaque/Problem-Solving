
#include <bits/stdc++.h>

#define lli long long int
#define ld long double

using namespace std;

int main() {
    string n;
    cin >> n;
    int longest = 0, aux = 1;

    for (int i = 1; i <= n.length(); ++i) {
        if (n[i] == n[i-1])
            aux++;
        else{
            if (longest < aux)
                longest = aux;
            aux = 1;
        }
    }
    cout << longest;
}