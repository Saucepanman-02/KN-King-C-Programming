#include <stdio.h>
#include <string.h>

#define MAXN 1000
#define LAST = 4

int main(){
	char sm[MAXN+1], lm[MAXN+1];
       char cur[MAXN+1];
    *sm = 127;
    *lm = '\0';
	do{
		printf("Enter a string: ");
		fgets(cur, MAXN, stdin);
		if (strcmp(sm, cur) > 0){
			strcpy(sm, cur);
		}
		if (strcmp(lm, cur) < 0){
			strcpy(lm, cur);
		}
	}while (strlen(cur)-1 != LAST);
	printf("Largest string: %s\n", lm);
       printf("Smallest string: %s\n", sm);	
	return 0;
}
