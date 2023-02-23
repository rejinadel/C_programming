#include <stdio.h>
main(){
    int num;
    printf("Enter the num:", num);
    scanf("%d", &num);
    if(num > 0){
        printf("The num is greater than zero:", num);
    }
    else{
    printf("The num is less than zero:");
    }
    return 0;
}