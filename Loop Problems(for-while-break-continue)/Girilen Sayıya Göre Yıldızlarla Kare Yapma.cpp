#include <stdio.h>

int main(){
int kare,i,j;

printf("1 ile 20 arasinda bir sayi giriniz giriniz :");
scanf("%d",&kare);

	for(i = 0;i<kare;i++){
		
		for(j=0;j<kare;j++){
			printf("*  ");
		}
		
	printf("\n");
	}
	return 0;
}
