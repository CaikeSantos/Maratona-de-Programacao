/*
    Problem: Prefiquence
    Problem link: https://codeforces.com/problemset/problem/1968/B
*/

#include <stdio.h>
#include <stdlib.h>

int main(){
    int M, a, b, count;
    char seq[200001], N[200001];

    scanf("%d", &M);
    for(int aux=0; aux<M; aux++){
        count = 0;
        scanf("%d %d", &a, &b);

        scanf("%s", seq);
        scanf("%s", N);

        for(int r=0; r<b; r++){
            if (N[r] == seq[count]){
                count++;
            }
            if(count == a)
                break;
        }

        printf("%d\n", count);
    }

    return 0;
}
