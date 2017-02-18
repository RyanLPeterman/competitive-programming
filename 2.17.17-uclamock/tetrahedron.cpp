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
    ll n;
    std::cin >> n;

    // num ways to get to vert d
    ll dp_d = 1;
    // num ways to get to vert a b c
    ll dp_abc = 0;    
    for (ll i = 1; i <= n; i++) {
        ll temp_d = dp_abc * 3 % MOD;
        ll temp_abc = (dp_abc * 2 + dp_d) % MOD;
        dp_d = temp_d;
        dp_abc = temp_abc;
    }

    std::cout << dp_d << std::endl;
}

int main(){
	// makes io faster by decoupling cin and cout
    std::ios_base::sync_with_stdio(0);
    std::cin.tie(0);
    solve();
}
