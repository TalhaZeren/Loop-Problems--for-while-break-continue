#include <stdio.h>
int main(){
int sayi1,sayi2,i,toplam = 0;
int adet = 0;
while(true){
	printf("Ilk degeri giriniz :");
	  scanf("%d",&sayi1);
	  printf("Ikinci sayiyi giriniz :");
	    scanf("%d",&sayi2);
	if(sayi1>=sayi2){
		printf("Hata!!! Ilk sayi Ikinci sayidan mutlaka kucuk olmali\n\n");
		continue;
	}
	printf("Sayilar \n");
	for(i=sayi1;i<=sayi2;i++){
		if(i % 3 == 0 || i % 11 == 0){
			toplam += i;
			adet++;
			printf("%d\t",i);
		}
	}
	break;
}
	printf("Kurala uyan toplamda %d adet sayi vardir.\n",adet);
	printf("Toplamlari %d",toplam);

return 0;
}
