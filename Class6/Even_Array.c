/*
    Problem: Even Array
    Problem link: https://codeforces.com/problemset/problem/1367/B
*/

#include <stdio.h>
#include <stdlib.h>

int main(){
	int N, M, par, impar, a;

    scanf(" %d", &N);
    
    for(int aux=0; aux<N; aux++){
        par = impar = 0;
        scanf(" %d", &M);

        for(int b=0; b<M; b++){
            scanf(" %d", &a);
            if (b%2 == 0){
                if (a%2 == 1){
                    par++;
                }
            } else {
                if (a%2 == 0){
                    impar++;       
                }
            } 
        }
        if (impar == par)
            printf("%d\n", par);
        else
            printf("-1\n");
    }
    
    return 0;
}