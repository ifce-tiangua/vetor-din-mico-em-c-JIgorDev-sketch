#include <stdio.h>
#include <stdlib.h>

int main(){
	int *vetor, tamanho, i;
	
	scanf("%d", &tamanho);
	
	if(tamanho == 0){
	   printf("[vazio]\n");
	   return 0;
    }
	
	vetor = (int *)malloc(tamanho * sizeof(int));
	
	for(i = 0; i < tamanho; i++)
	scanf("%d", &vetor[i]);
	
	printf("[");
	
	for(i = 0; i < tamanho - 1; i++){
	printf("%d,", vetor[i]);
    }
    
    printf("%d]\n", vetor[i]);
	
	free(vetor);
	
return 0;
}
