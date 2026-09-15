#include <stdio.h>

int main(){
    int a, b, c, d;
    printf("Enter 2 fractions seperated by a plus sign: ");
    scanf("%d / %d + %d / %d", &a, &b, &c, &d);
    int num = a*d+b*c;
    int den = b*d;
    printf("Sum is: %d/%d\n", num, den);

    return 0;
}
