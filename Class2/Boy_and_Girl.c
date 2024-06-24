/*
    Problem: Boy and Girl
    Problem link: https://codeforces.com/contest/236/problem/A
*/

#include <stdio.h>
#include <stdlib.h>

int main(){
	char A[101];
    int count=0, b;

    scanf("%s", A);

    for(int i=0; A[i]!='\0'; i++){
        b=0;
        for(int j=0; j<i; j++){
            if(A[j]==A[i]){
                b=1;
                break;
            }
        }
        if(b==0)
            count++;
    }
    
    if(count%2==0)
        printf("CHAT WITH HER!\n");
    else
        printf("IGNORE HIM!\n");
    return 0;
}