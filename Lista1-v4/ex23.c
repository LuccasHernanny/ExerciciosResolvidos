/*23. Escreva um programa que recebe o primeiro nome de um aluno, o seu registro acadêmico,
o nome simples de uma matéria e três notas dessa matéria. No final o programa informa a
seguinte mensagem: “O Aluno <nome do aluno> Ra <ra> teve nota <nota1>, <nota2> e
<nota3> na matéria <nome da matéria> e sua nota final é: <média das notas>”.*/

#include <stdio.h>
#include <string.h>

int main(){
    char nome[10];
    char materia[10];
    int ra, nota1, nota2, nota3;

    printf("Informe o nome do aluno: ");
    gets(nome);
    printf("Informe a materia: ");
    gets(materia);
    printf("Informe o ra do aluno: ");
    scanf("%d", &ra);
    printf("Informe a 1a nota do aluno: ");
    scanf("%d", &nota1);
    printf("Informe a 2a nota do aluno: ");
    scanf("%d", &nota2);
    printf("Informe a 3a nota do aluno: ");
    scanf("%d", &nota3);

    printf("O aluno %s RA %d teve nota %d, %d e %d na materia %s e sua nota final foi: %d\n", nome, ra, nota1, nota2, nota3, materia, (nota1 + nota2 + nota3)/3);

    return 0;
}