#include<stdio.h>
int main(){
					// M�kemmel Say� : Kendisi Hari� B�lenlerinin Toplam� Kendisine E�it Olan Say�.
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
