// @art.frc
// Link: https://neps.academy/br/exercise/1170

#include <bits/stdc++.h>
using namespace std;

const int MAX = 11;
bool vis[MAX][MAX];
int n;

void solve() {
    memset(vis,false,sizeof(vis));
    int d,l,r,c;
    bool ans = true;
    while(n--) {
        cin >> d >> l >> r >> c;
        if(d == 0) { // horizontal
            for(int i = c; i <= c+l-1 and ans; i++) {
                if(i >= MAX or vis[r][i]) {
                    ans = false;
                }
                vis[r][i] = true;
            }
        } else { // vertical
            for(int i = r; i <= r+l-1 and ans; i++) {
                if(i >= MAX or vis[i][c]) {
                    ans = false;
                }
                vis[i][c] = true;
            }
        }
    }
    if(ans) cout << "Y" << endl;
    else    cout << "N" << endl;
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    cin >> n;
    solve();
}