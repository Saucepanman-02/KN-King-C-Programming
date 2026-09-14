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
    char smonth[3];
    char time[8]; char empty[] = " ";
    int day, cnt = 0, month;
    for (; ;){
        if (cnt == MAX_REM){
            printf("---MEMORY-OVER---\n");
            break;
        }
        printf("Enter time (month/day form) and then remainder:");
        scanf("%2d / %2d", &month, &day);
        if (day == 0)
            break;
        if (day <= 0 || day > 31 || month <= 0 || month > 12){
            printf("Oops..! Invalid Date. Skipping it for you..!\n");
            continue;
        }
        sprintf(sday, "%2d", day);
        sprintf(smonth, "%2d", month);
        strcpy(time, smonth);
        strcat(time, empty);
        strcat(time, sday);
        read_line(msg);
        int i, j;
        for (i = 0; i < cnt; i++){
            if (strcmp(time, rem[i]) < 0)
                break;
        }
        for (j = cnt; j > i; j--){
            strcpy(rem[j], rem[j-1]);
        }
        strcpy(rem[i], time);
        strcat(rem[i], empty);
        strcat(rem[i], msg);
        cnt++;
    }
    printf("\nMonth Day Reminder\n");
    for (int i = 0; i < cnt; i++){
        printf("%s", rem[i]);
    }
    return 0;
}
