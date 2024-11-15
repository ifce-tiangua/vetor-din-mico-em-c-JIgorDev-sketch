#include <stdio.h>
#include <stdlib.h>

int main(){
	int **vetor, tamanho, i;
	scanf("%d", &tamanho);
	
	if(tamanho == 0)
	printf("[Vazio]\n");
	
	
	
	vetor = (int **)malloc(tamanho * sizeof(int *));
	
	for(i = 0; i < tamanho; i++)
	scanf("%d", &vetor[i]);
	
	if(tamanho != 0){
	
	printf("[");
	
	for(i = 0; i < tamanho; i++)
	if(i < tamanho - 1)
	printf("%d,", vetor[i]);

    else
    printf("%d", vetor[i]);
    
	printf("]");
	
	printf("\n");
    }
	
	for(i = 0; i < tamanho; i++)
	free(vetor[i]);
	
	free(vetor);
	
return 0;
}
