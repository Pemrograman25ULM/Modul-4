#include <stdio.h>

int main(){
    int a, b;
    scanf("%d %d", &a, &b);

    int less = 0;
    int it = 0;
    while(a != b){
        printf("%d %d - ", a, b);
        
        if(a > b){
            a--;
            b++;
            it++;
        }else{
            a++;
            b--;
            it++;
            less = 1;
        }
    }

    for(int i = 0; i <= it; i++){
        if(i != it){
            printf("%d %d - ", a, b);
        }else{
            printf("%d %d", a, b);
        }
        
        if(!less){
            b++;
            a--;
        }else{
            b--;
            a++;
        }
    }

    return 0;
}