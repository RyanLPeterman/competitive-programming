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
    ll n;
    string s;
    cin >> n;
    cin >> s;
    ll num_bumpers = 0;

    for (ll i = 0; i < s.size(); i++) {
        if (s[i] == '<') 
            num_bumpers++;
        else 
            break;
    }

    for (ll i = s.size() - 1; i >= 0; i--) {
        if (s[i] == '>')
            num_bumpers++;
        else 
            break;
    }
    cout << num_bumpers << endl;
}

int main(){
		
	// makes io faster by decoupling cin and cout
    ios_base::sync_with_stdio(0);
	cin.tie(0);
    solve();
}
