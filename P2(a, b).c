#include <stdlib.h>
#include <string.h>
#include <stdio.h>


#define MAX_REM 50
#define MSG_LEN 60

int read_line(char *s){
    int c = 0;
    while (c++ < MSG_LEN && (*s++ = getchar()) != '\n');
    *s = '\0';
    return c;
}

int main(){
    char rem[MAX_REM][MSG_LEN+1];
    char sday[3], msg[MSG_LEN+1];
    char ctime[6];
    char cist[15];
    int day, cnt = 0;
    for (; ;){
        if (cnt == MAX_REM){
            printf("---MEMORY-OVER---\n");
            break;
        }
        printf("Enter day, time(in __:__ format) and then remainder:");
        scanf("%2d", &day);
        if (day == 0)
            break;
        if (day < 0 || day > 31){
            printf("Oops..! Invalid Date. Skipping it for you..!\n");
            continue;
        }
        sprintf(sday, "%2d", day);
        scanf("%s", ctime);
        strcpy(cist, sday);
        char epty[] = " ";
        strcat(cist, epty);
        strcat(cist, ctime);
        read_line(msg);
        int i, j;
        for (i = 0; i < cnt; i++){
            if (strcmp(cist, rem[i]) < 0)
                break;
        }
        for (j = cnt; j > i; j--){
            strcpy(rem[j], rem[j-1]);
        }
        strcpy(rem[i], cist);
        strcat(rem[i], msg);
        cnt++;
    }
    printf("\nDay Reminder\n");
    for (int i = 0; i < cnt; i++){
        printf("%s", rem[i]);
    }
    return 0;
}
