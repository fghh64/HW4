#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>

int main() {
    char arr[100];
    int a=0, b=0, c=0;
    int d=0, e=0, f=0, g=0;
    int l;

    scanf("%s", &arr);
    l=strlen(arr);

    for (int i = 0; i < l; i++) {
        if (33<=arr[i] && arr[i]<=126) {
            a=1;
            
        }
    }

    if (8<=l && l<=14) {
        b=1;
    }

    for (int i = 0; i < l; i++) {
        if (48<=arr[i] && arr[i]<=57) {
            d=1;
            continue;
        } else if (65<=arr[i] && arr[i]<=90) {
            e=1;
            continue;
        } else if (97<=arr[i] && arr[i]<=122) {
            f=1;
            continue;
        } else {
            g=1;
        }
    }
    if (d+e+f+g>=3) {
        c=1;
    }
    if (a+b+c==3) {
        printf("yes\n");
    } else {
        printf("no\n");
    }
    return 0;
}