#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
    // 2026. 10. 23. 
    // Gyuyeon Lim , addition, substraction, scalar multiplication on matrices
    
    ll m = 0, n = 0, k = 0;
    cout << "input m, n between blank: " << '\n'; cin >> m >> n;
    cout << "input constank k: " << '\n'; cin >> k;
    
    // size of A = size of B
    vector<vector<ll>> A(m, vector<ll>(n));
    vector<vector<ll>> B(m, vector<ll>(n));
    
    cout << "A" << '\n';
    for (ll i = 0; i < m; i++) {
        for (ll j = 0; j < n; j++) {
            cin >> A[i][j];
        }
    }
    
    cout << "B" << '\n';
    for (ll i = 0; i < m; i++) {
        for (ll j = 0; j < n; j++) {
            cin >> B[i][j];
        }
    }
    
    cout << "A+B" << '\n';
    for (ll i = 0; i < m; i++) {
        for (ll j = 0; j < n; j++) {
            cout << A[i][j] + B[i][j] << ' '; 
        }
        cout << '\n';
    }
    
    cout << "A-B" << '\n';
    for (ll i = 0; i < m; i++) {
        for (ll j = 0; j < n; j++) {
            cout << A[i][j] - B[i][j] << ' '; 
        }
        cout << '\n';
    }
    
    cout << "A+B" << '\n';
    for (ll i = 0; i < m; i++) {
        for (ll j = 0; j < n; j++) {
            cout << A[i][j] + B[i][j] << ' '; 
        }
        cout << '\n';
    }
    
    cout << "A-B" << '\n';
    for (ll i = 0; i < m; i++) {
        for (ll j = 0; j < n; j++) {
            cout << A[i][j] - B[i][j] << ' '; 
        }
        cout << '\n';
    }
    
    cout << "kA" << '\n';
    for (ll i = 0; i < m; i++) {
        for (ll j = 0; j < n; j++) {
            cout << A[i][j] * k << ' '; 
        }
        cout << '\n';
    }
    
    cout << "kB" << '\n';
    for (ll i = 0; i < m; i++) {
        for (ll j = 0; j < n; j++) {
            cout << B[i][j] * k << ' '; 
        }
        cout << '\n';
    }
    
    return 0;
}
