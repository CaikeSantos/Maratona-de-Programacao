#include <iostream>
#include <vector>
#include <algorithm>
#define ll long long int
using namespace std;

string findWinner(int n, vector<int>& piles) {
    int xor_sum = 0, min_pile = piles[0];
    for (int i = 0; i < n; i++) {
        xor_sum ^= piles[i];
        min_pile = min(min_pile, piles[i]);
    }
    if ((xor_sum == 0) || (min_pile % 2 == 0)) {
        return "Bob";
    } else {
        return "Alice";
    }
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> piles(n);
        for (int i = 0; i < n; i++) {
            cin >> piles[i];
        }
        cout << findWinner(n, piles) << "\n";
    }
    return 0;
}
