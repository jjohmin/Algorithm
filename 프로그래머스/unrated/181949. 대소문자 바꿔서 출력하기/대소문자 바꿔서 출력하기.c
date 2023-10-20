#include <stdio.h>
#define LEN_INPUT 20

int main(void) {
    char s1[LEN_INPUT];
    scanf("%s", s1);
    
    for(int i=0;i<LEN_INPUT;i++){
        if(s1[i]>=65 && s1[i]<=90)
            printf("%c",s1[i]+32);
        else if(s1[i]>=97&&s1[i]<=122)
            printf("%c",s1[i]-32);
        else
            break;
    }
    return 0;
}
