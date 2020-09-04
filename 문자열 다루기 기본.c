/*
[문제]
문자열 s의 길이가 4 혹은 6이고, 숫자로만 구성돼있는지 확인해주는 함수, solution을 완성하세요. 
예를 들어 s가 a234이면 False를 리턴하고 1234라면 True를 리턴하면 됩니다.

[제한 사항]
s는 길이 1 이상, 길이 8 이하인 문자열입니다.

[입출력 예]
s	return
a234	false
1234	true
*/

#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <ctype.h> //isdigit

// 파라미터로 주어지는 문자열은 const로 주어집니다. 변경하려면 문자열을 복사해서 사용하세요.
bool solution(const char* s) {
    bool answer = true;
    int size = strlen(s);
    if(size!=4 && size!=6)
        answer = false;
    else{
        for(int i=0; i<size; i++){
            if(isdigit(s[i])==0)
                answer = false;
        }
    }
    return answer;
}