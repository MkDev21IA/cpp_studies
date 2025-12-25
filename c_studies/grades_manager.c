#include <stdio.h>
#include <string.h>
#include <ctype.h>

typedef struct {
    char nome[50];
    float nota1;
    float nota2;
} aluno;

void limpar_buffer() {
    int c;
    while ((c = getchar()) != '\n' && c != EOF) {
    }
}

int validar_nome(char* nome) {
    for (int i =0; nome[i] != '\0'; i++){
        if (!isalpha(nome[i]) && nome[i] != ' '){
            return 0;
        }
    }
    return 1;
}

void verificar_nome(char* nome) {
    int erro = 0;
    while (!erro) {
        if(scanf("%49s", nome) == 1){
            if (validar_nome(nome)){
                erro = 1;
                limpar_buffer();
            }
            else{
                printf("\nNome invalido! Use apenas letras. Digite novamente:");
                limpar_buffer();
            }
        }
        else {
            printf("\nOpcao Invalida, digite o nome novamente, por favor:");
            limpar_buffer();
        }
    }
}

float verificar_nota(){
    float nota;
    int erro = 0;
    while(!erro){
        if (scanf("%f", &nota) == 1 && nota >= 0.0 && nota <= 10.0){
                erro = 1;
                limpar_buffer();       
        }
        else {
            printf("\nOpcao Invalida, digite a nota novamente, por favor:");
            limpar_buffer();
        }
    }
    return nota;
}

void inserir_aluno(aluno* turma){
    for (int i = 0; i<3 ; i++){
        printf("\nInsira o nome do aluno %d:", i+1);
        verificar_nome(turma[i].nome);
        printf("\nDigite a nota 1 para o aluno %d:", i+1);
        turma[i].nota1 = verificar_nota();
        printf("\nDigite a nota 2 para o aluno %d:", i+1);
        turma[i].nota2 = verificar_nota();
    }
    printf("\nObrigado, alunos inseridos com sucesso!\n");
}

void limpar_dados(aluno* turma){
    for (int i =0; i<3; i++){
        memset(turma[i].nome, 0, sizeof(turma[i].nome));
        turma[i].nota1 = 0.0;
        turma[i].nota2= 0.0;
    }
}

void media_aluno(int i,aluno* turma) {
    float media = (turma[i].nota1 + turma[i].nota2)/2 ;
    printf("A media do aluno eh %.2f\n", media);
    if(media >= 7.0){
        printf("Ele esta aprovado!\n");
    }
    else{
        printf("Infelizmente ele esta reprovado. :(\n");
    }
}

void calcular_media(aluno* turma){
    char nome_aluno[50];
    limpar_buffer();
    printf("Qual nome do aluno que pretende ver a media? ");
    scanf("%49s", nome_aluno);
    for (int i =0; i<3; i++){
        if (strcmp(nome_aluno, turma[i].nome) == 0){
            media_aluno(i,turma);
            return;
        }
    }
 printf("Aluno nao encontrado, insira um aluno, ou tente novamente!\n");
}

void sair(void){
    printf("\nVolte Sempre!");
}
  
int menu()
{   
   int erro = 0;
   int opt;
   printf("Bem vindo ao Gerenciador de Notas Escolares!\n\nMENU\n\n1.Inserir Aluno\n2.Calcular Media\n3.Sair\n\nOpcao Desejada:");
    while (!erro)
    {
        if(scanf("%d",&opt) == 1 && opt>=1 && opt <=3){
            erro = 1;
        }
        else {
            printf("\nOpcao Invalida, digite novamente, por favor:");
            limpar_buffer();
        }
    }
    return opt;
}


void loop_principal(aluno* turma)
{
    while(1)
    {   
        int opcao = 0;
        opcao = menu();
        switch(opcao){
            case 1:
                inserir_aluno(turma);
                break;
            case 2:
                calcular_media(turma);
                break;
            case 3:
                sair();
                limpar_dados(turma);
                return;
                }
     }

}

int main() {
    aluno turma[3]; 
    loop_principal(turma);
    return 0;
}