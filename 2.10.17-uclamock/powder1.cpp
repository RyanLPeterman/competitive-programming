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
    ll n, powder;
    std::cin >> n >> powder;
    
    std::vector<ll> need;
    std::vector<ll> have;
    ll tmp;

    for(ll i; i < n; i++) {
        std::cin >> tmp;
        need.push_back(tmp);
    }
    for(ll i; i < n; i++) {
        std::cin >> tmp;
        have.push_back(tmp);
    }
    
    // perform have[i]/need[i] and update have[i]
    // 
}

int main(){
	// makes io faster by decoupling cin and cout
    std::ios_base::sync_with_stdio(0);
    std::cin.tie(0);
    solve();
}
