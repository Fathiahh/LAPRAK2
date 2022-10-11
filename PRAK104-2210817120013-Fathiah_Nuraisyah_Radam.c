#include <stdio.h>
void main(){
      int A,B,c,d,hasil_1,hasil_2;
      A=400000;
      B=350000;
      c=0.13 * A;
      d=0.21 * B;
      hasil_1=A-c;
      hasil_2=B-d;
      printf("Harga sepatu A adalah 400000\n");
      printf("Harga sepatu B adalah 350000\n");
      printf("Sepatu A mendapat diskon 13%% sehingga harganya menjadi %d \n", hasil_1);
      printf("Sepatu B mendapat diskon 21%% sehingga harganya menjadi %d \n", hasil_2);
}