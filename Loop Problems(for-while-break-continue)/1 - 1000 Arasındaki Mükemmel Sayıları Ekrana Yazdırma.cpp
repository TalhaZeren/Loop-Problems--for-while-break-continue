#include<stdio.h>
int main(){
					// Mükemmel Sayý : Kendisi Hariç Bölenlerinin Toplamý Kendisine Eþit Olan Sayý.
int i,j=1;
int toplam = 0;

printf("1 ile 1000 arasindaki mukemmel sayilar : \n");

for(i=1;i<=1000;i++){
	
	for(j=1;j<i;j++){
		
		if(i % j == 0){
		toplam += j;
		}
   	}
   	
	if(toplam == i){
	printf("%d",i);
	}
}	
return 0;
}
