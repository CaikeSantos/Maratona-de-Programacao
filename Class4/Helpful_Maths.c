/*
    Problem: Helpful Maths
    Problem link: https://codeforces.com/problemset/problem/339/A
*/

#include <stdio.h>
#include <stdlib.h>

int main(){
    char s[101];
    scanf("%s", s);

    int count[4] = {0, 0, 0, 0};//1, 2, 3, total
    int check = 0;

    for(int aux=0; s[aux]!='\0'; aux++){
        if(s[aux]=='+')
            continue;
        else if(s[aux]=='1'){
            count[0]++;
            count[3]++;
        }
        else if(s[aux]=='2'){
            count[1]++;
            count[3]++;
        }
        else if(s[aux]=='3'){
            count[2]++;
            count[3]++;
        }
    }

    for(int aux=0; aux<3; aux++){
        for(int i=0; i<count[aux]; i++){
            printf("%d", aux+1);
            check++;
            if(check != count[3])
                printf("+");
            else
                printf("\n");
        }
    }

	
    return 0;
}