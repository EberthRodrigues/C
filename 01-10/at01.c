#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");

int y = 10;

do {

	printf("valor de x = %d\n", y);
	y = y-2;
	
} 

while (y != 0);
	printf("valo de x = %d", y);
	

}
