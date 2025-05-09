#include <stdio.h>

int main(void) {
	
	float peso=0, altura=0;
	
	printf("Ingrese su peso(kg): ");
	scanf("%f", &peso);
	
	printf("\nIngrese su altura(mt): ");
	scanf("%f", &altura);
    	float indice = peso/(altura*altura);
	
	if(altura>0){
		
	if(indice<18.5 && indice>0){
		printf("\nTu indice de masa es: %.1f\n", indice);
		printf("Tu diagnostico es: Peso bajo\n");
	}
	else if(indice>=18.5 && indice<25){
		printf("\nTu indice de masa es: %.1f\n", indice);
		printf("Tu diagnostico es: Peso normal\n");
	}
	else if(indice>=25.0 && indice<30){
		printf("\nTu indice de masa es: %.1f\n", indice);
		printf("Tu diagnostico es: Sobrepeso\n");
	}	
	else if(indice>=30.0 && indice<35){
		printf("\nTu indice de masa es: %.1f\n", indice);
		printf("Tu diagnostico es: Obesidad grado I\n");
	}	
	else if(indice>=35.0 && indice<40){
		printf("\nTu indice de masa es: %.1f\n", indice);
		printf("Tu diagnostico es: Obesidad grado II\n");
	}
	else if(indice>=40.0){
		printf("\nTu indice de masa es: %.1f\n", indice);
		printf("Tu diagnostico es: Obesidad grado III (mórbida)\n");
	}
	else{
		printf("\nTu indice de masa es: incorrecto(indice negativo o cero)\n");
	}
	}
	else{
		printf("\nLa altura que ingresaste genera un error en la formula de IMC.\nPor favor intenta de nuevo\n");
	}
	
	printf("\n\nIMC (kg/m²)        Clasificación\n\n");
	printf("Menor a 18.5       Peso Bajo\n");
	printf("18.5 - 24.9        Peso normal\n");
	printf("25.0 - 29.9        Sobrepeso\n");
	printf("30.0 - 34.9        Obesidad grado I \n");
	printf("35.0 - 39.9        Obesidad grado II\n");
	printf("40.0 o más         Obesidad grado III (mórbida)\n");
	
    printf("\nPresiona Enter para salir...");
    getchar();  
    
    
    return 0;
}
