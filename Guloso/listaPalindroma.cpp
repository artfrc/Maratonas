// @art.frc
// Link: https://neps.academy/br/exercise/1725

#include <bits/stdc++.h>
using namespace std;

typedef long double ld;

vector<ld> v;

int solve() {
    int ans = 0;
    int i = 0;
    int j = v.size()-1;
    while(i < j) {
        if(v[i] != v[j]) {
            if(v[i] < v[j]) {
                v[i+1] += v[i];
                i++;
            } else {
                v[j-1] += v[j];
                j--;
            }
            ans++;
        } else {
            i++;
            j--;
        }
    }
    return ans;
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int n;
    cin >> n;
    for(int i = 0; i < n; i++) {
        ld x; cin >> x;
        v.push_back(x);
    }
    cout << solve() << endl;
}