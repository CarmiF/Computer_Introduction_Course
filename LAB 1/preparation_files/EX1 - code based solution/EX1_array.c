#include <stdio.h>
#define SIZE 8


int main(){

	int Id1[SIZE] = { 9, 6, 2, 8, 3, 5, 7, 4 }, Id2[SIZE] = { 8, 6, 3, 2, 3, 2, 0, 6 };
	int Parity1[SIZE], Parity2[SIZE];

	for (int i = 0; i < SIZE; i++) {
		if (Id1[i] % 2 & 1) 
			Parity1[i] = 1;
		else 
			Parity1[i] = 0;

		if (Id2[i] % 2 & 1) 
			Parity2[i] = 1;
		else 
			Parity2[i] = 0;
	}

	printf("[");
	for (int i = 0; i < SIZE; i++) {
		printf("%d ", Parity1[i]);
	}
	printf("]\n");

	printf("[");
	for (int i = 0; i < SIZE; i++) {
		printf("%d ", Parity2[i]);
	}
	printf("]\n");

	getchar();

	return 0;
}

