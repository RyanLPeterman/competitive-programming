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

    std::set<ll> nums;
    // ith position represents ith jewlry
    std::vector<ll> colors(n);    

    // populate set of numbers
    for (ll i = 2; i <= n + 1; i++)
        nums.insert(nums.end(), i);

    // for every jewelry
    for (ll i = 0; i < n; i++) {
        ll val = i + 2;
        // if nums hasnt been colored yet must be prime since we are using sieve
        if (nums.find(val) != nums.end()) {
            colors[i] = 1;

            for (ll j = 2*val; j <= n + 1; j += val) {
                colors[j - 2] = 2;
                nums.erase(j);
            }
        }
    }
    std::cout << 2 << std::endl;
    for (ll i = 0; i < n; i++)
        std::cout << colors[i] << " ";
    std::cout << std::endl;
}

int main(){
	// makes io faster by decoupling cin and cout
    std::ios_base::sync_with_stdio(0);
    std::cin.tie(0);
    solve();
}
