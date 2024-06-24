/*
    Problem: Way Too Long Words
    Problem link: https://codeforces.com/problemset/problem/71/A
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
	char W[101], A[5], Buffer[5];
    int Size, n;

    scanf("%d", &n);

    for(int i=0; i<n; i++){
        memset(W, 0, sizeof(W));
        memset(A, 0, sizeof(A));
        memset(Buffer, 0, sizeof(Buffer));
        scanf("%s", W);

        Size = strlen(W);
        if(Size>10){
            sprintf(Buffer, "%d", Size-2);
            
            A[0] = W[0];
            A[1] = '\0';
            strcat(A, Buffer);
            strcat(A, &W[Size-1]);
            
            printf("%s\n", A);
        }else 
            printf("%s\n", W);
    }
    return 0;
}