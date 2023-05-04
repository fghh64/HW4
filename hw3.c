#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>

int main() {
    char arr[100];
    int a=1, b=0, c=0; //счетчик всех пунктов
    int d=0, e=0, f=0, g=0; //счетчик для 3 пункта
    int l;

    scanf("%s", &arr);
    l=strlen(arr);

    for (int i = 0; i < l; i++) {
        if (33>arr[i] && arr[i]>126) {
            a=0;
            break;
        } 
    } //проверят используется ли таблица аски

    if (8<=l && l<=14) {
        b=1;
    } //проверка длинны пароля

    for (int i = 0; i < l; i++) {
        if (48<=arr[i] && arr[i]<=57) {
            d=1; //цифры
            continue;
        } else if (65<=arr[i] && arr[i]<=90) {
            e=1; //Большие буквы
            continue;
        } else if (97<=arr[i] && arr[i]<=122) {
            f=1;  //маленькие буквы
            continue;
        } else {
            g=1;
        }
    } 

    if (d+e+f+g>=3) {
        c=1;
    }//проверка 3 условия

    if (a+b+c==3) {
        printf("yes\n");
    } else {
        printf("no\n");
    }
    return 0;
}