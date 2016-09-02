//Universidade de Brasilia
//Aluno:João Henrique
//Matricula: 150132042
//Fundamentos de Sistemas Operacionais

#include <stdlib.h>
#include <string.h>
#include <stdio.h>

void manipulation(){

    double number1 = 7.3, number2;
    char s1[100], s2[100];

    //Topico one- Declare a variável dPtr como ponteiro para a variável do tipo double.
		double *dPtr;

    // Topic two - Carregue o endereço da variável number1 no ponteiro dPtr
		dPtr = &number1;
    //Topic tree - Imprima em tela o valor da variável apontada por dPtr partindo do ponteiro.
		printf("Value of dPtr: %lf\n", *dPtr);

	//Topic four -Carregue o valor da variável apontada por dPrt na variável number2 .
		number2 = *dPtr;
	//Topic five - Imprima o valor armazenado em number2.
    printf("Value of number2: %lf\n", number2);
  //Topic six - Imprima o endereço de number1 na tela.
    printf("Pointer to number1: %p\n", &number1);
  //Topic seven - Imprima o endereço armazenado em dPtr na tela .
    printf("Pointer to dPtr: %p\n", dPtr);

  // Topic eigth - Leia uma string e a armazene no array s1. Copie a string armazenada em s1 para
  // s2. Compare a string armazenada em s1 com a string armazenada em s2 e imprima
  // o resultado na tela.
    printf("Put a string: ");
    scanf("%s", s1);
    strcpy(s2, s1);
    int compare = strcmp(s1, s2);
    printf("Compare to s1 and s2: %d\n", compare);

  //Topic nine -Apense a string s2 à string s1. Imprima o resultado na tela.
    strcat(s1, s2);
    printf("Concat of s1 and s2: %s\n", s1);

  //Topic ten - Determine o comprimento da string armazenada em s1 e imprima o resultado na tela.
    int len = strlen(s1);
    printf("Len of |%s| is |%d|\n", s1, len);

}

int main(void){
    manipulation();
    return 0;
}
