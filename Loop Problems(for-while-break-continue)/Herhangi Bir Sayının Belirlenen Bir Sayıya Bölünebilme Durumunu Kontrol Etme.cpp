#include <stdio.h>
int main(){
int sayi1,sayi2,i;
int toplam = 0;

printf("1. Sayiyi giriniz :");
scanf("%d",&sayi1);
printf("2. Sayiyi giriniz :");
scanf("%d",&sayi2);
printf("Saðlayan sayi :\n");
	for(i=sayi1;i<=sayi2;i++){
		if(i % 4 == 0 || i % 7 == 0){
			toplam += 1;
			printf("saglayan sayi %d",i);
		}
		printf("\n");
	}	
	
	printf("\n Toplam %d adet ",toplam);
	
		
	return 0;
}
