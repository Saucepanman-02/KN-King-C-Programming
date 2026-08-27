#include <stdio.h>
#define MAXN (int)1e3

int main(){
    char buf[MAXN];
    printf("Enter a message:");
    char c;
    char *bp = buf;
    while ((c = getchar()) != '\n'){
    *bp++ = c;
    }
    printf("Reversal is: ");
    while (bp-buf >= 0){
        putchar(*(--bp));
    }

    return 0;
}
