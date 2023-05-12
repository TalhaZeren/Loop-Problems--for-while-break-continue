#include<stdio.h>
int main(){
	
char harf;
int nabiz,sayi,adet = 0;
int cocuknabiz,enkucuk,enbuyuk,caut = 0;
int i;													
												printf("\t\t\t\tNabiz Degerlendirme Programina Hosgeldiniz\n");		

printf("Yas Grubunu Giriniz (Cocuklar icin : c, Yetiskinler icin : y ;  Cikmak icin : b)\n");
scanf("%s",&harf);
	printf("Nabiz Degerini Giriniz :");
	scanf("%d",&nabiz);
	
	while(true){
		
	if(harf == 'b'){
		break;
	}
	
	if(nabiz == 0){
		break;
	}
	
		switch(harf){
			case 'y':{
					if(60<nabiz && nabiz <100){
						printf("Nabiz : NORMAL\n\n");
					}
					
					else if(nabiz >=100){
						printf("Nabiz : YUKSEK (Tasikardi)\n\n");
						adet++;
					}
					
					else if(nabiz <=60){
						printf("Nabiz : DUSUK (Bradikardi)\n\n");
					}
					
						else if(nabiz <=0){
					printf("Yanlis Kategori veya Nabiz Degeri \n\n");
						}
						break;
					}	
					
			case 'c':{
						if(80<nabiz && nabiz < 100){
							printf("Nabiz : NORMAL\n\n");
							++caut;
							for(i = 0;i<caut;i++){
								
								if(caut = 1){
									enkucuk = nabiz;
									enbuyuk = nabiz;	
							}
							
							else{
								
								if(nabiz < enkucuk){
								enkucuk = nabiz;
								
									if(nabiz > enbuyuk)
									enbuyuk = sayi;
								
								}
							}
						}
						
						}
							
						else if(nabiz >= 100){
							printf("Nabiz : YUKSEK (Tasikardi)\n\n");
							++caut;
							for(i = 0;i<caut;i++){
								
							if(caut = 1){
								enkucuk = nabiz;
								enbuyuk = nabiz;	
							}
							
							else{
								if(nabiz < enkucuk){
								enkucuk = nabiz;
								
									if(nabiz > enbuyuk)
									enbuyuk = sayi;
								}
							}
						}
							
						}
						else if(0<nabiz && nabiz<=80){
							printf("Nabiz : DUSUK (Bradikardi)\n\n");
							++caut;
						for(i = 0;i<caut;i++){
							
							if(caut = 1){
								enkucuk = nabiz;
								enbuyuk = nabiz;	
							}
							else{
								if(nabiz < enkucuk){
								enkucuk = nabiz;
								
									if(nabiz > enbuyuk)
									enbuyuk = sayi;
								}
							}
						}
						}
						
						else if(nabiz <=0){
							printf("Yanlis Kategori veya Nabiz Degeri \n\n");
						}
						
						break;	
					}
					
			default :{
						printf("Yanlis Kategori veya Nabiz Degeri\n\n");
						break;	
					}	
		
	}	// Switch End ;
	
	printf("Yas Grubunu Giriniz (Cocuklar icin : c, Yetiskinler icin : y ;  Cikmak icin : b)\n");
	scanf("%s",&harf);
		printf("Nabiz Degerini Giriniz :");
		scanf("%d",&nabiz);
		
		if(harf == 'b'){
			break;
		}
		
		else if(harf == 'y' || harf == 'c' ){
			continue;
		}
		
		else{
			printf("Yanlis Kategori veya Nabiz Degeri\n\n");
			continue;
		}
		
		if(nabiz == 0){
			break;
		}
		
		else if(nabiz < 0){
			printf("Yanlis Kategori veya Nabiz Degeri\n\n");
			continue;
		}
		
		else if(nabiz >0){
			continue;
		}
		
	}  // While End;
	
printf("\n\nProgram Sona Erdi\n\n");
	printf("Cocuklarda En dusuk nabiz degeri : %d\n\n",enkucuk);
		printf("Yetiskinlerde tasikardi sayisi : %d",adet);

	return 0;
}
