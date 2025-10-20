#include <stdio.h>

void linha();

int main(void)
{

    printf("Trabalho de Algoritmo\n");
    printf("Arthur Moraes, Breno Bortolleto, Guilherme Gil, Nicolas Liborio\n");


    linha();


    int esc;

    do
    {

        printf("Quantos alunos deseja cadastrar? (maximo 50): ");
        scanf("%d", &esc);

        linha();
        
    } while (esc < 1 || esc > 50);

    
    char nome[50][51];
    float nota[150];
    float soma[50];
    float media[50];


    for (int i = 0; i < esc; i++)
    {

        printf("Aluno %d\n", i + 1);
        printf("Nome : ");
        scanf("%s", nome[i]);

        linha();

        for (int j = 0; j < 3; j++)
        {

            printf("Nota: ");
            scanf("%f", &nota[i * 3 + j]);
            linha();

        }

        soma[i] = nota[i * 3] + nota[i * 3 + 1] + nota[i * 3 + 2];
        media[i] = soma[i] / 3;
            
    }


    for (int i = 0; i < esc; i++)
    {
        if (media[i] >= 6)
         {
            printf("%s -- Media: %f -- Aprovado\n", nome[i], media[i]);
            linha();
        }else{
            printf("%s -- Media: %f -- Reprovado\n", nome[i], media[i]);
            linha();
        }
    }


    float maior = media[0];
    float menor = media[0];
    int Manome;
    int Menome;

    for (int i = 0; i < esc; i++)
    {
        if (maior < media[i])
        {
            maior = media[i];
            Manome = i;
        }
        if (menor > media[i])
        {
            menor = media[i];
            Menome = i;
        }
            
    }

    printf("A maior media eh do %s\n", nome[Manome]);
    printf("A menor media eh do %s\n", nome[Menome]);

    linha();

    printf("Pressione Enter para sair...");
    getchar();
    getchar();
    return 0;

}

void linha()
{
    //Pula linha
    printf("\n");
}
