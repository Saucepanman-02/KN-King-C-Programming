#include <stdio.h>


void swap(int *a , int *b){
    int c = *a;
    *a = *b;
    *b = c;
}
int main(){
    int a = 10, b = 5;
    swap(&a, &b);
    printf("%d %d\n", a, b);

    return 0;
}
