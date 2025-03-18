#include <iostream>
#define ll long long int
using namespace std;

string decoding(int n, string word) {
    string resposta(n, ' ');
    int mid = (n - 1) / 2; 
    int left = mid - 1;    
    int right = mid + 1;  
    int dir = -1;         

    resposta[mid] = word[0]; 

    for (int aux = 1; aux < n; aux++) {
        if (dir == -1 && left >= 0) {
            resposta[left] = word[aux];
            left--;
        } else if (dir == 1 && right < n) {
            resposta[right] = word[aux];
            right++;
        }
        dir *= -1; 
    }
    return resposta;
}

int main() {
    int n;
    string word;
    cin >> n >> word;
    cout << decoding(n, word) << "\n";
    return 0;
}