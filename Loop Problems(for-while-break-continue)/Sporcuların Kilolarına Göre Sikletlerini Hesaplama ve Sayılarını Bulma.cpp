#include<stdio.h>
int main(){
	
int kilo,asiklet = 0;
int hsiklet = 0;
int osiklet = 0;
int sporcu =0;	
float ortalama,toplam =0;

while(true){
printf("Kilolari Giriniz (Eger 0 girerseniz suana kadar girdiginiz degerlerin sonuclarini gosterecektir) :");	
scanf("%d",&kilo);

	if(0<kilo && kilo < 50){
		hsiklet++;
	}	
	
	else if(50<=kilo && kilo <70){
		osiklet++;
	}
	
	else if(kilo >= 70){
		asiklet++;
	}
	
	else if(kilo <0){
		printf("\n\nNegatif bir deger girdiniz.Lutfen tekrar bir kilo degeri giriniz.\n\n");
		continue;
	}	
	
	else if(kilo == 0){
		break;
	}
	
	toplam +=kilo;
	sporcu++;
}	
ortalama = toplam / sporcu;

printf("\n\nToplamda %d adet sporcu girilmistir.\n\n",sporcu);	
	printf("%d hafif ,%d orta ve %d agir siklet vardir.",hsiklet,osiklet,asiklet);
		printf("\n\nGenel Ortalama %.2f'dir",ortalama);
	return 0;
}

