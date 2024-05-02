/*
    Problem: Desafio do Maior Numero
    Problem link: https://neps.academy/br/exercise/323
*/

#include <stdio.h>
#include <stdlib.h>

int main(){ 
    int A, High;

    scanf("%d", &High);

    while(1){
        scanf("%d", &A);
        if(A==0)
            break;
        if(A>High)
            High=A;
    }

    printf("%d\n", High);
    return 0;
}