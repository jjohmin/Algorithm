#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <math.h>

// num_list_len은 배열 num_list의 길이입니다.
int solution(int num_list[], size_t num_list_len) {
    int answer = 0;
    int num1=1,num2=0;
    for (int i=0;i<num_list_len;i++)
        num1 *= num_list[i];
    for(int i=0;i<num_list_len;i++)
        num2 += num_list[i];
    num2=pow(num2,2);
    printf("%d %d",num1,num2);
    answer = num1 < num2 ? 1 : 0;
    printf("%d",num2);
    return answer;
}