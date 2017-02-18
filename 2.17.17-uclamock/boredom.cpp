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
    ll n, temp, max = 0;
    std::cin >> n;
    std::map<ll, ll> nums;

    for (ll i = 0; i < n; i++) {
        std::cin >> temp;
        if (temp > max) {
            max = temp;
        }
        nums[temp]++;        
    }

    // base case
    ll last = nums[1];
    ll lastlast = 0; 
    ll curr;

    for (ll i = 2; i <= max; i++) {
        temp = std::max(last, lastlast + nums[i] * i);
        lastlast = last;
        last = temp;
    }
    
    std::cout << last << std::endl;
}


int main(){
	// makes io faster by decoupling cin and cout
    std::ios_base::sync_with_stdio(0);
    std::cin.tie(0);
    solve();
}
