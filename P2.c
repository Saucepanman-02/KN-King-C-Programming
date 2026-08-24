#include <stdio.h>

int main(){
    int item; float price;
    int m, d, y;
    printf("Enter item number:");
    scanf("%d", &item);
    printf("Enter unit price:");
    scanf("%f",&price);
    printf("Enter purchase date (mm/dd/yyyy):");
    scanf("%d / %d / %d", &m, &d, &y);
    printf("Item\t\tUnitPrice\t\tPurchaseDate\n");
    printf("%d\t\t$%6.2f\t\t%.2d/%.2d/%.4d", item, price, m, d, y);
    return 0;
}
