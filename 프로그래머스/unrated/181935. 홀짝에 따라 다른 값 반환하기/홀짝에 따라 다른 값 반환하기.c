#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int solution(int n) {
    int answer = 0;
    if(!(n%2)){
        for(int i=n;i>=0;i-=2)
            answer+=(i*i);
    }
    else{
        for(int i=n;i>=0;i-=2)
            answer+=i;
    }
    return answer;
}