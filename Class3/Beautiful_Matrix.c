/*
    Problem: Beautiful Matrix
    Problem link: https://codeforces.com/contest/263/problem/A
*/

#include <stdio.h>
#include <stdlib.h>

int main(){
    int i, j, A[5][5], count=0;

    for(int r=0; r<5; r++){
        for(int c=0; c<5; c++){
            scanf("%d", &A[r][c]);
            if(A[r][c] == 1){
                i = r;
                j = c;
            }
        }
    }

    if(i>2)
        i = i - 2;
    else
        i = 2 - i;
    if(j>2)
        j = j - 2;
    else
        j = 2 - j;    
    
    count = i+j;

    printf("%d\n", count);

    return 0;
}