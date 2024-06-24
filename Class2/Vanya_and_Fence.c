/*
    Problem: Vanya and Fence
    Problem link: https://codeforces.com/contest/677/problem/A
*/

#include <stdio.h>
#include <stdlib.h>

int main(){
	int n, h, a, w=0;

    scanf("%d %d", &n, &h);

    for(int i=0; i<n; i++){
        scanf("%d", &a);

        if(a>h)
            w+=2;
        else    
            w++;
    }

    printf("%d\n", w);

    return 0;
}