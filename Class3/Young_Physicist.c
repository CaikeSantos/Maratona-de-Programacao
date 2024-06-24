/*
    Problem: Young Physicist
    Problem link: https://codeforces.com/contest/69/problem/A
*/

#include <stdio.h>
#include <stdlib.h>

int main(){
	int n, count=0, A;

    scanf("%d", &n);

    for(int i=0; i<n; i++){
        for(int j=0; j<3; j++){
            scanf(" %d", &A);//is not necessary to build the matrix
            count += A;
        }
    }

    if(count == 0)
        printf("YES\n");
    else
        printf("NO\n");

    return 0;
}