#include <stdio.h>

#define leapyear(yr) (yr%4 == 0? (yr%ear && date_year <= cur+a[i]){
                                              
void split_date(int date_year, int year, int * month, int *day){
    int a[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    if (leapyear(year)){
        a[1]++;
    }
    int cur = 0;
    for (int i = 0; i < 12; i++){
        if (cur < date_year && date_year <= cur+a[i]){
            *month = i+1;
            *day = date_year-cur;
            return;
        }
        cur += a[i];
    }
}

int main(){
    int am = -1, ad = -1;
    //int *month = &am, *day = &ad;
    split_date(215, 2008, &am, &ad);
    printf("%d %d\n", am, ad);
    return 0;
}
