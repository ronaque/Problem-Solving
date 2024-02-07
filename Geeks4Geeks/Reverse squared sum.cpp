
#include <bits/stdc++.h>

#define lli long long int
#define ld long double
#define line '\n'
#define DEBUG false

using namespace std;

int main() {
    clock_t begin = clock();

    lli t;
    cin >> t;
    for (lli i = 0; i < t; ++i) {
      lli n;
      cin >> n;
      vector<lli> v;
      lli sum = 0;
      for (lli l = 0; l < n; ++l) {
        lli aux;
        cin >> aux;
        v.push_back(aux);
      }

//      cout << v.size() << line;
      sum += v[v.size()-1] * v[v.size()-1];
      lli nrounds = 1;
      for (lli k = v.size() - 2; k >= 0; k--) {
        if (nrounds % 2 == 1){
            sum -= v[k] * v[k];
        } else {
            sum += v[k] * v[k];
        }
          nrounds++;
      }

      cout << sum << line;
    }

    clock_t end = clock();
    double time_spent = (double) (end - begin) / CLOCKS_PER_SEC;
    if (DEBUG)
        cout << time_spent << line;
}