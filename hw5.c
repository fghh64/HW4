#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
float e;
int c;
int a=0, b=0;
scanf("%d", &c);
while (c!=0)
{
    a+=c; //сумма чисел
    b+=1; //счетчик цифер
    scanf("%d", &c); 
}
e=(float)a/b; //деление
printf("%f\n",e);
}