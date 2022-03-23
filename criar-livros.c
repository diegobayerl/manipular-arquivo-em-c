#include <stdio.h>
#include <stdlib.h>

int main(){
    // criando variavel de dados 
    char nome[50];
    float preco;
    //variavel de controle
    int controle = 1;
    
    //variavel arquivo
    FILE *arquivo;
    
    //abrir arquivo
    arquivo = fopen("livros.txt", "w");
    
    //verificar se abriu
    if(arquivo == NULL){
        printf("Erro ao abrir");
        return 0;
    }
    
    while(1){
        //escolha para adicionar ou tirar 
        printf(" 1 - adicionar um livro novo \n");
        printf(" 0 - encerrar programa \n");
        scanf("%d", &controle);
        
        if(controle == 1){
            
            //recolher nome e preco
            printf("Cadastre um novo livro \n");
            printf("Digite o nome do livro \n");
            scanf("%s", nome);
            
            printf("Qual preco do livro \n");
            scanf("%f", &preco);
            
            //gravar no arquivo 
            fprintf(arquivo, "%s \n", nome);
            fprintf(arquivo, "%f \n", preco);
            
        } else if(controle == 0){
            //parar se zero
            printf("Encerrando programa..... \n");
            break;
        } else {
            //erro no código
            printf("codigo invalido");
        }
    }
    
    fclose(arquivo);
    return 0;
}
