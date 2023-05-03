#include <stdio.h>
#include <string.h>

int main() {
    int a, b, c=0;
    scanf("%d", &a);
    for (int i = 0;i<a;i++) {
        scanf("%d", &b);
        if (b>0) {
            c++;
        }
    }
printf("%d\n", c);
}