/*
    Problem: Sushi for Two
    Problem link: https://codeforces.com/problemset/problem/1138/A
*/

#include <stdio.h>
#include <stdlib.h>

int main(){
	int n, a=0, b=0, leng=0, bit;

    scanf("%d ", &n);

    int t[n+1];

    for(int aux=0; aux<n; aux++)
        scanf(" %d", &t[aux]);

    bit=t[0];
    for(int aux=0; aux<n; aux++){
        if(bit == t[aux]){
            if(a == b){
                if(leng<a*2)
                    leng = a*2;
            }
            if(t[aux]==1)
                a++;
            else
                b++;
        }else {
            if(a == b){
                if(leng<a*2)
                    leng = a*2;
            }else if (a == 0 || b==0){
                if(t[aux]==1)
                    a = 1;
                else
                    b = 1;       
            }
             if(a>0 && b>0){
                if(a<b){
                    if(leng<a*2)
                        leng = a*2;
                }else 
                    if(leng<b*2)
                        leng = b*2;
            }
        }

        bit = t[aux];
    }

    printf("%d\n", leng);
    return 0;
}