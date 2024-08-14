#include<stdio.h>

int soma(int numero1,int numero2){
    int resultado;

    resultado = numero1 + numero2;

return resultado;    
}
int sub(int numero1, int numero2){
    int resultado;

    resultado = numero1 - numero2;

return resultado;
}

int mult(int numero1, int numero2){
    int resultado;

    resultado = numero1 * numero2;

return resultado;
}
int div(int numero1, int numero2){
    int resultado;

    resultado = numero1 / numero2;

return resultado;    
}
int main(){
    int num1, num2;
    int resultado1;
    int resultado2;
    int resultado3;
    int resultado4;

    printf("Digite o numero 1 e 2: ");
    scanf("%d %d", &num1, &num2);

    resultado1 = soma(num1, num2);

    resultado2 = sub(num1, num2);

    resultado3 = mult(num1, num2);

    resultado4 = div(num1,num2);

    printf("o resultado da soma destes numeros e = %d " , resultado1 );



    printf("\na subtraçao destes resultados e = %d  ", resultado2);

    printf("\na mumtiplicacao destes numeros e = %d ", resultado3);

    printf("\na divisao e = %d", resultado4);

    
}