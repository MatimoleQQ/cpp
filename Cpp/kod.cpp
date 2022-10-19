#include <cstdio>
#include <cstdlib>
#include <cstring>
/**************************************
 * nazwa funkcji: szyfrowanie
 *
 * parametry wejściowe: <nazwa parametru> - <co przechowuje parametr>
 * wartość zwracana: zaszyfrowane - zaszyfrowany ciag znakow
 * opis funkcji: Funkcja pobiera od uzytkownika ciag znakow po czym szyfruje go przy uzyciu szyfru GADERYPOLUKI
 *
 * autor: Marcin W
 *************************************/
char szyfrowanie(char tablica[])
{
    char szyfr[] = {"GADERYPOLUKI"};
	char zaszyfrowane[20];
	
	printf("Podaj ciag znakow, ktory chcesz zakodowac:\nMax 20 znakow\n");
	scanf("%s",tablica);
	for (int i = 0; i < strlen(tablica); i++)
	{
		for (int j = 0; j < strlen(szyfr); j++)
		{
			if (tablica[i] == szyfr[j])
			{
				if (j%2 == 0)
				{
					zaszyfrowane[i] = szyfr[j+1];
					break;
				    
				}
				else
				{
					zaszyfrowane[i] = szyfr[j-1];
					break;
				}
			}
			else
			{
				zaszyfrowane[i] = tablica[i];
			}
		}
	}
	printf("%s\n",zaszyfrowane);
	return zaszyfrowane;
// 	for(int i = 0 ; i<20; i++)
// 	std:cout<<zaszyfrowane[i];
}
int main()
{
	char tablica[20] = {'\0'};
	szyfrowanie(tablica);
	system("pause");
	return 0;
}