#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

// num_list_len은 배열 num_list의 길이입니다.
int solution(int num_list[], size_t num_list_len) {
    int answer = 0;
    int sum=0,sum2=0;
    for(int i=0;i<num_list_len;i++){
        if(i>num_list_len)
            break;
        if(num_list[i]%2){
            sum*=10;
            sum+=num_list[i];
        }
        else if(!(num_list[i]%2)){
            sum2*=10;
            sum2+=num_list[i];
        }
    }
    printf("%d %d",sum,sum2);
    answer = sum+sum2;
    return answer;
}