#include <stdio.h>
void main(){
      int a,b,c,d,keliling,harga,total_harga;
      a=4;
      b=5;
      c=7;
      harga=85000;
      keliling=a + b + c;
      total_harga=harga * keliling;
      printf("Diketahui : \n");
      printf("Panjang sisi segitiga berturut-turut adalah 4, 5, dan 7\n");
      printf("Keliling Tanah Pak Dengklek adalah %d\n", keliling);
      printf("Harga tanah Per Meter adalah %d\n", harga);
      printf("Jawaban :\n");
      printf("Biaya yang diperlukan Pak Dengklek adalah : Rp %d", total_harga);
}