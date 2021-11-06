#include "cuentabancaria.h"

using namespace std;

int main(){
	CuentaBancaria miCuenta("A-480920", "Jonathan Joetar", 2900.00);
	cout << "Titular: "<< miCuenta.getNombreTitular() << endl;
	cout << "# Cuenta: "<< miCuenta.getNumeroCuenta() << endl;
	cout << "Saldo: $" << miCuenta.getSaldo() << endl;
	cout << " -----------------------------------"<< endl; 
	
	CuentaBancaria cuentaAmigo("C-165426", "Arale Guitierrez", 784661.00);
	cout << "Titular: "<< cuentaAmigo.getNombreTitular() << endl;
	cout << "# Cuenta: "<< cuentaAmigo.getNumeroCuenta() << endl;
	cout << "Saldo: $" << cuentaAmigo.getSaldo() << endl;
	cout << " -----------------------------------"<< endl; 
	
	CuentaBancaria cuentaNoValida("A-4354698", "John Cena", -500.00);
	cout << "Titular: "<< cuentaNoValida.getNombreTitular() << endl;
	cout << "# Cuenta: "<< cuentaNoValida.getNumeroCuenta() << endl;
	cout << "Saldo: $" << cuentaNoValida.getSaldo() << endl;
	cout << " -----------------------------------"<< endl; 
	
	//hacer retiro de miCuenta
	cout << "Quiero retirar $84 de la cuenta " << miCuenta.getNumeroCuenta()<<endl;
	cout << "Saldo inicial: $"<< miCuenta.getSaldo()<< endl;
	miCuenta.retirar(84);
	cout << "Saldo luego de la operacion: $"<< miCuenta.getSaldo()<<endl;
	cout <<"--------------------------------------------"<< endl;
	
	//hacer retiro de miCuenta mayor al saldo
	cout << "Quiero retirar $3504 de la cuenta " << miCuenta.getNumeroCuenta()<<endl;
	cout << "Saldo inicial: $"<< miCuenta.getSaldo()<< endl;
	miCuenta.retirar(3504);
	cout << "Saldo luego de la operacion: $"<< miCuenta.getSaldo()<<endl;
	cout <<"--------------------------------------------"<< endl;
	
	//hacer retiro de monto negativo
	cout << "Quiero retirar $-754 de la cuenta " << miCuenta.getNumeroCuenta()<<endl;
	cout << "Saldo inicial: $"<< miCuenta.getSaldo()<< endl;
	miCuenta.retirar(-754);
	cout << "Saldo luego de la operacion: $"<< miCuenta.getSaldo()<<endl;
	cout <<"--------------------------------------------"<< endl;
	
	//hacer deposito a miCuenta
	cout << "Quiero depositar $125000 a micuenta " << miCuenta.getNumeroCuenta()<<endl;
	cout << "Saldo inicial: $"<< miCuenta.getSaldo()<< endl;
	miCuenta.depositar(125000);
	cout << "Saldo luego de la operacion: $"<< miCuenta.getSaldo()<<endl;
	cout <<"--------------------------------------------"<< endl;
	
	//hacer deposito negativo a miCuenta
	cout << "Quiero depositar $-5000 a la cuenta " << miCuenta.getNumeroCuenta()<<endl;
	cout << "Saldo inicial: $"<< miCuenta.getSaldo()<< endl;
	miCuenta.depositar(-5000);
	cout << "Saldo luego de la operacion: $"<< miCuenta.getSaldo()<<endl;
	cout <<"--------------------------------------------"<< endl;
	
	return 0;
}
