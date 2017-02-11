#include <iostream>
#include <algorithm>
#include <vector>
#include <deque>
#include <cassert>
#include <queue>
#include <stack>
#include <set>
#include <map>
#include <string>
#include <utility>
#include <cmath>
#include <bitset>
#include <climits>
#include <iomanip>
#include <fstream>
#include <unordered_set>
#include <unordered_map>
#include <cstdio>
#include <cstring>

#define ll long long
#define N (ll)(1e6+5)
#define INF (ll)(1e18+3)
#define EPS (1e-9)
#define PI (3.14159265358979323846)
#define ld double
#define MOD (ll)(1e9+7)

ll calc_f_of_v(ll v, ll k) {
    ll sum = v;
    ll init_k = k;
    
    while (v/k != 0) {
        sum += v/k;
        k *= init_k;
    }

    return sum;
}

void solve() {
    ll n, k;
    // n = lines of code
    std::cin >> n;
    // k = reduction coeff
    std::cin >> k;

    // f(v) = v/k + v/k^2 ... until v/k^n = 0
    // this function is monotonic
    
    // find v with binary search
    ll l = 0, r = n;
    while (l < r) {

        ll mid = (l + r)/2;
        
        //  if f(v, k) is large enough, then set right to v
        if (calc_f_of_v(mid, k) >= n) {
            r = mid;
        } else {
            l = mid + 1;
        }
    }

    std::cout << l << std::endl;
}

int main(){
	// makes io faster by decoupling cin and cout
    std::ios_base::sync_with_stdio(0);
    std::cin.tie(0);
    solve();
}
