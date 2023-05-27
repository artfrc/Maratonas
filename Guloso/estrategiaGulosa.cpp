// @art.frc
// Link: https://neps.academy/br/exercise/244

#include <bits/stdc++.h>
using namespace std;

int v[] = {1,5,10,25,50,100};

int solve(int n) {
    int i = 5;
    int ans = 0;
    while(n > 0 and i >= 0) {
        ans += (n/v[i]);
        n %= v[i];
        i--;
    }
    return ans;
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int n;
    cin >> n;

    cout << solve(n) << endl;
}