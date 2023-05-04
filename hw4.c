#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main() {
    int a, b, i = 0;
    scanf("%d", &a);
    char result[100]="";
    b=a; 
    if (b<0) {
        b=b*(-1);
    } //модуль числа а

    while(1) {
        if (b<1) {break;} //в конце деления b будет равен 0 поэтому это условие остановки
        if (b%2==1) {
            result[i]='1'; //если остаток 1 то элемент массива по индексу i = '1'
        } else {
            result[i]='0'; //если остаток 0 то элемент массива по индексу i = '0'
        }
        b=b/2; //делим на 2
        i++; //сколько раз выполнится цикл
    }

    if (a<0) {
        printf("-"); //выводим минус по изначальному числу
    }
    for (int i = strlen(result); i>=0; i--) //идем в обратном порядке
    {
     printf("%c", result[i]);  
    }
    printf("\n");
    return 0;
}
