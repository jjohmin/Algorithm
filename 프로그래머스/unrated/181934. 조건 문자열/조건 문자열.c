#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

// 파라미터로 주어지는 문자열은 const로 주어집니다. 변경하려면 문자열을 복사해서 사용하세요.
int solution(const char* ineq, const char* eq, int n, int m) {
    int answer = 0;
    if(*ineq=='>'){
        if(n>m)
            answer=1;
    }
    else if(*ineq=='<'){
        if(n<m)
            answer=1;
    }
    if(*eq=='=')
        if(n==m)
            answer=1;
    return answer;
}