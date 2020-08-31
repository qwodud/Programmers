#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

char* solution(int a, int b) {
    // 리턴할 값은 메모리를 동적 할당해주세요.
    char* answer = (char*)malloc(3);

    const char* week[]={"THU","FRI","SAT","SUN","MON","TUE","WED"};
    int month[12]={31,29,31,30,31,30,31,31,30,31,30,31};
    int day=0;

    for(int i=0; i<a-1; i++) day+=month[i];  

    day+=b;
    answer = week[day%7];

    return answer;
    free(answer);
}
// 사장님 배고파요
