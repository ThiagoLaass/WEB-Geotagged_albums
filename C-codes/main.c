#include<stdio.h>
#include<stdlib.h>


int main(int argc, char const *argv[])
{   
    char a[]="aluno";
    printf("Informe o nome do aluno\n");
    scanf("%s", &a);

    int n;
    printf("Informe a nota do aluno\n");
    scanf("%d", &n);
    
    int nota = n;
    return (nota < 60) ? printf("O aluno %s foi reprovado.", a) : printf("O aluno %s foi aprovado.", a);

}



