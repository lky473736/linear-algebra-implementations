
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

ll dot_product(vector<ll> Ai, vector<ll> Bi) {
    ll sum = 0;
    for (ll i = 0; i < Ai.size(); i++) {
        sum += Ai[i] * Bi[i];
    }
    return sum;
}

int main() {
    // 2026. 10. 23.
    // Gyuyeon Lim, multiplication of matrices

    ll m1, n1, m2, n2;

    cout << "Input A size (m, n): " << '\n';
    cin >> m1 >> n1;

    cout << "Input B size (m, n): " << '\n';
    cin >> m2 >> n2;

    if (n1 != m2) {
        cout << "Cannot multiply A and B" << '\n';
        return 0;
    }

    vector<vector<ll>> A(m1, vector<ll>(n1));
    vector<vector<ll>> B(m2, vector<ll>(n2));

    cout << "A" << '\n';
    for (ll i = 0; i < m1; i++) {
        for (ll j = 0; j < n1; j++) {
            cin >> A[i][j];
        }
    }

    cout << "B" << '\n';
    for (ll i = 0; i < m2; i++) {
        for (ll j = 0; j < n2; j++) {
            cin >> B[i][j];
        }
    }

    vector<vector<ll>> rst(m1, vector<ll>(n2));

    for (ll i = 0; i < m1; i++) {
        vector<ll> Ai(n1);

        for (ll j = 0; j < n1; j++) {
            Ai[j] = A[i][j];
        }

        for (ll j = 0; j < n2; j++) {
            vector<ll> Bj(m2);

            for (ll k = 0; k < m2; k++) {
                Bj[k] = B[k][j];
            }

            rst[i][j] = dot_product(Ai, Bj);
        }
    }

    cout << "AB:" << '\n';
    for (ll i = 0; i < m1; i++) {
        for (ll j = 0; j < n2; j++) {
            cout << rst[i][j] << ' ';
        }
        cout << '\n';
    }

    return 0;
}
