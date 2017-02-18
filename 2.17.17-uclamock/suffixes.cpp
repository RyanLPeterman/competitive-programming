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
    ll n, m, temp;
    std::cin >> n >> m;

    std::vector<ll> nums;

    for (ll i = 0; i < n; i++) {
        std::cin >> temp; 
        nums.push_back(temp);
    }

    ll * ans = new ll [n];
    std::set<ll> seen;

    ans[n - 1] = 1;
    seen.insert(nums[n - 1]);

    for (ll i = n - 2; i >= 0; i--) {
        // have seen element before, not new distinct
        if (seen.find(nums[i]) != seen.end()) {
            ans[i] = ans[i + 1];
        } else {
            seen.insert(nums[i]);
            ans[i] = ans[i + 1] + 1;
        }
    }

    for (ll i = 0; i < m; i++) {
        std::cin >> temp;
        std::cout << ans[temp - 1] << std::endl;
    }
    delete ans;
}

int main(){
	// makes io faster by decoupling cin and cout
    std::ios_base::sync_with_stdio(0);
    std::cin.tie(0);
    solve();
}
