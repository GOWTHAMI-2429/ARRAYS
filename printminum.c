#include <stdio.h>
 void main() {
    int a= 10;
    int b= 20;
    a= ++b;
    a= ++a;
    printf("a=%d\tb=%d",a,b);
}