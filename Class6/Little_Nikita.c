/*
    Problem: Little Nikita
    Problem link: https://codeforces.com/contest/1977/problem/A
*/

#include <stdio.h>
#include <stdlib.h>

int main(){
	int t,n,m;

    scanf("%d ", &t);

    for(int aux=0; aux<t; aux++){
        scanf(" %d %d", &n, &m);

        if(n<m)
            printf("No\n");
        else if(n==m)
            printf("Yes\n");
        else {
            if((n-m)%2==0)
                printf("Yes\n");
            else
                printf("No\n");
        }
    }
    return 0;
}