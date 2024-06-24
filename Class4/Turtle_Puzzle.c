/*
    Problem: Turtle Puzzle: Rearrange and Negate
    Problem link: https://codeforces.com/problemset/problem/1933/A
*/

#include <stdio.h>
#include <stdlib.h>

int main(){
    int t, n, a[50], sum;

    scanf(" %d", &t);

    for(int i=0; i<t; i++){
        sum=0;
        scanf(" %d", &n);
        for(int aux=0; aux<n; aux++){
            scanf(" %d", &a[aux]);

            if(a[aux] < 0)
                a[aux] = a[aux]*(-1);
            sum += a[aux];   
        }
        printf("%d\n", sum);
    }
	
    return 0;
}