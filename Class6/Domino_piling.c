/*
    Problem: Domino piling
    Problem link: https://codeforces.com/problemset/problem/50/A
*/

#include <stdio.h>
#include <stdlib.h>

int main(){
	int M, N, multi;

    scanf("%d %d", &M, &N);
    multi = N*M;
    printf("%d\n", multi/2);
    
    return 0;
}