#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
int main (int ile,char * arg[])
{
	char* element1;
	char* element2;
	char* temp;
	bool zamiana;
	bool liczby;
	bool szukaj;
	bool wykonuj;
	int pomoc;
	int liczba1;
	int liczba2;
	bool liczenie;
	int pom;
	for(int i=1;i<ile;i++)
	{
		for(int j=1;j<ile-i;j++)
		{
			zamiana = false;
			szukaj = true;
			wykonuj=true;
			pomoc = 0;
			element1 = arg[j];
			element2 = arg[j+1];
			liczba1=0;
			liczba2=0;
			liczenie = false;
			while(szukaj)
			{
				liczby = true;
				if(sizeof(element1)/sizeof(element1[0])<pomoc)
				{
					wykonuj = false;
					szukaj = false;
				}
				if(sizeof(element2)/sizeof(element2[0])<pomoc)
				{
					zamiana = true;
					wykonuj = false;
					szukaj = false;
				}
				if(wykonuj)
				{
					if(element1[pomoc]<48||element1[pomoc]>57)
					{
						liczby = false;
					}
					if(element2[pomoc]<48||element2[pomoc]>57)
					{
						liczby = false;
					}
					if(liczby==false)
					{
						szukaj = false;
						if(element1[pomoc]>element2[pomoc])
						{
							zamiana = true;
						}
						if(element1[pomoc]==element2[pomoc])
						{
							pomoc++;
							szukaj = true;
						}
					}
					else
					{
						liczenie = true;
						pom = pomoc;
						while(liczenie)
						{
							liczba1 = 10*liczba1 + element1[pomoc]-48;
							pomoc++;
							if(sizeof(element1)/sizeof(element1[0])<pomoc)
							{
								liczenie = false;
							}
							else
							{
								if(element1[pomoc]<48||element1[pomoc]>57)
								{
									liczenie = false;
								}
							}
						}
						liczenie = true;
						pomoc = pom;
						while(liczenie)
						{
							liczba2 = 10*liczba2 + element2[pomoc]-48;
							pomoc++;
							if(sizeof(element2)/sizeof(element2[0])<pomoc)
							{
								liczenie = false;
							}	
							else
							{
								if(element2[pomoc]<48||element2[pomoc]>57)
								{
									liczenie = false;
								}
							}
						}
						szukaj = false;
						if(liczba1>liczba2)
						{
							zamiana=true;
						}
						if(liczba1==liczba2)
						{
							szukaj = true;
						}
					}
				}
			}
			if(zamiana)
			{
				temp = arg[j];
				arg[j] = arg[j+1];
				arg[j+1] = temp;
			}
		}
	}
	char ** tmp = arg;
	for(int i=0;i<ile-1;i++)
	{
		tmp++;
		puts(*tmp);
	}
}