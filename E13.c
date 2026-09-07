#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void build_index_url(const char *dom, char *idx){
    char beg[100] = "http://www.";
    char end[] = "/index.html\0";
    strcat(beg, dom);
    strcpy(idx, beg);
    strcat(idx, end);
}

int main(){
    char s[] = "knking.com";
    char t[100];
    build_index_url(s, t);
    printf("%s", t);
    return 0;
}
