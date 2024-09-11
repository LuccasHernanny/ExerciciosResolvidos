/*16. Calcular a média final dos alunos da 3 a Série. Os alunos realizarão quatro provas: P1, P2,
P3 e P4. A nota final NF é calculada pela média aritmética das provas. Se a nota final do
aluno for maior ou igual a 6.0 o aluno está aprovado. Caso contrário, permita ao aluno
fazer uma prova extra PE. A nova nota será a média da nota final com a prova extra. Exiba
se o aluno está aprovado ou reprovado após realizar a PE.*/

#include <stdio.h>

int main(){
    int p1, p2, p3, p4, media_final, pe;

    printf("Informe a nota da P1: ");
    scanf("%d", &p1);
    printf("Informe a nota da P2: ");
    scanf("%d", &p2);
    printf("Informe a nota da P3: ");
    scanf("%d", &p3);
    printf("Informe a nota da P4: ");
    scanf("%d", &p4);

    media_final = (p1+ p2 + p3 + p4)/4;

    if (media_final < 6){
        printf("Informe a nota da PE: ");
        scanf("%d", &pe);
        media_final = (media_final + pe)/2;
        if(media_final < 6){
            printf("Aluno reprovado(a)!\n");
            return 0;
        }
    }
    printf("Aluno aprovado(a)!\n");
    return 0;
}