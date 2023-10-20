#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int solution(int a, int b) {
    int answer = 0;
    int num,num2,i;
    for(i=1;i<10001;i*=10){
        if(b/i<1)
            break;
    }
    num=(a*i)+b;
    for(i=1;i<10001;i*=10){
        if(a/i<1)
            break;
    }
    num2=(b*i)+a;
    answer = num > num2 ? num : num2;
    
    return answer;
}