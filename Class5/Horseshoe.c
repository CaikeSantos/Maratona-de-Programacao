/*
    Problem: Is your horseshoe on the other hoof?
    Problem link: https://codeforces.com/contest/228/problem/A
*/

#include <stdio.h>
#include <stdlib.h>

int main(){
	int h[5], buy=0;

    for(int aux=0; aux<4;aux++)
        scanf(" %d", &h[aux]);

    for(int aux=0; aux<4;aux++){
        for(int count=aux+1; count<4;count++){
            if(h[aux] == h[count]){
                buy++;
                break;
            }
        }
    }

    printf("%d\n", buy);
    return 0;
}