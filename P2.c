#include <stdio.h>
#include <math.h>
#define MAXN (int)1e3
#define isalpha(c) (((c >= 'a') && (c <= 'z')) || ((c >= 'A') && (c <= 'Z')))

int main(){
    printf("Enter a message: ");
    char buf[MAXN];
    char *bp = buf;
    while (bp-buf < MAXN && (*bp = getchar()) != '\n' && (isalpha(*bp) ? *(bp++): 1));
    char *lp = buf;
    char *rp = bp-1;
    while (rp >= lp){
        if (*rp != *lp && ((*rp - *lp) != ('A'-'a') && (*rp-*lp) != ('a'-'A'))){ 
            printf("Not a palindrome\n"); 
            return 0;
        }
        rp--, lp++;
    }
    printf("Palindrome\n");
    return 0;
}
