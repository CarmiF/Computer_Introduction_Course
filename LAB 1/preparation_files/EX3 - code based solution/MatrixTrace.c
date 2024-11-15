#include <stdio.h>
#define M 4  
#define N 4

int main(){

	int Matrix[M][N] = {{1, 2, 3, 4},{5, 6, 7, 8},{9, 10, 11, 12},{13, 14, 15, 16}};
	int Trace = 0;

	for (int i = 0; i < M; i++) {
		Trace += Matrix[i][i];
	}

	printf("Trace = %d \n", Trace);

	getchar();

	return 0;
}

