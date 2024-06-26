/*
    Problem: Maximum in Table
    Problem link: https://codeforces.com/problemset/problem/509/A
*/

#include <stdio.h>
#include <stdlib.h>

int main(){
	int A[10][10], n;

    scanf("%d", &n);

    for(int i=0; i<n; i++){
        A[0][i]=1;
        A[i][0]=1;
    }

    for(int i=1; i<n; i++){
        for(int j=1; j<n; j++){
            A[i][j]= A[i][j-1]+A[i-1][j];
        }
    }

    printf("%d\n", A[n-1][n-1]);

    return 0;
}