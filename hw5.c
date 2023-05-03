#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
float e;
int c;
unsigned int a=0, b=0;
scanf("%d", &c);
while (c!=0)
{
    a+=c;
    b+=1;
    scanf("%d", &c);
}
e=(float)a/b;
printf("%f\n",e);
}