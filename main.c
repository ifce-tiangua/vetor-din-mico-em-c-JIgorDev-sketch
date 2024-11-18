#include <stdio.h>
#include <stdlib.h>

int main(){
	int *vetor, tamanho, i;
	
	scanf("%d", &tamanho);
	
	vetor = malloc(tamanho * sizeof(int));
	
	if(tamanho <= 0){
	   printf("[vazio]\n");
	   return 0;
    }
	
	else{
	for(i = 0; i < tamanho; i++)
	scanf("%d", &vetor[i]);
	
	printf("[");
	
	for(i = 0; i < tamanho - 1; i++){
	printf("%d, ", vetor[i]);
    }
    printf("%d]\n", vetor[i]);
   }
   
	free(vetor);
	
return 0;
}
