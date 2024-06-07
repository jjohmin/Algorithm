#include <iostream>
using namespace std;

int r, c;
char board[15];
int main(){
    scanf("%d%d", &r, &c);
    for(int i = 0; i < r; i++){
        scanf("%s", board);
        for(int j = c-1; j >= 0; j--){
            printf("%c", board[j]);
        }
        printf("\n");
    }
}