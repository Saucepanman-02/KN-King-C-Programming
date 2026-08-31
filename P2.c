#include <stdio.h>

int main(){
    printf("Enter a 3-digit num: ");
    int a; scanf("%d", &a);
    printf("Reverse: ");
    printf("%d\n", (a%10)*100+(a%100-a%10)+a/100);
    return 0;
}
