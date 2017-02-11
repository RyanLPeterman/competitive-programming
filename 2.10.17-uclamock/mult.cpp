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
    ll n, m, k;
    std::cin >> n;
    std::cin >> m;
    std::cin >> k;

    // search space: 0 - n*m
    // we want the kth largest number
    // 1. How do we defined our comparision function
    // 2. Even if we did, how would you know which number you are in the range
    //  i.e. if we cut away half the problem (how many numbers are even in cut off range)?
    ll l = 0, r = n*m;
    
    while (l < r) {
        mid = 

    }

    std::cout << l << std::endl;
}

int main(){
	// makes io faster by decoupling cin and cout
    std::ios_base::sync_with_stdio(0);
    std::cin.tie(0);
    solve();
}
