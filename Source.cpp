#include <stdio.h>
#include <string.h>
#include <iostream>

using namespace std;

int BuscarPalabra(char * Cadena, char * Palabra);

int main()
{
	printf("%i\n", BuscarPalabra("UPC EXIGETE INNOVA", "INNOVA"));
	system("pause");
	return 0;
}

int BuscarPalabra(char * Cadena, char * Palabra)
{
	int len = strlen(Palabra);

	while (*Cadena != '\0')
	{

		if (strstr(Cadena, Palabra))
		{
			if (*(Cadena - 1) == ' ' && *(Cadena + len + 1) == ' ')
			{
				return 1;
			}
		}
		Cadena++;
	}
	return 0;
}
