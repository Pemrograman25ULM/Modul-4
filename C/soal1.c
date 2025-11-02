#include <stdio.h>

int main(){
    int n;
    char s;

    scanf("%d %c", &n, &s);

    for(int i = 1; i <= 50; i++){
        if(i%n == 0){
            printf("%c ", s);
        }else{
            printf("%d ", i);
        }
    }
    return 0;
}