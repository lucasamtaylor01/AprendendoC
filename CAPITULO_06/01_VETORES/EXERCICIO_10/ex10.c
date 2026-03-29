#include <stdint.h>
#include <stdio.h>

int main(){
    int tam_vec = 0;
    int i;

    while (tam_vec <= 0 || tam_vec > 20){
        printf("Defina o tamanho do vetor: ");
        scanf("%d", &tam_vec);

        if (tam_vec <= 0 || tam_vec > 20){
            printf("Valor inválido. Defina o tamanho do vetor entre 1 e 20.\n");
        }
    }
    
    float vec_a[tam_vec], vec_b[tam_vec];
    
    for (i = 0; i < tam_vec; i++){
        printf("Insira um valor para a posição %d: ", i);
        scanf("%f", &vec_a[i]);
    }

     for (i = 0; i < tam_vec; i++){
        vec_b[i] = vec_a[i]*vec_a[i];
    }   
    
     printf("\nVETOR ORIGINAL: [");
     for (i = 0; i < tam_vec-1; i++){
        printf("%.2f, ", vec_a[i]);
    }

     printf("%.2f]\n", vec_a[tam_vec-1]);
     
     printf("\nNOVO VETOR: [");
     for (i = 0; i < tam_vec-1; i++){
        printf("%.2f, ", vec_b[i]);
    }

     printf("%.2f]\n", vec_b[tam_vec-1]);


    
    return 0;
}
