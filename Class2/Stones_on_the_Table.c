/*
    Problem: Stones on the Table
    Problem link: https://codeforces.com/contest/266/problem/A
*/

#include <stdio.h>
#include <stdlib.h>

int main(){
	int n, count=0;
    char A[50];

    scanf("%d", &n);
    scanf("%s", A);

    for(int i=1; i<n; i++){
        if(A[i-1]==A[i])
            count++;
    }

    printf("%d\n", count);
    return 0;
}