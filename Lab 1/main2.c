#include <stdio.h>

int szukajwielokrotnosci(int tab[20],int n)
{
	int wynik = 0;
	for(int i=0;i<20;i++)
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

int main ()
{
	int tab[20];
	for(int i=0;i<20;i++)
	{
		scanf("%i",&tab[i]);
	}
	for(int i=0;i<20;i++)
	{
		printf("%i\n",tab[i]);
	}
	int * wsk = tab;
	int wynik = szukajwielokrotnosci(wsk,5);
	printf("%i",wynik);
}