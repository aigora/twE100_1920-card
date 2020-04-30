// Calculadora, versión 3a. Primera Prueba de Clase.
// Daniel Zamarra Rodriguez Nºmatricula: 55521.
// 22 de abril de 2020

#include <stdio.h>
//#include <stdlib.h> // sytem("pause")
//definicion del tipo complejo
typedef struct
{
	float preal;
	float pimag;
} Tcomplejo;
// Funciones (declaración)
void FPresentacion (void);
char FEleccion (void);
char eleccion2 (void);
char FRepetir (void);
void FCierre (void);
void FOperandos (float *num1, float *num2);
void FSuma (float num1, float num2);
void FResta (float num1, float num2);
void FMultiplicar (float num1, float num2);
void FDividir (float num1, float num2);


void FOperandosC (Tcomplejo *num1, Tcomplejo *num2);
void cocientecomplejo(Tcomplejo num1, Tcomplejo num2);
void sumacompleja(Tcomplejo num1, Tcomplejo num2);
void restacompleja(Tcomplejo num1, Tcomplejo num2);
void productocomplejo(Tcomplejo num1, Tcomplejo num2);
int main ()
{
	// Presentación:
	FPresentacion ();
	
	// Variables
	float x, y;
	Tcomplejo a, b;	
	char opcion;
	char opcion2;
	Tcomplejo k;
	
	// Protocolo de repetición
	do {
		// Proceso
		// La elección:
		opcion2 = eleccion2();
		//if (opcion2 == 'R'|| opcion2=='r'){
		
		opcion = FEleccion ();
//	}
	
		switch(opcion2){
			
			
			case 'R':
			case 'r':
				switch (opcion)
				{
					case 'A':
					case 'a':
						// Suma:
						// Petición de datos:
						FOperandos (&x, &y);
						
						// Las cuentas:
						FSuma (x, y);
						
						break;
						
					case 'B':
					case 'b':
						// Resta:
						// Petición de datos:
						FOperandos (&x, &y);
						
						// Las cuentas:
						FResta (x, y);
						
						break;
						
					case 'C':
					case 'c':
						// Producto:
						// Petición de datos:
						FOperandos (&x, &y);
						
						// Las cuentas:
						FMultiplicar (x, y);
						
						break;
						
					case 'D':
					case 'd':
						// División:
						// Petición de datos:
						FOperandos (&x, &y);
						
						// Las cuentas:
						FDividir (x, y);
						
						break;
						
					default:
						puts ("Elecci\242n err\242nea...");
				}
				break;
			case 'C':
			case 'c':
				
				switch(opcion) {
					case 'A':
					case 'a':
						// Suma:
						// Petición de datos:
						FOperandosC (&a, &b);
						
						// Las cuentas:
						sumacompleja (a, b);
						
						break;
						
					case 'B':
					case 'b':
						// Resta:
						// Petición de datos:
						FOperandosC (&a, &b);
						
						// Las cuentas:
						restacompleja (a, b);
						
						break;
						
					case 'C':
					case 'c':
						// Producto:
						// Petición de datos:
						FOperandosC (&a, &b);
						
						// Las cuentas:
						productocomplejo (a, b);
						
						break;
						
					case 'D':
					case 'd':
						// División:
						// Petición de datos:
						FOperandosC (&a, &b);
						
						// Las cuentas:
						cocientecomplejo (a, b);
						
						break;
						
					default:
						puts ("Elecci\242n err\242nea...");
				}
					

					
				
}

	
	// Repetición
	opcion = FRepetir ();
		
		}while ((opcion == 's')  || (opcion == 'S'));

	// Despedida y cierre:
	FCierre ();
	
	return 123;
}

// Funciones:
void FPresentacion (void)
{
	puts ("Este programa simula una calculadora.");
	puts ("Por AZB. Febrero de 2020\n");
}

char FEleccion (void)
{
	char letra;
	puts ("Elija la operaci\242n que realizar:");
	puts ("A. Suma");
	puts ("B. Resta");
	puts ("C. Multiplicaci\242n");
	puts ("D. Divisi\242n\n");
	scanf ("%c", &letra);
	fflush (stdin);
	
	return letra;
}
char eleccion2 (void)
{
	char elec;
	puts ("De que tipo quieres realizar las operaciones:");
	puts ("R. Numeros reales");
	puts ("C. Numeros complejos");

	scanf ("%c", &elec);
	fflush (stdin);
	
	return elec;
}

void FOperandos (float *num1, float *num2)
{
	printf ("\nIndique el primer operando: ");
	scanf ("%f", num1);
	fflush (stdin);
	printf ("\nIndique el segundo operando: ");
	scanf ("%f", num2);
	fflush (stdin);
}

void FSuma (float num1, float num2)
{
	float z;
	z = num1 + num2; 
	// Reultados:
	printf ("\n%f + %f = %f\n", num1, num2, z);
}

void FResta (float num1, float num2)
{
	float z;
	z = num1 - num2; 
	// Reultados:
	printf ("\n%f - %f = %f\n", num1, num2, z);
}

void FMultiplicar (float num1, float num2)
{
	float z;
	z = num1 * num2; 
	// Reultados:
	printf ("\n%f * %f = %f\n", num1, num2, z);
}

void FDividir (float num1, float num2)
{
	float z;
	if (num2 == 0) printf ("\nNo es posible dividir por CERO.\n");
	else {
		z = num1 / num2;
		// Resultados:
		printf ("\n%f / %f = %f\n", num1, num2, z);
		}
}

char FRepetir (void)
{
	char letra;
	printf ("\n\250Desea realizar otra operaci\242n?:   ");
	scanf ("%c", &letra);
	fflush (stdin);
	
	return letra;
}

void FCierre (void)
{
	
//	char c;
	puts ("\n\nPulse \256retorno de carro\257 para cerrar la ventana...");
//	c = getchar ();
	getchar ();
}

float PedirFloat (void)
{
	float num;
	scanf ("%f", &num);
   	fflush (stdin);
	return num;
}

Tcomplejo PedirComplejo (void)
{
Tcomplejo num;
	printf ("\nIndique las componentes del n\243mero complejo:");
    printf ("\n\tParte real:   ");
	num.preal = PedirFloat ();
    printf ("\n\tParte imaginaria:   ");
	num.pimag = PedirFloat ();
	return num;
}

void ImprimirComplejo (Tcomplejo num)
{
	printf ("\n\nEl n\243mero complejo introducido es: %g%+gi\n", num.preal, num.pimag);
}

void FOperandosC (Tcomplejo *num1, Tcomplejo *num2)
{
		printf ("\nIndique las componentes del primer n\243mero complejo:     ");
		printf ("\n\tParte real del primer n\243mero:   ");
		scanf ("%f", &num1->preal);
		fflush (stdin);
		
		printf ("\n\tParte imaginaria del primer n\243mero: ");
		scanf ("%f", &num1->pimag);
		fflush (stdin);
		
		printf ("\nIndique las componentes del segundo n\243mero complejo:    ");
		printf ("\n\tParte real del segundo n\243mero:   ");
		scanf ("%f", &num2->preal);
		fflush (stdin);
		
		printf ("\n\tParte imaginaria del segundo n\243mero:   ");
		scanf ("%f", &num2->pimag);
		fflush (stdin);
}
void sumacompleja(Tcomplejo num1, Tcomplejo num2)
{
	
	float resreal;
		resreal = num1.preal + num2.preal;
		
		float resimag;
		resimag= num1.pimag + num2.pimag;
		
		// Reultados:
	if (resimag<0){
			printf ("\n El resultado es: %g %-gi\n", resreal, resimag);	
		}else{
		
		printf ("\n El resultado es: %g %+gi\n", resreal, resimag);
	}
}
void restacompleja(Tcomplejo num1, Tcomplejo num2)
{
	
	float resreal;
		resreal = num1.preal - num2.preal;
		
		float resimag;
		resimag= num1.pimag - num2.pimag;
		
		// Reultados:
		if (resimag<0){
			printf ("\n El resultado es: %g %-gi\n", resreal, resimag);	
		}else{
		
		printf ("\n El resultado es: %g %+gi\n", resreal, resimag);
	}
}
void productocomplejo(Tcomplejo num1, Tcomplejo num2)
{
	
	//(a + bi)*(c + di) = (ac-bd) + (ad+bc)i
	
	float resreal;
		resreal = (num1.preal * num2.preal)-(num1.pimag*num2.pimag);
		
		float resimag;
		resimag= (num1.preal * num2.pimag)+(num1.pimag*num2.preal);
		
		// Reultados:
		if (resimag<0){
			printf ("\n El resultado es: %g %-gi\n", resreal, resimag);	
		}else{
		
		printf ("\n El resultado es: %g %+gi\n", resreal, resimag);
	}
}
void cocientecomplejo(Tcomplejo num1, Tcomplejo num2)
{
	
	float  w;
	w= num2.preal + num2.pimag;
	
	if (w == 0) printf ("\nNo es posible dividir por CERO, pruebe con otro n\243mero\n");
	else {
		
		float resreal;
	    resreal = ((num1.preal * num2.preal) + (num1.pimag * num2.pimag)) / (pow(num2.preal,2) + pow(num2.pimag,2));
		
		float resimag;
		resimag = ((num1.pimag * num2.preal) - (num1.preal * num2.pimag)) / (pow(num2.preal,2) + pow(num2.pimag,2));
	
		// Resultados:
		if (resimag<0){
			printf ("\n El resultado es: %g %-gi\n", resreal, resimag);	
		}else{
		
		printf ("\n El resultado es: %g %+gi\n", resreal, resimag);
	}
		}
	}

















