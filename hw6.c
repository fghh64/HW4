#include <stdio.h>
#include <string.h>

int main() {
    int a, b, c=0;
    scanf("%d", &a); //сколько чисел мы введем
    for (int i = 0;i<a;i++) {
        scanf("%d", &b); //для воода новых данных
        if (b>0) {
            c++;
        } //цикл по вычислению положительных чисел
    }
printf("%d\n", c);
}