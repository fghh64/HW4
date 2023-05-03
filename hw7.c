#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
int k, b, i=0;
int p=0;
int m=0;
int z=0;
scanf("%d", &k);
while (i<k) {
    scanf("%d", &b);
    if (b>0) {
        p++;
    } else if (b<0) {
        m++;
    } else if (b==0) {
        z++;
    }
    i++;
}
printf("%d %d %d\n", z, p, m);
}