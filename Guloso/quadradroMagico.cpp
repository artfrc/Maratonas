// @art.frc
// Link: https://neps.academy/br/exercise/236

#include <bits/stdc++.h>
using namespace std;

const int MAXN = 15;
int v[MAXN][MAXN];
int n;

int solve() {
    int coluna = 0, linha = 0;
    int diagonalPrincipal = 0, diagonalSec = 0;
    int aux = n, tmp;
    for(int i = 0; i < n; i++) {
        tmp = linha;
        linha = 0;
        coluna = 0;
        aux--;
        for(int j = 0; j < n; j++) {
            coluna += v[j][i];
            linha += v[i][j];
            if(i == j) diagonalPrincipal += v[i][j];
            if(j == aux) diagonalSec += v[i][j];
        }
        if(tmp != 0 and tmp != linha) return -1;
        if(linha != coluna) return -1;
    }
    
    if(linha != coluna or linha != diagonalPrincipal or linha != diagonalSec) return -1;

    return linha;
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    cin >> n;

    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            cin >> v[i][j];
        }
    }
    cout << solve() << endl;
}