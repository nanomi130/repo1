#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) 
{
	int op1, op2, opc,resultado;
	
	{
	 printf("calculadora");
	 printf("1.-suma");
	 printf("2.-resta");
	 prinft("3.-multiplicacion");
	 prinft("4-.division");
	 prnft("5.-raiz cuadrada");
	 scan("%i", &opc);
	
	 prinft("primer operador: ");
	 scanft("%i", &op1);
	 prinft("segundo operador: ");
	 scanft("%i", &op2);
	}
	switch(opc){
	 
	 case 1:
	      resultado=op1+op2;
	      prinf("el resultado de la suma es %i",resultado);
	      break;
	 case 2:
	 	  resultado= op1-op2;
	 	  prinf("el resultado de la resta es %i",resultado);
	 	  break;
     case 3:
	      resultado=op1*op2;
		  prinf("el resultado de la multiplicacion es &i",resultado);
		  break;
	 case 4:
	      resultado=op1/op2;
		  prinf("el resultado de la division es &i",resultado);
	 
	}
return 0;


	

