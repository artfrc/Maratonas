// @art.frc
// Link: https://neps.academy/br/exercise/975

#include <bits/stdc++.h>
using namespace std;

vector<int> v;

int solve() {
    sort(v.begin(),v.end(),greater<int>());
    int ans = 0;
    int aux = 1;
    for(int i = 0; i < v.size(); i++) {
        if(aux == 3) {
            aux = 1;
            continue;
        }   
        ans += v[i];
        aux++;
    }
    return ans;
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int n;
    cin >> n;

    for(int i = 0; i < n; i++) {
        int p;
        cin >> p;
        v.push_back(p);
    }

    cout << solve() << endl;
}