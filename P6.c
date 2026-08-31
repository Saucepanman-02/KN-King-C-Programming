#include <stdio.h>

int main(){
    int d0, d1, d2, d3, d4, d5, d6, d7, d8, d9, d10, d11;
    printf("Enter first 12 digits of UPC: ");
    scanf("%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d", &d0, &d1, &d2, &d3, &d4, &d5, &d6, &d7, &d8, &d9, &d10, &d11);
    printf("Check digit: %d\n", 9-((d0+d2+d4+d6+d8+d10)+(d1+d3+d5+d7+d9+d11)*3-1)%10);
    return 0;
}
