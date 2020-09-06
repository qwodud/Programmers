/*
[문제 설명]
문자열 s는 한 개 이상의 단어로 구성되어 있습니다. 
각 단어는 하나 이상의 공백문자로 구분되어 있습니다. 
각 단어의 짝수번째 알파벳은 대문자로, 홀수번째 알파벳은 소문자로 바꾼 문자열을 리턴하는 함수, solution을 완성하세요.

[제한 사항]
문자열 전체의 짝/홀수 인덱스가 아니라, 단어(공백을 기준)별로 짝/홀수 인덱스를 판단해야합니다.
첫 번째 글자는 0번째 인덱스로 보아 짝수번째 알파벳으로 처리해야 합니다.

[입출력 예]
s	return
try hello world	TrY HeLlO WoRlD

[입출력 예 설명]
try hello world는 세 단어 try, hello, world로 구성되어 있습니다. 
각 단어의 짝수번째 문자를 대문자로, 홀수번째 문자를 소문자로 바꾸면 TrY, HeLlO, WoRlD입니다. 
따라서 TrY HeLlO WoRlD 를 리턴합니다.
*/

#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

// 파라미터로 주어지는 문자열은 const로 주어집니다. 변경하려면 문자열을 복사해서 사용하세요.
char* solution(const char* s) {
    // return 값은 malloc 등 동적 할당을 사용해주세요. 할당 길이는 상황에 맞게 변경해주세요.
    int size = strlen(s);
    char* answer = (char*)malloc(size+1);
    strcpy(answer, s);
    int j=0;
    
    for(int i = 0; i<size; i++){
        if(answer[i]==' '){
            j = 0;
            continue;
        }
        else{
            if(j%2 == 0){
                if(answer[i]>='a' && answer[i]<='z')
                    answer[i]-=32;
            }
            else {
                if (answer[i]>='A' && answer[i]<='Z')
                    answer[i]+=32;
            }
        }
        j+=1;
    }
    return answer;
}