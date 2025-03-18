#include <iostream>
#define ll long long int
using namespace std;

string isDangerous(string seq) {
    int count = 1;
    for (int aux = 1; aux < seq.size(); aux++) {
        if (seq[aux] == seq[aux - 1]) {
            count++;
            if (count >= 7) {
                return "YES";
            }
        } else {
            count = 1;
        }
    }
    return "NO";
}

int main() {
    string seq;
    cin >> seq;
    cout << isDangerous(seq) << "\n";
    return 0;
}
