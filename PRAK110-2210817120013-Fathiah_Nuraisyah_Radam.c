#include <stdio.h>
#include <math.h>
void main(){
      float A,T,C,D,sisi_b,sisi_a,sisi_c,keliling,luas;
      A=5;
      T=12;
      C=A * A + T * T;
      D=0.5;
      sisi_a=T;
      sisi_b=sqrt(C);
      sisi_c=A;
      keliling=sisi_a + sisi_b + sisi_c;
      luas=D * A * T;
      printf("Diketahui : \n");
      printf("Alas = 5 cm\n");
      printf("Tinggi = 12 cm\n\n");
      printf("Jawab : \n");
      printf("Sisi A = %.f cm\n", sisi_a);
      printf("Sisi B = %.f cm\n", sisi_b);
      printf("Sisi C = %.f cm\n", sisi_c);
      printf("Keliling = %.f cm\n", keliling);
      printf("Luas = %.f cm", luas);
}

