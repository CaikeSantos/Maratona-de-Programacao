/*
    Problem: Team
    Problem link: https://codeforces.com/contest/231/problem/A
*/

#include <stdio.h>
#include <stdlib.h>

int main(){
	int count=0, got=0, n, aux;

    scanf("%d", &n);

    for(int i=0; i<n; i++){
        count=0;
        for(int j=0; j<3;j++){
            scanf("%d", &aux);

            if(aux==1)
                count++;
        }
        if(count>1)
            got++;
    }

    printf("%d\n", got);
    return 0;
}