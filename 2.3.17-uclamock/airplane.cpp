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

using namespace std;

#define ll long long
#define N (ll)(1e6+5)
#define INF (ll)(1e18+3)
#define EPS (1e-9)
#define PI (3.14159265358979323846)
#define ld double
#define MOD (ll)(1e9+7)

void solve() {

    char letter;
    ll row;
    cin >> row;
    cin >> letter;

    // each cycle takes 16 seconds
    ll num_cycles = (row-1) / 4;
    row = row % 4;

    ll time = num_cycles * 16;

    char map[] = {4, 5, 6, 3, 2, 1};
    time += map[letter - 'a'];    
    
    // even row
    if (row % 2 == 0) {
        time += 7;
    }

    cout << time << endl;
}

int main(){
		
	// makes io faster by decoupling cin and cout
    ios_base::sync_with_stdio(0);
	cin.tie(0);
    solve();
}
