#include <stdio.h>
#include <stdlib.h>



//calcule dois numeros, atividade numero 2
/*
int main()
 {
	int num1 ,num2 ,soma;
	
	printf("digite um valor: ");
	scanf("%d", &num1);
	
	printf("digite um valor: ");
	scanf("%d", &num2);
	
	soma = num1+num2;
	printf("A soma total e: %d\n",soma);

	
	
	return 0;
}
*/

//atividade numero 3 se sao iguais
/*int main()
{
	int num1 ,num2;
	printf("digite seu numero:");
	scanf("%d", &num1);
	
	printf("digite o segundo numero:");
	scanf("%d", &num2);
	
	if (num1==num2) {
		printf("\n seus numeros sao iguais.\n");
	}else if (num1<num2){
		printf("\n%d e menor que %d.\n", num1, num2);
	}else if (num1>num2){
		printf("\n%d e maior que %d.\n", num1, num2);
	}
	
	
	
	return 0;
}
*/

//atividade 4 maiores ou iguais a 10
/*
int main() {
    int numero;

    printf("Insira um numero inteiro: ");
    scanf("%d", &numero);

    if (numero >= 10) {
        printf("O numero inserido e maior ou igual a 10.\n");
    } else {
        printf("O numero inserido e menor que 10.\n");
    }

    return 0;
}
*/

//atividade 5 caucular a media 
/*

int main() {
    float n1, n2, media;

    printf("Digite o primeiro numero: ");
    scanf("%f", &n1);

    printf("Digite o segundo numero: ");
    scanf("%f", &n2);

    media = (n1 + n2) / 2;

    printf("A media dos dois numeros e: %.2f\n", media);

    return 0;
}
*/

//atividade 6 area do triangulo 
/*
int main() {
    float base, altura, area;

    printf("Digite o valor da base do triangulo: ");
    scanf("%f", &base);

    printf("Digite o valor da altura do triangulo: ");
    scanf("%f", &altura);

    area = (base * altura) / 2;

    printf("A area do triangulo e: %.2f\n", area);

    return 0;
}
*/

//atividade 7 fahrenheit 

int main() {
    float celsius, fahrenheit;

    printf("Digite a temperatura em graus Celsius: ");
    scanf("%f", &celsius);

    fahrenheit = celsius * 1.8 + 32;

    printf("A temperatura em Fahrenheit e: %.2fF\n", fahrenheit);

    return 0;
}

