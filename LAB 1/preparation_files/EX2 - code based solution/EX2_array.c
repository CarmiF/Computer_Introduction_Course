#include <stdio.h>
#define SIZE 8


int main(){

	int Arr1[SIZE] = { 21,80,99,49,18,81,77,13 }, Arr2[SIZE] = { 31,13,88,65,25,10,52,40 };
	int mod4_ID1[SIZE], mod4_ID2[SIZE];

	for (int i = 0; i < SIZE; i++) {
		if (Arr1[i] % 4)
			mod4_ID1[i] = -1;
		else 
			mod4_ID1[i] = 0;

		if (Arr2[i] % 4)
			mod4_ID2[i] = -1;
		else 
			mod4_ID2[i] = 0;
	}

	printf("[");
	for (int i = 0; i < SIZE; i++) {
		printf("%d ", mod4_ID1[i]);
	}
	printf("]\n");

	printf("[");
	for (int i = 0; i < SIZE; i++) {
		printf("%d ", mod4_ID2[i]);
	}
	printf("]\n");

	getchar();

	return 0;
}

