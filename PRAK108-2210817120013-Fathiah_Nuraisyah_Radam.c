#include <stdio.h>
void main(){
      float a,c,jarak,phi,jari_jari,keliling,x;
      a=5;
      c=2;
      jarak=14;
      phi=3.14;
      keliling=jarak / a;
      x= phi * c;
      jari_jari=keliling / x;
      printf("Diketahui : \n");
      printf("Pak Dengklek mengelilingi taman = 5 Putaran \n");
      printf("Jarak tempuh Pak Dengklek = 14 Kilometer \n\n");
      printf("Jawaban : \n");
      printf("Jari-jari taman yang dikelilingi Pak Dengklek adalah %.2f Kilometer", jari_jari);
}