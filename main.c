#include <stdio.h>
#include <stdlib.h>
#include <time.h>


#define MSJ_OPCIONES "Seleccione entre las siguientes operaciones:\n1-Suma\n2-Resta\n3-Multiplicacion\n4-Division\n5-Potencia\n6-Factorial\n7-Número Combinatorio\n8-Número Aleatorio\n"
#define MSJ_SUMA "Ingrese cantidad de elementos a sumar"
#define MSJ_ERROR "Opcion invalida"
#define MSJ_RESTA "Ingrese cantidad de elementos a restar"

/*=================================================================================
				PROTOTIPOS
=================================================================================*/

double suma( double x, double y);
double resta( double x, double y);
double division( double x, double y  );
double multiplicar( double x , double y );
double potencia( double numero , int potencia  );
long int factorial( long int x );
long int numeroCombinatorio( long int a , long int b   );
double numeroAleatoreo( long int inferior , long int superior  );


/*=================================================================================
				MAIN
=================================================================================*/

int main()
{
 int opcion;
 printf(MSJ_OPCIONES);
 scanf("%d",&opcion);

 switch(opcion)
 {
  case 1:
  /*suma (x,y);*/
  break;
  case 2:
  /*resta(x,y);*/
  break;
  case 3:
  /*multiplicar(x,y);*/
  break;
  case 4:
  /*division(x,y);*/
  break;
  case 5:
  /*potencia(x,y);*/
  break;
  case 6:
  /*factorial(x);*/
  break;
  case 7:
  /*numeroCombinatorio(x,y);*/
  break;
  case 8:
  /*numeroAleatoreo(x,y);*/
  break;
  default:
  /*printf(MSJ_ERROR);*/
  return 0;
 }

return 0;

}


/*=================================================================================
FUNCION SUMA: funcion que recibe como argumentos dos numeros de tipo double,
realiza la suma y retorna el resultado.
=================================================================================*/

double suma( double x, double y){

	return x + y ;

}


/*=================================================================================
FUNCION RESTA: funcion que recibe como argumentos dos numeros de tipo double,
realiza la resta y retorna el resultado.
=================================================================================*/

double resta( double x, double y){

	return x - y ;

}


/*=================================================================================
FUNCION DIVISION: funcion que recibe como argumentos dos numeros de tipo double,
realiza la division y retorna el resultado.
=================================================================================*/
double division( double x, double y  ){

	return x / y;

}

/*=================================================================================
FUNCION MULTIPLICACION: funcion que recibe como argumentos dos numeros de tipo double,
los multiplica  y retorna el resultado.
=================================================================================*/
double multiplicar( double x , double y ){

	return x * y ;

}

/*=================================================================================
FUNCION POTENCIA: funcion que recibe en su primer argumento un numero de tipo duble
al cual se le aplicara la potencia recibida en en segundo argumento de tipo entero.
=================================================================================*/
double potencia( double numero , int potencia  ){

	int i ;
	double producto= 1;


	if(!numero )
		return 0;


	if( potencia > 0  ){

		for(i=0 ; i < potencia; producto*=numero, i++  );
		return producto;

	}

	if( potencia < 0 ){

		for(i=potencia ; i < 0 ; producto*=numero, i++  );
		return 1/producto ;

	}

	return 1;

}

/*=================================================================================
FUNCION FACTORIAL: funcion que recibe en su primer argumento un numero de tipo
entero positivo y retorna su factorial. En caso de no poder realizar la operacion
retorna numero negativo.
=================================================================================*/
long int factorial( long int x ){

	int i;
	long int factorial=1;


	if( x < 0 )
		return -1;

	for( i=1 ; i <= x ; i++)
		factorial *= i;

	return factorial;
}


/*=================================================================================
FUNCION NUMERO COMBINATORIO: se recibe en el primer argumento el numero de elementos
(n) de un conjunto dado, y en el segundo los k elementos escogidos del mismo para
obtener las combinaciones posibles. En caso de no poder realizar la operacion
retorna numero negativo -1 .
=================================================================================*/
long int numeroCombinatorio( long int a , long int b   ){

	if( b > a)
		return -1;

	return factorial(a) / (factorial(b)*factorial(a-b)) ;

}


/*=================================================================================
FUNCION NUMERO ALEATOREO: recibe en su primer argumeno la cota inferior de un 
intervalo determinado y en el segundo la cota superior, retornando un valor
aleatoreo de tipo float  perteneciente al mismo.

Comentario: (rand()%(superior-inferior))+inferior determina la parte entera del
numero que sera retornado y (rand()/(double)RAND_MAX) determina la parte decimal
entre 0 y 1.     
=================================================================================*/
double numeroAleatoreo( long int inferior , long int superior  ){

        srand(time(NULL)); /*Inicializacion de semilla*/

        return (double)( (( rand()%(superior-inferior) ) + inferior) + rand()/(double)RAND_MAX );

}






