#include<stdio.h>
int main(){
					// Collatz Serisi : Collatz Varsay�m� her say�dan 1'e ula��labilece�ini g�sterir. Buna g�re; e�er say� �iftse 2'ye b�l�n�r, tek ise 3 ile �arp�l�p 1 eklenir.
														// Bu i�lem say� 1 olana kadar devam edilir.
int sayi;
int i,adet = 0;

printf("Sayiyi Giriniz :");
scanf("%d",&sayi);
	
	if(sayi >0)
	printf("Collatz Degeri : %d\t",sayi);
	adet++;

	while(sayi != 1){
	
		if(sayi %2 == 0){
			
			sayi = sayi / 2;
			adet++;
			printf("%d\t",sayi);
			
		}
		else if(sayi % 2 == 1){
			
			sayi = (sayi * 3) +1;
			adet++;
			printf("%d\t",sayi);
	
		}
		else if(sayi <=0){
			printf("\nSayi sifir veya negatif olamaz.Tekrar bir sayi girin. \n");
				printf("Sayiyi Giriniz :");
					scanf("%d",&sayi);
			continue;
		}	
	}
printf("\n\n Seri %d adet sayidan olusur.",adet);	
	return 0;
}
