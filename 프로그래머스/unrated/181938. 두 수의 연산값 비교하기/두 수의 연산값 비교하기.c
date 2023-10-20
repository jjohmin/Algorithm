#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int solution(int a, int b) {
    int answer = 0;
    int i;
    int num1,num2;
    for(i=1;i<10001;i*=10){
        if(b/i<1)
            break;
    }
    num1=(a*i)+b;
    num2=(2*a)*b;
    answer = num1>num2 ? num1:num2;
    return answer;
}