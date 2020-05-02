#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

void contoh_biasa() {
	int X = 0;
	X = X + 1;
	printf("X Biasa = %i\n", X);
}

void contoh_statis() {
	static int X = 0; 
	X = X + 1;
	printf("X Statis = %i\n", X);
}

int main() {
	for (int i = 0;  i <= 2;  i++)
	{
		contoh_biasa();
	}

	puts("");

	for (int i = 0; i <= 2; i++)
	{
		contoh_statis();
	}

	_getch();
	return 0;
}
