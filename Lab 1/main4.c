#include <stdio.h>
#include <stdlib.h>
int szukajwielokrotnosci(int tab[],int n,int ile)
{
	int *tablica;
	tablica=tab;
	int wynik = 0;
	for(int i=0;i<ile;i++)
	{
		int j = *(tablica);
		while(j >0)
		{
			j = j-n;
			if(j==0)
				return wynik;
		}
		tablica++;
		wynik++;
	}
	return -1;
	
}

int main (int ile,char * arg[])
{
	int tab[50];
	int *tablica; 
	tablica= tab;
	arg++;
	int n = atoi(*arg);
	for(int i=0;i<ile-2;i++)
	{
		arg++;
		tab[i]=atoi(*arg);
	}
	for(int i=0;i<ile-2;i++)
	{
		printf("%i\n",*(tablica + i));
	}
	int wynik = szukajwielokrotnosci(tablica,n,ile-2);
	printf("%i",wynik);
}