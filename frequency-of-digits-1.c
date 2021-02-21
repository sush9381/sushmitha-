#include<stdio.h>
#include<stdlib.h>
int main() {
    char s[1000]; 
    char m[10];
    int i,x;
    scanf("%s", &s);
    int len = strlen(s);
    
    for (i = 0; i < 10; i++) 
    m[i] = 0;
    
    for ( i = 0; i < len; i++) {
         x = s[i] - '0';
        if (x >= 0 && x <= 9) 
        m[x]++;
    }
    
    for (i = 0; i < 10; i++) 
    printf("%d ", m[i]);
    return 0;
}
