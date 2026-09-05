#include <stdio.h>

void quicksort(int *l, int* r);
int* split(int* l, int *r);


int main(){
    int n; scanf("%d", &n);
    int a[n];
    for (int i = 0; i < n; i++)
        scanf("%d", &a[i]);
    quicksort(&a[0], &a[n-1]);
    for (int i = 0; i < n; i++)
        printf("%d ", a[i]);
    printf("\n");
    return 0;
}

void quicksort(int *l, int *r){
    if (l >= r)
        return;
    int *md = split(l, r);
    quicksort(l, md-1);
    quicksort(md+1, r);
}

int* split(int *l, int* r){
    int ref = *l;
    for (;;){
        while (l < r && ref <= *r)
            r--;
        if (l >= r) break;
        *(l++) = *r; 

        while (l < r && *l <= ref){
            l++;
        }
        if (l >= r) break; 
        *(r--) = *l;
    }
    *l = ref;
    return l;
}
