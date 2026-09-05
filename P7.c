#include <stdio.h>
#include <stdlib.h>


#define max(a, b) (a > b? a: b)
#define min(a, b) (a > b? b: a)


void max_min(int *l, int* r, int *mn, int *mx){
    while (l <= r){
        *mn = min(*mn, *l);
        *mx = max(*mx, *l); l++;
    }
}

int main(){
    int n; scanf("%d", &n);
    int a[n];
    for (int i = 0; i < n; i++)
        scanf("%d", &a[i]);
    int amn = -(1<<31)-1, amx = -(1<<31);
    int *mn = &amn, *mx = &amx;
    max_min(&a[0], &a[n-1], mn, mx);
    printf("%d %d\n", *mn, *mx);
    return 0;
}
