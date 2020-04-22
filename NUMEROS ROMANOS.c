/*
cambiar un numero a numeros romanos
*/

#include <iostream>
 using namespace std;
 
 int main(){
 	
 	int num,unidades,decenas,centenas,millar;
 	
 	cout<<"Introduzca un numero menor de 4000: "; cin>>num;
 	
 	//si por ejemplo tenemos el 2152
 	
 	unidades = num%10; num /= 10; 
	 //al quedarnos con el resto de dividir entre 10 nos quedamos con el 2 y el numero se queda como 215
 	decenas = num%10; num/= 10;
 	 //al dividir de nuevo entre 10 nos quedamos con el resto y el numero se queda como 21
 	centenas = num%10; num/= 10;
 	 //al volver a dividir entre el resto es 1 y el numero queda como un 2
 	millar = num%10; num/=10;
 	 //al dividir de nuevo por 10 el resto es 2 y el numero queda como un 0
 	 
 	 switch(millar){
 	 	case 1: cout<<"M"; break;
 	 	case 2: cout<<"MM"; break;
 	 	case 3: cout<<"MMM"; break;
 	 	
	  }
 	 switch(centenas){
 	 	case 1: cout<<"C"; break;
 	 	case 2: cout<<"CC"; break;
 	 	case 3: cout<<"CCC"; break;
 	 	case 4: cout<<"CD"; break;
 	 	case 5: cout<<"D"; break;
 	 	case 6: cout<<"DC"; break;
 	 	case 7: cout<<"DCC"; break;
 	 	case 8: cout<<"DCCC"; break;
 	 	case 9: cout<<"CM"; break;
	  }
	 switch(decenas){
 	 	case 1: cout<<"X"; break;
 	 	case 2: cout<<"XX"; break;
 	 	case 3: cout<<"XXX"; break;
 	 	case 4: cout<<"XL"; break;
 	 	case 5: cout<<"L"; break;
 	 	case 6: cout<<"LX"; break;
 	 	case 7: cout<<"LXX"; break;
 	 	case 8: cout<<"LXXX"; break;
 	 	case 9: cout<<"XC"; break;
	  }
	 switch(unidades){
 	 	case 1: cout<<"I"; break;
 	 	case 2: cout<<"II"; break;
 	 	case 3: cout<<"III"; break;
 	 	case 4: cout<<"IV"; break;
 	 	case 5: cout<<"V"; break;
 	 	case 6: cout<<"VI"; break;
 	 	case 7: cout<<"VII"; break;
 	 	case 8: cout<<"VIII"; break;
 	 	case 9: cout<<"IX"; break;
	  }
 	 
 	 
 	 
 	return 0;
 }
