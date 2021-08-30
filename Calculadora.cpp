#include <iostream>

using namespace std;

int main(){
	float x;
	float y;
	float r;
	char op;
	
	cout << "Calculadora sencilla" << endl;
	cout << "Numero 1: ";
	cin >> x;
	cout << "Numero 2: ";
	cin >> y;
	cout << "Operacion (+|-|*|/): ";
	cin >> op;
	
	switch(op){
		case '+':
			r = x + y;
			break;
		case '-':
			r = x - y;
			break;
		case '*':
			r = x * y;
			break;
		case '/':
			r = x / y;
			break;	
		default:
			cout << "Operador no valido" << endl;
	}
	
	cout << "x " << op << " y = " << r << endl;
	return 0;
}
