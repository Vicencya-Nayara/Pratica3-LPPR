#include <stdio.h>

float celsiusParaFahrenheite(float c);
float fahrenheiteParaCelsius(float f);
float celsiusParaKelvin(float k);

int main(){
	
	int op;
	float tf, tc, tk;
	
	printf("Conversor de temperatura\n");
	printf("Escolha uma opcao: \n");
	printf("1 - Celsius para Fahrenheite\n");
	printf("2 - Fahrenheite para Celsius\n");
	printf("3 - Celsius para kelvin\n");
	scanf("%d", &op);
	printf("Digite o valor da temperatura ");
	if(op == 1){
		printf(" em Celsius: ");
		scanf("%f", &tc);
		tf = celsiusParaFahrenheite(tc);
	}else if(op == 2){
		printf(" em Fahrenheite: ");
		scanf("%f", &tf);
	}else {
		printf(" em Kelvin: ");
		scanf("%f", &tk);
		tk = celsiusParaKelvin(tc);
	}
	printf("Temperatura em Celsius: %.2f C\n", tc);
	printf("Temperatura em Fahrenheite: %.2f C\n", tf);
	printf("Temperatura em Lelvin: %.2f C\n", tk);
}
float celsiusParaFahrenheite(float c){
	return  c*1.8+32;
}
float fahrenheiteParaCelsius(float f){
	return (f - 32)/1.8;
}
float celsiusParaKelvin(float k){
	return k + 273.15;
}
