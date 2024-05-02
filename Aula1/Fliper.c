/*
    Problem: Fliper
    Problem link: https://neps.academy/br/exercise/87
*/

#include <stdio.h>
#include <stdlib.h>

int main(){
	int A, B;
	scanf("%d %d",&A, &B);

    if(A==0){
        printf("C\n");
    } else if(B==0){
        printf("B\n");
    } else {
        printf("A\n");
    }

    return 0;
}