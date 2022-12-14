#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) 
{
	int i;
	int secim;
	int rakiptop=0,oyuncutop=0;
	
	printf("-----OYUNA HOSGELDÝNÝZ-----\n\n");
	printf("tas=1 \t kagit=2 \t makas=3 \n\n");
	
	
	srand(time(NULL)); //her seferinde bilgisayar farklý deger oluþtursun diye
	
	for(i=0;i<5;i++)
	{
		printf("secim yapiniz:\n");
    	scanf("%d",&secim);
    	
    	int rakiptahmin=(rand()%3)+1; // Örneðin bilgisayar 5 i seçti ,3 ile bölümünden kalan 2 dir buna bir ekleriz.Rakibin tahmini 3 olur.
    	
		if(secim==1)
	{
		if(rakiptahmin==1)
		{
		
			printf("berabere bitti\n");
		}
		printf("\n");
		
		if(rakiptahmin==2)
		{
			printf("rakibiniz kazandi\n");
			rakiptop+=1;
		}
		printf("\n");
		
		if(rakiptahmin==3)
		{
			printf("rakibiniz kazandi\n");
			rakiptop+=1;
		}
		printf("\n");		
	}
	
	    else if(secim==2)
	{
		if(rakiptahmin==1)
		{
			printf("tebrikler kazandiniz\n");
			oyuncutop+=1;
		}
		if(rakiptahmin==2)
		{
			printf("berabere bitti\n");
		
		}
		if(rakiptahmin==3)
		{
			printf("rakibiniz kazandi\n");
			rakiptop+=1;
	 	}
	}
	
	    else if (secim==3)
	{
		if(rakiptahmin==1)
		{
			printf("tebrikler kazandiniz \n");
			oyuncutop+=1;
		}
		if(rakiptahmin==2)
		{
			printf("tebrikler kazandiniz \n");
		    oyuncutop+=1;
		}
		if(rakiptahmin==3)
		{
			printf("berabere bitti\n");
		}
	
     }
     
	    else
	{
		printf("hatali giris!\n");
	}
	
    }
    printf("\n");
    printf("oyunun kazanani\n");
	if(rakiptop>oyuncutop)
	{
		printf("oyunun kazanani rakibinizdir\n");
	}
	else if(rakiptop<oyuncutop)
	{
		printf("oyunun kazanani sizsiniz\n");
	}
	else
	{
		printf("berabere kaldiniz,tebrikler\n");
	}
	
	return 0;
}
