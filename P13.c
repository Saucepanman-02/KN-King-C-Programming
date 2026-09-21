#include <stdio.h>
#include <math.h>

#define MAXL 1000

int main(){
    printf("Enter a sentence: ");
    char s[MAXL];
    int sum = 0, cnt = 0;
    scanf("%s", s);
    while (s[strlen(s)-1] != '\n'){
        cnt++;
        sum += strlen(s);
        scanf("%s", s);
    }
    printf("%f\n", (float)(sum)/cnt);
    return 0;
}
