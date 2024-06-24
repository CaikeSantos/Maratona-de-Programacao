/*
    Problem: Bit++
    Problem link: https://codeforces.com/problemset/problem/282/A
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
	int n, count=0;
    char X[5];

    scanf("%d ", &n);

    for(int aux=0; aux<n; aux++){
        memset(X, 0, sizeof(X));
        scanf(" %s", X);

        if(X[1]=='-')
            count--;
        else
            count++;
    }

    printf("%d\n", count);
    return 0;
}