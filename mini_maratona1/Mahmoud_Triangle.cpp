#include <iostream>
#include <vector>
#include <algorithm>
#define ll long long int
using namespace std;

string Triangle(int n, vector<int>& segments) {
    sort(segments.begin(), segments.end());
    for (int i = 2; i < n; i++) {
        if (segments[i - 2] + segments[i - 1] > segments[i]) {
            return "YES";
        }
    }
    return "NO";
}

int main() {
    int n;
    cin >> n;
    vector<int> segments(n);
    for (int i = 0; i < n; i++) {
        cin >> segments[i];
    }
    cout << Triangle(n, segments) << "\n";
    return 0;
}
