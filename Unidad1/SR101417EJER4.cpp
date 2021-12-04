#include <iostream>
#include <cstdlib>
#include <ctime>
#include <string>
#include <math.h>
#include <string.h>


std::string CalcularTriangulo();
std::string CalcularMayorNum();
std::string CalcularProm();
double area(double Lado1,double Lado2, double Lado3);

 
int main()
{
	using namespace std;
	int eleccion;
	cout << "Rodrigo Serrano SR101417, Hola escribe la operacion que deseas ejecutar: \n"; 
	cout << "Calcular Triangulo = 1 \n";
	cout << "Calcular Numero Mayor = 2 \n";
	cout << "Calcular Promedio = 3 \n";
	cin >> eleccion;
	
	switch(eleccion){
		case 1:
			CalcularTriangulo();
			break;
		case 2:
			CalcularMayorNum();
			break;
		case 3:
			CalcularProm();
			break;
		default:
			cout << "Operacion no valida" << endl;
	}
}

std::string CalcularTriangulo(){
	using namespace std;
    double Lado1,Lado2,Lado3;
    double r;
    cout << "\nPrimer lado: "; cin >> Lado1;
    cout << "Segundo lado: "; cin >> Lado2;
    cout << "Tercer lado: "; cin >> Lado3;
    if (Lado1 == Lado2 && Lado2 == Lado3){
	
        cout << "Es un triangulo Equilatero \n " << endl;
        r =  area(Lado1,Lado2,Lado3);
        cout << "El Area es: "<< r <<" \n " << endl;
	}
    else if(Lado1 == Lado2 || Lado1 == Lado3 || Lado2 == Lado3){
        cout << "Es un triangulo Isosceles \n" << endl;
        r =  area(Lado1,Lado2,Lado3);
        cout << "El Area es: "<< r <<" \n " << endl;
	}
    else{
        cout << "Es un triangulo Escaleno \n" << endl;
        r =  area(Lado1,Lado2,Lado3);
        cout << "El Area es: "<< r <<" \n " << endl;
 	}
}

double area(double Lado1,double Lado2,double Lado3){
	using namespace std;
	double S,areat,v;	
	S= ((Lado1+Lado2+Lado3)/2);
	v= (S*(S-Lado1)*(S-Lado2)*(S-Lado3));
	areat = sqrt(v);
	if(areat == 0){
		cout << "Triangulo no valido"<< endl;
	}
	return areat;
}

std::string CalcularMayorNum(){
	using namespace std;
    int n1,n2,n3,n4,n5;
    cout << "\nPrimer Numero: "; cin >> n1;
    cout << "Segundo Numero: "; cin >> n2;
    cout << "Tercer Numero: "; cin >> n3;
    cout << "Cuarto Numero: "; cin >> n4;
    cout << "Quinto Numero: "; cin >> n5;
    if(n1 > n2 && n1 > n3 && n1 > n4 && n1 > n5){ //esto se puede hacer con un array pero el ejercicio solicita if and else
    	cout << "El numero mas grande es: "<< n1 <<" \n" << endl;
	}
	else if(n2 > n3 && n2 > n4 && n2 > n5){
    	cout << "El numero mas grande es: "<< n2 <<" \n" << endl;
	}
	else if(n3 > n4 && n3 > n5){
    	cout << "El numero mas grande es: "<< n3 <<" \n" << endl;
	}
	else if(n4 > n5){
    	cout << "El numero mas grande es: "<< n4 <<" \n" << endl;
	}
	else{
		cout << "El numero mas grande es: "<< n5 <<" \n" << endl;
	}
}

std::string CalcularProm(){
	using namespace std;
	int cont,i = 0,num;
	double suma = 0, prom;
    cout << "Ingrese cuantos numeros desea promediar"<< endl;
    cin >> cont;
    cout << "Ingrese los numeros: "<< endl;
    double arry[cont];
    while(i < cont){
		cin >> num;
    	if(num == 00){
    		i = cont;
		}else{
			arry[i] = num;
		}
		++i;
	}
	cout << "Los numeros ingresados son:" << endl;
	for(int i = 0; i < cont; i++) {	
  		cout << arry[i] << "\n";
  		suma = suma + arry[i];
	}
	prom = suma/cont;
	cout << "El promedio de estos numeros es: "<< prom <<" \n" << endl;
}

