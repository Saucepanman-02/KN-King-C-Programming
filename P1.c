#include <stdio.h>

int main(){
    printf("Enter a 2-digit num: ");
    int a; scanf("%d", &a);
    printf("Reverse: ");
    printf("%d\n", (a%10)*10+(a/10));
    return 0;
}
