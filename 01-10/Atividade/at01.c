#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");

int y = 10;

do {

	printf("valor de y = %d\n", y);
	y = y-2;
	
} 

while (y != 0);
	printf("valo de y = %d", y);
	

}
