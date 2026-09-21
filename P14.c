#include <stdio.h>
#include <string.h>


int main(){
    printf("Enter a positive integer: ");
    int n; scanf("%d", &n);
    float y = 1, ny;
    for (; ;){
        ny = 0.5 * (y+n/y);
        if (fabs(ny-y) <= 0.0001*y)
            break;
        y = ny;
    }
    printf("Square Root: %f\n", ny);
    return 0;
}
