// @art.frc
// Link: https://neps.academy/br/exercise/1469

#include <bits/stdc++.h>
using namespace std;

typedef long int li;

int n;
vector<int> v;
li q;
int mx = INT_MIN;

void solve() {
    for(int i = 0; i < n; i++) {
        q -= (mx-v[i]);
    }
    if(q == 0 or (q > 0 and q % n == 0)) cout << "Boa Sorte" << endl;
    else cout << "Sem Sorte" << endl;
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    cin >> n;
    for(int i = 0; i < n; i++) {
        int x; cin >> x;
        v.push_back(x);
        mx = max(mx,x);
    }
    cin >> q;
    solve();
}