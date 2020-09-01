#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

long long solution(int a, int b) {
    long long answer = 0;

    if(a==b) answer = a;
    else if(a<b){
        for(a; a<b; a++)
            answer+=a;
        answer+=b;
    }
    else{
        for(b;b<a;b++)
            answer+=b;
        answer+=a;
    }
    return answer;
}