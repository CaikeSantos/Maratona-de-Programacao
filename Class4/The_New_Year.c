/*
    Problem: The New Year: Meeting Friends
    Problem link: https://codeforces.com/problemset/problem/723/A
*/

#include <stdio.h>
#include <stdlib.h>

int main(){
	int friend[3], temp, sup, min;

    for(int aux=0; aux<3; aux++)
        scanf(" %d", &friend[aux]);

    for(int aux=0; aux<3; aux++){//selection sort
        temp = aux;
        for(int i=aux+1; i<3; i++){
            if(friend[temp]>friend[i]){
                temp = i;
            }
        }
        if(temp!=aux){//swap
            sup= friend[temp];
            friend[temp] = friend[aux];
            friend[aux] = sup;
        }
    }

    min = (friend[1]-friend[0])+(friend[2]-friend[1]);//count
    printf("%d\n", min);

    return 0;
}