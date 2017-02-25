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

void solve() {
    ll n, k;
    std::cin >> n >> k;

    std::vector<ll> divs;
    
    // for every potential divisor of smallest num
    for(ll i = 1; i*i <= n; i++) {
        // i is divisor
        if (n % i == 0) {
            divs.push_back(i);

            // if we didnt already add divisor
            if (n/i != i)
                divs.push_back(n/i);
        }
    }
    if (divs.size() < k) {
        std::cout << -1 << std::endl;
    } else {
        std::sort(divs.begin(), divs.end());
        std::cout << divs[k - 1] << std::endl;
    }
}

int main(){
	// makes io faster by decoupling cin and cout
    std::ios_base::sync_with_stdio(0);
    std::cin.tie(0);
    solve();
}
