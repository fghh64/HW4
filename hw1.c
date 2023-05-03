#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
int a, b;
scanf("%d %d", &a, &b);

if (a<3 && a!=2) {
    printf("31 ");
} else if (a==2 && b%4==0 && b%100!=0 || a==2 && b%400==0) {
    printf("29 ");
} else if (a==2 && b%4!=0) {
    printf("28 ");
}

if (2<a<8 && a%2!=0) {
    printf("31 ");
} else if (2<a<8 && a%2==0) {
    printf("30 ");
}

if (7<a && a%2!=0) {
    printf("30 ");
} else if (7<a && a%2==0) {
    printf("31 ");
}
// вычисление количества дней в году
return 0;
}