/*
    Problem: Buy a Shovel
    Problem link: https://codeforces.com/contest/732/problem/A
*/

#include <stdio.h>
#include <stdlib.h>

int main(){
    int k, r;

    scanf("%d %d", &k,&r);

    for(int aux = 1; aux>0; aux++){

        if(((k*aux)%10==0) || ((k*aux)%10==r)){
            printf("%d\n", aux);
            break;
        }

    }
    return 0;
}