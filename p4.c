#include <stdio.h>

int main(){
    printf("Enter phone number [(xxx) xxx-xxxx]: ");
    int a, b, c;
    scanf("( %3d ) %3d - %4d", &a, &b, &c);
    printf("You entered %d.%d.%d\n", a, b, c);
    return 0;
}
