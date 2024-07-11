/*
    Problem: Nene's Game
    Problem link: https://codeforces.com/problemset/problem/1956/A
*/

#include <stdio.h>
#include <stdlib.h>

int main(){
	int t, k, q, a[100], n[100];

    scanf(" %d", &t);

    for(int aux=0; aux<t; aux++){
        scanf(" %d %d", &k, &q);
        for (int i = 0; i < k; i++)
            scanf(" %d", &a[i]);
        for (int i = 0; i < q; i++)
            scanf(" %d", &n[i]);

        for (int i = 0; i < q; i++){
            if(a[0]>n[i])
                printf("%d ", n[i]);
            else
                printf("%d ", a[0]-1);
        }
        printf("\n");
    }


    return 0;
}