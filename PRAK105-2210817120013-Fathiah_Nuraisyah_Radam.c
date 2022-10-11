#include <stdio.h>
void main(){
    float a,b,x,y,c,d,total;
    a=9;
    b=5;
    x=8;
    y=8;
    c=a / b;
    d=x / y;
    d++;
    total= d + c;
    printf("Variabel a adalah 9 \n");
    printf("Variabel b adalah 5 \n");
    printf("Variabel x adalah 8 \n");
    printf("Variabel y adalah 8 \n");
    printf("Total sisa bagi dari a dibagi b dan x dibagi y adalah %.f",total);
}
