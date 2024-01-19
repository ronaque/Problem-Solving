
#include <bits/stdc++.h>

#define lli long long int
#define ld long double
#define line '\n'

using namespace std;

int main() {
    int n;
    cin >> n;

    if (n == 1){
        cout << "1";
        return 0;
    }
    if (n <= 3){
        cout << "NO SOLUTION";
        return 0;
    }

    for (int i = 2; i <= n; i+=2) {
        cout << i << line;
        // Endl adiciona ao cout um \n e realiza um flush, tornando o código lento
        // cout << i << endl;
    }
    for (int i = 1; i <= n; i += 2) {
        cout << i << line;
        // Endl adiciona ao cout um \n e realiza um flush, tornando o código lento
        // cout << i << endl;
    }
}