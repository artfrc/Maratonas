// @art.frc
// Link: https://neps.academy/br/exercise/1724

#include <bits/stdc++.h>
using namespace std;

int s,a,b;

int sumDigits(int n) {
    int ans = 0;
    while(n > 0) {
        ans += n%10;
        n /= 10;
    }
    return ans;
}
    
int solve() {
    int ans = 0;
    for(int i = a; i <= b; i++) {
        if(sumDigits(i) == s) ans++;
    }
    return ans;
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    cin >> s >> a >> b;
    cout << solve() << endl;
}