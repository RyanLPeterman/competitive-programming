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
    std::string first, second;
    std::cin >> first >> second;
    ll n;
    std::cin >> n;
    std::cout << first << " " << second << std::endl;

    std::string dead, next;
    
    for (ll i = 0; i < n; i++) {
        std::cin >> dead >> next;
        if (dead == first)
            first = next;
        else
            second = next;
        std::cout << first << " " << second << std::endl;
    }
}

int main(){
	// makes io faster by decoupling cin and cout
    std::ios_base::sync_with_stdio(0);
    std::cin.tie(0);
    solve();
}
