#include <stdio.h>
#include <math.h>

#define MAXL 1000
#define strip(c) (c >= 'A' && c <= 'Z'? c - 'A': c-'a')

int main(){
    int a[26];
    a[strip('A')] = a[strip('E')] = a[strip('I')] = a[strip('L')] = a[strip('N')] = a[strip('O')] = a[strip('R')] = a[strip('S')] = a[strip('T')] = a[strip('U')] = 1;
    a[strip('D')] = a[strip('G')] = 2;
    a[strip('B')] = a[strip('C')] = a[strip('M')] = a[strip('P')] = 3;
    a[strip('F')] = a[strip('H')] = a[strip('V')] = a[strip('W')] = a[strip('Y')] = 4;
    a[strip('K')] = 5;
    a[strip('J')] = a[strip('X')] = 8;
    a[strip('Q')] = a[strip('Z')] = 10;
    printf("Enter a word: ");
    char st[MAXL];
    scanf("%s", st);
    int sum = 0; int len = strlen(st);
    for (int i = 0; i < len; i++)
        sum += a[strip(st[i])];
    printf("Scrabble value: %d\n", sum);
    return 0;
}
