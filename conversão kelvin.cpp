#include <stdio.h>

float celsiusParaFahrenheit(float c);
float fahrenheitParaCelsius(float f);
float celsiusParaKelvin(float k);

int main(){
	
	int op;
	float tf, tc, tk;
	
	printf("Conversor de temperatura\n");
	printf("Escolha uma opcao: \n");
	printf("1 - Celsius para Fahrenheit\n");
	printf("2 - Fahrenheit para Celsius\n");
	printf("3 - Celsius para kelvin\n");
	scanf("%d", &op);
	
	printf("Digite o valor da temperatura ");
	if(op == 1){
		printf(" em Celsius: ");
		scanf("%f", &tc);
		tf = celsiusParaFahrenheit(tc);
	}else if(op == 2){
		printf(" em Fahrenheit: ");
		scanf("%f", &tf);
		tc = fahrenheitParaCelsius(tf);
	}else {
		printf(" em Celsius: ");
		scanf("%f", &tc);
		tk = celsiusParaKelvin(tc);
	}
	printf("Temperatura em Celsius: %.2f ºC \n", tc);
	printf("Temperatura em Fahrenheit: %.2f ºF \n", tf);
	printf("Temperatura em Kelvin: %.2f ºK \n", tk);
	
	return 0;
}
float celsiusParaFahrenheit(float c){
	return  c * 1.8 + 32;
}
float fahrenheitParaCelsius(float f){
	return (f - 32)/1.8;
}
float celsiusParaKelvin(float c){
	return c + 273.15;
}
