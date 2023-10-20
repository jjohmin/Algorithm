#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

// 파라미터로 주어지는 문자열은 const로 주어집니다. 변경하려면 문자열을 복사해서 사용하세요.
char* solution(const char* code) {
    // return 값은 malloc 등 동적 할당을 사용해주세요. 할당 길이는 상황에 맞게 변경해주세요.
    bool mode = 0;
    int cnt = 0;
    int l = strlen(code);
    char* answer = (char*) malloc(sizeof(char) * l);
    for(int i = 0; i < l; i++){
        if(strlen(answer) == strlen(code)){
            break;
        }
        if(code[i] - '0' == 1 || code[i] >= 96 && code[i] <= 123) {
            if(code[i] - '0' == 1) 
                mode = !mode;
            else if(!mode && !(i%2)) {
                answer[cnt++]=code[i];
            }
            else if(mode && (i%2)) {
                answer[cnt++]=code[i];
            }
        }
    }
    
    
    char* realanswer = (char*) malloc(sizeof(char) * cnt);
    for(int i = 0; i < cnt; i++) {
        realanswer[i] = answer[i];
    }
	realanswer[cnt] = '\0'; // "acbac" 로 주면 자동으로 null값이 추가되지만 여기서는
                            // 문자 하나하나 옮기면서 하는지라 null값이 못 들어가서
                            // 해당 문자열에 null값이 없으니 컴파일러가 발작하는 것.ㅌ
    
    if(cnt == 0)
        realanswer = "EMPTY";
    return realanswer;
}