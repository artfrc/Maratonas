// @art.frc
// Link: https://neps.academy/br/exercise/1790

// TENTEI DE VÁRIAS FORMAS PORÉM NÃO PASSA!

#include <bits/stdc++.h>
using namespace std;

typedef long long unsigned llu;

int n;
llu a,b;

const int MAXN = 10e5+11;
llu v1[MAXN];
llu v2[MAXN];
set<int> wrong;

bool isPossible(int a, int b) {
    return !(v1[a] == v2[a] and v1[b] == v2[b]);
}

void solve() {
    if(v1[0] != v2[0] or v1[n-1] != v2[n-1]) {
        cout << "IMPOSSIBLE" << endl;
        return;
    }

    int ans = 0;

    for(int i = 1; i < n-1; i++) {
        if(v1[i] != v2[i]) {
            llu tmp = v1[i-1]^v1[i]^v1[i+1];
            if(tmp != v2[i]) {
                if(isPossible(i-1,i+1)) {
                    wrong.insert(i);
                } else {
                    cout << "IMPOSSIBLE" << endl;
                    return;
                }
            } else {
                v1[i] = tmp;
                ans++;
            }
        }
    }

    bool flag;
    do {
        flag = false;
        for(auto it = wrong.begin(); it != wrong.end(); it++) {
            int idx = *it;
            llu tmp = v1[idx-1]^v1[idx]^v1[idx+1];
            if(tmp == v2[idx]) {
                v1[idx] = tmp;
                flag = true;
                ans++;
                wrong.erase(it);
                if(wrong.empty()) break;
            } else {
                if(!isPossible(idx-1,idx+1)) {
                    break;
                }
            }
        } 
    }
    while(!wrong.empty() and flag);

    if(wrong.empty()) {
        cout << ans << endl;
    } else {
        cout << "IMPOSSIBLE" << endl;
    }
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    cin >> n;
    llu x;
    for(int i = 0; i < n; i++) {
        cin >> v1[i];
    }
    for(int i = 0; i < n; i++) {
        cin >> v2[i];
    }
    solve();
}