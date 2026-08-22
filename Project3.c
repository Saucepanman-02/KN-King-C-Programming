#include <stdio.h>

#define min(a, b) (a < b? a: b)

void reduce (int num, int den, int *rnum, int *rden){
    for (int i = 1; i <= min(num, den); i++){
        if (num%i == 0 && den%i == 0){
        *rnum = num/i, *rden = den/i;
        }

    }
}

int main(){
    int a, b;
    scanf("%d %d", &a, &b);
    int c, d; 
    reduce(a, b, &c, &d);
    printf("%d %d\n", c, d);
    return 0;
}
