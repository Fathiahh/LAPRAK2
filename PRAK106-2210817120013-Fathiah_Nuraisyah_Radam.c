#include <stdio.h>
void main(){
    int a = 4;
    int b = 8;
    int c = 3;
    int hasil_relasi = a == b;
    int hasil_relasi2= b > c;
    int hasil_relasi3= a != c;
    printf("Variabel a bernilai 4\n");
    printf("Variabel b bernilai 8\n");
    printf("Variabel c bernilai 3\n");
    printf("Apakah a sama dengan b ? jawabannya adalah %d\n",hasil_relasi);
    printf("Apakah b lebih besar dari c ? jawabannya adalah %d\n",hasil_relasi2);
    printf("Apakah a tidak sama dengan c ? jawabannya adalah %d\n",hasil_relasi3);
}
