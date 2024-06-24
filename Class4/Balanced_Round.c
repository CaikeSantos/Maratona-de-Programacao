/*
    Problem: Balanced Round
    Problem link: https://codeforces.com/problemset/problem/1850/D
*/

#include <stdio.h>
#include <stdlib.h>

int compar (const void * a, const void * b) {
   return ( *(int*)a - *(int*)b );
}

int main(){
	int t, a, n[200001], k, temp, sup;

    scanf(" %d", &t);

    for(int aux=0; aux<t; aux++){
        scanf(" %d %d", &a, &k);
        for(int i=0; i<a; i++)
            scanf(" %d", &n[i]);

        qsort(n, a, sizeof(int), compar);

        sup = temp = 1;
        for(int i=0; i<a; i++){
            if(n[i+1]-n[i] <= k)
                sup++;
            else {
                if(sup > temp)
                    temp = sup;
                sup=1;
            }
        }
        if(sup > temp)
            temp = sup-1;
        printf("%d\n", a-temp);
    }
    return 0;
}