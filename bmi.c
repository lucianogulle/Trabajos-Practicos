#include <stdio.h>

int main(void) {
	float peso = 0, altura = 0, indice = 0;
	
	printf("Ingrese su peso (kg): ");
	scanf("%f", &peso);
	
	printf("Ingrese su altura (m): ");
	scanf("%f", &altura);
	
	indice = peso / (altura * altura);
	
	printf("\nTu índice de masa corporal es: %.1f\n", indice);
	
	(altura <= 0 || indice <= 0) &&
		printf("Error: altura o índice no válido.\n");
	
	(indice > 0 && indice < 18.5) &&
		printf("Tu diagnóstico es: Peso bajo\n");
	
	(indice >= 18.5 && indice < 25.0) &&
		printf("Tu diagnóstico es: Peso normal\n");
	
	(indice >= 25.0 && indice < 30.0) &&
		printf("Tu diagnóstico es: Sobrepeso\n");
	
	(indice >= 30.0 && indice < 35.0) &&
		printf("Tu diagnóstico es: Obesidad grado I\n");
	
	(indice >= 35.0 && indice < 40.0) &&
		printf("Tu diagnóstico es: Obesidad grado II\n");
	
	(indice >= 40.0) &&
		printf("Tu diagnóstico es: Obesidad grado III (mórbida)\n");
	
	printf("\n\nIMC (kg/m²)        Clasificación\n\n");
	printf("Menor a 18.5       Peso Bajo\n");
	printf("18.5 - 24.9        Peso normal\n");
	printf("25.0 - 29.9        Sobrepeso\n");
	printf("30.0 - 34.9        Obesidad grado I \n");
	printf("35.0 - 39.9        Obesidad grado II\n");
	printf("40.0 o más         Obesidad grado III (mórbida)\n");
	
	printf("\nPresiona Enter para salir...");
	getchar(); // Captura el Enter pendiente del scanf
	getchar(); // Espera el Enter del usuario
	
	return 0;
}
