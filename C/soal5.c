#include <stdio.h>

int main(){
    int a, b;
    scanf("%d %d", &a, &b);

    int sum = 0;
    for(int i = 1; i <= a; i++){
        int this_sum = 0;
        for(int j = i; j > 0; j--){
            this_sum += j * b;
            if(j-1 != 0){
                printf("(%d * %d) + ", j, b);
            }else{
                printf("(%d * %d) ", j, b);
            }
            
        }
        printf("= %d\n", this_sum);
        sum += this_sum;
    }

    printf("%d", sum);

    return 0;
}