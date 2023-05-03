#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main() {
    int a, b;
    scanf("%d", &a);
    char result[100]="";
    b=abs(a);
    for (int i = 0; 1 <= b; i++) {
        if (b%2==1) {
            result[i]='1';
        } else {
            result[i]='0';
        }
        b=b/2;
    }
    printf((a>=0) ? "":"-");
    for (int i = strlen(result); i>=0; i--)
    {
     printf("%c", result[i]);  
    }
    return 0;
}
