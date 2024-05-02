/*
    Problem: Lampada
    Problem link: https://neps.academy/br/exercise/52
*/

#include <stdio.h>
#include <stdlib.h>

int main(){    	
    int A=0, B=0;
    int Time, I;

    scanf("%d", &Time);

    for(int i=0; i<Time; i++){
        scanf("%d", &I);

        if(I==1){
            if(A==0)
                A=1;
            else
                A=0;
        } else if(I==2){
            if(A==0)
                A=1;
            else
                A=0;
            if(B==0)
                B=1;
            else
                B=0;
        }
    }

    printf("%d\n%d\n", A, B);

    return 0;
}