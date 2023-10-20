#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int solution(int number, int n, int m) {
    int answer = 0;
    if(!(number%n) && !(number%m))
        answer=1;
    return answer;
}