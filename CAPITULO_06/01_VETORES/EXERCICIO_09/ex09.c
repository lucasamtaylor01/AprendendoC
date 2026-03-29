#include <stdio.h>

int main(){
    int tam_vec = 10;
    int vec_a[tam_vec], vec_b[tam_vec], vec_c[tam_vec];
    int i;
    
    printf("VETOR A\n");
    for (i = 0; i < tam_vec; i++){
        printf("Insira um valor inteiro da posição %d para o vetor A: ", i);
        scanf("%d", &vec_a[i]);
    }
    
     printf("\nVETOR B\n");
    for (i = 0; i < tam_vec; i++){
        printf("Insira um valor inteiro da posição %d para o vetor B: ", i);
        scanf("%d", &vec_b[i]);
    }

    printf("\nVETOR C: ");
    for (i = 0; i < tam_vec; i++){
        vec_c[i] = vec_a[i] - vec_b[i];
    }

    printf("[");
    for (i = 0; i < tam_vec-1; i++){
        printf("%d, ", vec_c[i]);
    }

    printf("%d]\n", vec_c[tam_vec-1]);
    

    


       
    return 0;
}
