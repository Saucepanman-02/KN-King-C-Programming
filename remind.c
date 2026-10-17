#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_REM 50
#define MSG_LEN 60

int read_line(char *s){
    int c = 0;
    while (c++ < MSG_LEN && (*s++ = getchar()) != '\n');
    *s = '\0';
    return c;
}

int main(){
    char *rem[MAX_REM];
    char sday[3], msg[MSG_LEN+1];
    int day, cnt = 0;
    for (; ;){
        if (cnt == MAX_REM){
            printf("---MEMORY-OVER---\n");
            break;
        }
        printf("Enter day and remainder:");
        scanf("%2d", &day);
        if (day == 0)
            break;
        sprintf(sday, "%2d", day);
        read_line(msg);
        int i, j;
        for (i = 0; i < cnt; i++){
            if (strcmp(sday, rem[i]) < 0)
                break;
        }
        for (j = cnt; j > i; j--){
            rem[j] =  rem[j-1];
        }
        rem[i] = malloc(strlen(msg)+5);
        if (rem[i] == NULL){
            printf("----MEMORY_LIMIT_EXCEEDED----\n");
            break;
        }
        strcpy(rem[i], sday);
        strcat(rem[i], msg);
        cnt++;
    }
    printf("\nDay Reminder\n");
    for (int i = 0; i < cnt; i++){
        printf("%s", rem[i]);
    }
    return 0;
}
