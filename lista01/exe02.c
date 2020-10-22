#include <stdio.h>
#include <stdlib.h>

struct ALUNO {
    int matricula;
    char nome[50];
    int dianasc;
    int mesnasc;
    int anonasc;
    float nota;
};	

typedef struct ALUNO alunos;

int main() {

	void preencherAlunos(alunos *v, int n);
	void imprimirAlunos(alunos *v, int n);
	void preencherRegistro(alunos *v, int n);
	void imprimirRegistro(alunos *v, int n);
	void alocarMemoria(alunos *v, int n);
	
	int n;
	printf("Digite o número de alunos a serem cadstrados: ");
	scanf("%d", &n);

	alunos *v;
	alocarMemoria(v, n);

	preencherAlunos(v, n);
	imprimirAlunos(v, n);

	preencherRegistro(v, n);
	imprimirRegistro(v, n);

	return 0;
}

void alocarMemoria(alunos *v, int n) {
	v = (alunos*) malloc(n * sizeof(alunos));
}

void preencherAlunos(alunos *v, int n) {

	for(int i = 0; i < n; i++) {
		printf("Digite o nome do seu %dº aluno: ", i+1);
		scanf("%s", v[i].nome);
	}

}

void imprimirAlunos(alunos *v, int n) {

	printf("\n");
	for(int i = 0; i < n; i++) {
		printf("Aluno[%d]: %s\n", i, v[i].nome);
	}

}

void preencherRegistro(alunos *v, int n) {

	for(int i = 0; i< n; i++){
		printf("\n\n-- Aluno > %s\n", v[i].nome);
		
        printf("Digite o seu numero de matricula: ");
        scanf("%d", &v[i].matricula);

        printf("Digite o dia do seu nascimento: ");
        scanf("%d", &v[i].dianasc);
        
        printf("Digite o mes do seu nascimento: ");
        scanf("%d", &v[i].mesnasc);
        
        printf("Digite o ano do seu nascimento: ");
        scanf("%d", &v[i].anonasc);

        printf ("Digite sua nota:");
        scanf("%f", &v[i].nota);
    }

}

void imprimirRegistro(alunos *v, int n){

    printf("\n");

	printf("-- Lista alunos --\n");	
	for(int i = 0; i < n; i++) {
		if(v[i].nota > 6) {
			printf("Aluno[%d]: %s\n", i, v[i].nome);
			printf("Matricula: %d\n", v[i].matricula);
       		printf("Nascimento: %d/%d/%d\n",  v[i].dianasc, v[i].mesnasc, v[i].anonasc);
       		printf("Nota: %.2f\n \n", v[i].nota);
		}
	}   

}
