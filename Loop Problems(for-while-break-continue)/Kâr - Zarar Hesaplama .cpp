#include <stdio.h>
int main(){
	
int zarar = 0;
int kar = 0;
float alis,satis,hesap;
int i = 0;

printf("\t\t\t\t\t Ithalat ve Ihracat Sirketi");

while(true){
	printf("\n\nAlis ve Satis fiyatlarini sirayla giriniz (ikisini de 0 ve 0 tuslarsaniz programi sonlandiracaktir) :");
	scanf("%d%d",&alis,&satis);
	
		if(alis == 0 && satis == 0){
			break;
		}
		hesap = (satis - alis)/alis;
		if(hesap < 0){
			printf("Kar orani %.2f",hesap);
			zarar++;
		}
		else if(hesap > 0){
			printf("Kar orani %.2f",hesap);
			kar++;
		}
		else{
			printf("Ne kar ne zarar edilmistir.");
			i++;
		}
}
printf("Program Sonra Erdi.\n\n");
	printf("Toplamda %d islemden kar, %d islemden zarar edilmistir.%d islemden ise ne kar ne zarar edilmistir.\n\n",kar,zarar,i);
		printf("----------------------------------------------------");

return 0;
}
