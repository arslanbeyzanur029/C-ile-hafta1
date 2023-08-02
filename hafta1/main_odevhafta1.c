#include <stdio.h>
#include <stdlib.h>
#include <time.h>


int main() {
	int ilk_zar,ikinci_zar,toplam;
	int puan=0;
	srand(time(NULL));
	do{
		ilk_zar=rand()%6+1;
		ikinci_zar=rand()%6+1;
		toplam=ilk_zar+ikinci_zar;
		if(toplam==7 || toplam==11){
			printf("kazandiniz");
		}
		else if(toplam==2 || toplam==3 || toplam==12){
			printf("kaybettiniz");
		}
		else{
			toplam=puan;
		}
	}while(toplam<=12 || toplam>=2);

  
  return 0;
}
