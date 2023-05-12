#include<stdio.h>
int main(){
	
int sayi,sayi1,toplam = 0;
int i,adet = 0;

while(true){
	printf("Kac adet gireceksiniz :"),
	scanf("%d",&sayi1);
	if(sayi1 > 0){
		for(i=0;i<sayi1;i++){
			printf("%d tane sayiyi giriniz :",sayi1);
			scanf("%d",&sayi);
				if(sayi % 8 == 0 || sayi % 13 == 0){
				toplam += sayi;
				adet++;
				}
		}
		break;
	}
	else if(sayi1 <=0){
		printf("Hata!! adet sayisi negatif bir sayi veya 0 olamaz.Tekrar bir sayi girin :\n");
		continue;
	}
}
	printf("Kurala Uyan Toplamda %d kadar sayi girdiniz.",adet);
		printf("Tanimli Sayilarin Toplami : %d",toplam);

return 0;
}
