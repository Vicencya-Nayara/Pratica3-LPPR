#include <stdio.h>

float celsiusParaFahrenheite(float c);
float fahrenheiteParaCelsius(float f);

int main(){
	
	int op;
	float tf, tc;
	
	printf("Conversor de temperatura\n");
	printf("Escolha uma opcao: \n");
	printf("1 - Celsius para Fahrenheite\n");
	printf("2 - Fahrenheite para Celsius\n");
	scanf("%d", &op);
	printf("Digite o valor da temperatura ");
	if(op == 1){
		printf(" em Celsius: ");
		scanf("%f", &tc);
		tf = celsiusParaFahrenheite(tc);
	}else {
		printf(" em Fahrenheite: ");
		scanf("%f", &tf);
		tc = fahrenheiteParaCelsius(tf);
	}
	printf("Temperatura em Celsius: %.2f C\n", tc);
	printf("Temperatura em Fahrenheite: %.2f C\n", tf);
}
float celsiusParaFahrenheite(float c){
	return  c*1.8+32;
}
float fahrenheiteParaCelsius(float f){
	return (f - 32)/1.8;
}

