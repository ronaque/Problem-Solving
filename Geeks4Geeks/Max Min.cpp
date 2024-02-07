
#include <bits/stdc++.h>

#define lli long long int
#define ld long double
#define line '\n'
#define DEBUG false

using namespace std;

int main() {
    clock_t begin = clock();

    lli n;
    cin >> n;
    lli min = 999999, max = -99999;
    for (lli i = 0; i < n; ++i) {
      lli aux;
      cin >> aux;
      if (aux < min)
          min = aux;
      if (aux > max)
          max = aux;
    }

    cout << max + min << line;

    clock_t end = clock();
    double time_spent = (double) (end - begin) / CLOCKS_PER_SEC;
    if (DEBUG)
        cout << time_spent << line;
}