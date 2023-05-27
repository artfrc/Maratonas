// @art.frc
// Link: https://neps.academy/br/exercise/1728

#include <bits/stdc++.h>
using namespace std;

int s,a,b;

int sumDigits(int n) {
    int ans = 0;
    while(n > 0) {
        ans += (n%10);
        n /= 10;
    }
    return ans;
}

void solve() {
    int i = a;
    while(1) {
        if(sumDigits(i) == s) break;
        i++;
    }
    int j = b;
    while(1) {
        if(sumDigits(j) == s) break;
        j--;
    }
    cout << i << endl << j << endl;
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    cin >> s >> a >> b;
    solve();
}