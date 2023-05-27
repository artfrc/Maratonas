// @art.frc
// Link: https://neps.academy/br/exercise/1360

#include <bits/stdc++.h>
using namespace std;

int t;

int solve() {
    int v[] = {1,2,4,8,16,32,64,128,256,512,1024,1024*2,1024*4,1024*8};
    int ans = 0;
    int idx = (sizeof(v)/sizeof(int))-1;
    while(t > 0 and idx >= 0) {
        ans += t/v[idx];
        t %= v[idx];
        idx--;
    }
    return ans;
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    cin >> t;
    cout << solve() << endl;
}