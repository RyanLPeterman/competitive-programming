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
    ll twos, threes, fives, sixes;

    cin >> twos;
    cin >> threes;
    cin >> fives;
    cin >> sixes;
    
    // see how many 256's you can make
    ll num_256 = min(twos, fives);
    num_256 = min(num_256, sixes);

    // update number of twos
    twos -= num_256;

    // see how many 32's you can make
    ll num_32 = min(twos, threes);

    cout << num_256*256 + num_32*32 << endl;

	 
}

int main(){
		
	// makes io faster by decoupling cin and cout
    ios_base::sync_with_stdio(0);
	cin.tie(0);
    solve();
}
