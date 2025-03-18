#include <iostream>
#include <vector>
#include <algorithm>
#define ll long long int
using namespace std;

int main() {
    int n, f;
    cin >> n >> f;

    vector<pair<int, int>> days(n);
    vector<int> extra_sales(n);
    ll total_sales = 0;

    for (int i = 0; i < n; i++) {
        int k, l;
        cin >> k >> l;
        int normal_sales = min(k, l);
        int boosted_sales = min(2 * k, l);
        int extra = boosted_sales - normal_sales;

        days[i] = {normal_sales, extra};
        total_sales += normal_sales;
        extra_sales[i] = extra;
    }

    sort(extra_sales.rbegin(), extra_sales.rend());

    for (int i = 0; i < f; i++) {
        total_sales += extra_sales[i];
    }

    cout << total_sales << "\n";
    return 0;
}
