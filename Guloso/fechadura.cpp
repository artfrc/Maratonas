// @art.frc
// Link: https://neps.academy/br/exercise/391

#include <bits/stdc++.h>
using namespace std;
    
vector<int> v;
int n,m;

int solve() {
    if(n == 1) return abs(m-v[0]);
    int ans = 0;
    for(int i = 0; i < v.size()-1; i++) {
        int rest = m-v[i];
        ans += abs(rest);
        v[i+1] += rest;
    }
    return ans;
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    cin >> n >> m;
    for(int i = 0; i < n; i++) {
        int x; cin >> x;
        v.push_back(x);
    }
    cout << solve() << endl;
}