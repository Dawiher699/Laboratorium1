#include <stdio.h>
#include <stdlib.h>
int szukajwielokrotnosci(int tab[50],int n,int ile)
{
	int wynik = 0;
	for(int i=0;i<ile;i++)
	{
		int j = tab[i];
		while(j >0)
		{
			j = j-n;
			if(j==0)
				return wynik;
		}
		wynik++;
	}
	return -1;
	
}

int main (int ile,char * arg[])
{
	int tab[50];
	int n = atoi(arg[1]);
	for(int i=0;i<ile-2;i++)
	{
		tab[i]=atoi(arg[i+2]);
	}
	for(int i=0;i<ile-2;i++)
	{
		printf("%i\n",tab[i]);
	}
	int * wsk = tab;
	int wynik = szukajwielokrotnosci(wsk,n,ile-2);
	printf("%i",wynik);
}