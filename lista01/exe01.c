#include <stdio.h>
#include <stdlib.h>

int main() {

	int l, c;

	printf("Digite o número de linhas: ");
	scanf("%d", &l);

	printf("Digite o número de colunas: ");
	scanf("%d", &c);

	int *v = (int*) malloc(l * c * sizeof(int));
	int **m = (int**) malloc(l * sizeof(int));

	for(int i = 0; i < l; i++) {
		m[i] = (int*) malloc(c * sizeof(int));
	}

	//Fill vector
	for(int i = 0; i < l*c; i++) {
		printf("Digite o num. da posição [%d]: ", i);
		scanf("%d", &v[i]);
	}

	printf("\nVetor:\n");
	for(int i = 0; i < l*c; i++) {
		printf("V[%d]: %d\n", i, v[i]);
	}
	printf("\n");

	int h = 0;
	//Fill matrix
	for(int i = 0; i < l; i++) {
		for(int j = 0; j < c; j++) {
			m[i][j] = v[h];
			h++;
		}
	}

	printf("\nMatriz:\n");
	for(int i = 0; i < l; i++) {
		for(int j = 0; j < c; j++) {
			printf("%d ", m[i][j]);
		}
		printf("\n");
	}

	return 0;
}
