#include <stdio.h>

int main(){
    int a; 
    printf("Enter a number (b/w 0 and 32767):");
    scanf("%d", &a);
    int d1, d2, d3, d4, d5;
    d5 = a%8;
    a /= 8;
    d4 = a%8;
    a /= 8;
    d3 = a%8;
    a /= 8;
    d2 = a%8;
    a /= 8;
    d1 = a%8;
    printf("In octal, the number is: %1d%1d%1d%1d%1d\n", d1, d2, d3, d4, d5);
    return 0;
}
