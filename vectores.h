// Funciones generales
#include<stdio.h>
#include<math.h>

void Presentacion (void); // Función de presentación.
char Repeticion (void); // Función para volver a ejecutar el programa, o no.
void LimpiarBufer (void); // Función que evita usar 'fflush' para limpiar el bufer de teclado.
void Cerrar (void); // Función que retiene la consola sin usar 'system ("pause")'.

void Presentacion(void)
{
	puts ("¡Bienvenido a la calculadora de vectores!");
	puts ("\n");
	
}
char Repeticion (void)
{
	char tecla;
	puts ("\n\n\250Desea volver a ejecutar el programa?");
	scanf ("%c", &tecla);
	LimpiarBufer ();
	return tecla;
}
void LimpiarBufer (void)
{
	char c;
	while((c = getchar())!= EOF && c!= '\n');
}
void Cerrar (void)
{
	puts ("\n\nPulse \256retorno de carro\257 para cerrar la ventana...");
	getchar ();
}

// Funciones básicas para el manejo de vectores
void PedirVector (float *v, int dim);
void PresentarVector (float *v, int dim);
void PresentarCadena (char *v, int dim);


void PedirVector (float *v, int dim)
{
	int i;
	for (i = 0; i < dim; i++)
        {
        	printf ("\n\tIndique la componente %d del vector:   ", i + 1);
        	scanf ("%f", &v [i]);
        	LimpiarBufer ();
		}
}
void PresentarVector (float *v, int dim)
{
	int i;
	for (i = 0; i < dim; i++)
        {
        	printf ("%g\t", v [i]);
		}
}

void PresentarCadena (char *v, int dim)
{
	int i;
	for (i = 0; i < dim; i++)
        {
        	printf ("%c\t", v [i]);
		}
}

// Duplicar un vector (procedimiento)
void CopiarVector (float *v,int dim, float *w){

	int i;
	for (i = 0; i < dim; i++)
       	{
       		w [i] = v [i];
		}
	}
// Se copia en 'vector2' el 'vector1'

// Funciones con vectores. Ejemplo 1: Producto escalar
void EscalarPorVector (float *v, int dim, float escalar)
{
	int i;
	for (i = 0; i < dim; i++)
        {
        	v [i] = escalar * v [i];
		}
}

// Funciones con vectores. Ejemplo 2: Suma de 2 vectores
void Sumar2Vectores (float *v, float *w, int dim)
{
	int i;
	for (i = 0; i < dim; i++)
        {
        	v [i] = v [i] + w [i];
		}
}
void Restar2Vectores (float *v, float *w, int dim)
{
	int i;
	for (i = 0; i < dim; i++)
        {
        	v [i] = v [i] - w [i];
		}
}
// Etc.
//ProductoEscalar (...)
//ModuloVector (...)
float producto_escalar(float *v, float *w, int dim)
{
	float res = 0;
	int i;
	for (i=0; i < dim; i++) {
		res += v[i] * w[i];
	}
	printf("El producto escalar es: %f", res);
	return res;
}

float ModuloVector(float *v, int dim)
{
	float res = 0;
	float mod = 0;
	int i;
	for(i=0; i<dim; i++){
		res+= v[i]*v[i];
	}
	mod = sqrt(res);
	printf("El modulo del vector es: %f", mod);
	return mod;
}

void CombinacionLineal(float *v, float *w, int dim, float a, float b){

	int i;
	for (i = 0; i < dim; i++)
        {
        	v [i] = a * v [i];
		}
	int j;
	for (j = 0; j < dim; j++)
        {
        	w[j] = b * w [j];
		}
	int k;
	for (k = 0; k < dim; k++)
        {
        	v [k] = v [k] + w [k];
		}
}
