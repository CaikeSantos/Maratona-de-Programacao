#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int minCoins(int n, vector<int>& a) {
    sort(a.rbegin(), a.rend());
    int total = 0, soma = 0, count = 0;
    for (int aux = 0; aux < n; aux++) {
        total += a[aux];
    }
    for (int aux = 0; aux < n; aux++) {
        soma += a[aux];
        count++;
        if (soma > total - soma) {
            return count;
        }
    }
    return n;
}

int main() {
    int n;
    cin >> n;
    vector<int> a(n);
    for (int aux = 0; aux < n; aux++) {
        cin >> a[aux];
    }
    cout << minCoins(n, a) << "\n";
    return 0;
}
