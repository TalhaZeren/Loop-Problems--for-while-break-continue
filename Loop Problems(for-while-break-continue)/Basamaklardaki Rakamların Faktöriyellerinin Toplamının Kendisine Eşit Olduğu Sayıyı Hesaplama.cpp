#include<stdio.h>
int main(){
						//	 Basamaklardaki Rakamlarýn Faktöriyellerinin Toplamýnýn Kendisine Eþit Olduðu Sayýyý Hesaplama = "Ýlginç Sayý";
int f1 = 1;
int f2 = 1;
int f3 = 1;
int i = 100;
int a,b,c,toplam;

while(i<1000){
	
a = i/100;
b = i/10;
b = i%10;
c = i%10;

for(;a>f1;a--){
	f1 = f1 * a;
}
	for(;b>f2;b--){
		f2 = f2 *b;
	}
		for(;c>f3;c--){
			f3 = f3 * c;
		}
		
toplam = f1 + f2 + f3;

	if(i == toplam){
		break;
	}
	
	else if(i != toplam){
		i++;
		continue;
	}
}
printf("Aradiginiz mukemmel sayi %d dir.",toplam);	
	
	return 0;
}
