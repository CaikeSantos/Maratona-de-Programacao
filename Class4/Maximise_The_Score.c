/*
    Problem: Maximise The Score
    Problem link: https://codeforces.com/problemset/problem/1930/A
*/

#include <stdio.h>
#include <stdlib.h>

int main(){
	int t, n, score, a[101], sup, swap;

    scanf(" %d", &t);

    for(int i=0; i<t; i++){
        score = 0;
        scanf(" %d", &n);
        for(int j=0; j<n*2; j++){
            scanf(" %d", &a[j]);
        }

        for(int aux=0; aux<n*2; aux++){
            sup = aux;
            for(int aux2=aux; aux2<n*2; aux2++){
                if(a[sup]>a[aux2])
                    sup = aux2;
            }
            if(sup != aux){
                swap = a[sup]; 
                a[sup] = a[aux];
                a[aux] = swap;
            }
        }

        for(int j=0; j<n; j++){
            if(a[j*2]>a[(j*2)+1])
                score += a[(j*2)+1];
            else
                score += a[j*2];
        }

        printf("%d\n", score);
    }

    return 0;
}