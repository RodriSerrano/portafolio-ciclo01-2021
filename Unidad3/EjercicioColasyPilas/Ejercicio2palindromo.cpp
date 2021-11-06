#include <iostream>
#include <string>
#include <cctype>
#include <algorithm> 
//llamada a archivos pila y cola
#include "pila.hpp"
#include "cola.hpp"

using namespace std;

bool evaluarPalindomo(string palabraEvaluar);
bool evaluarTexto(string mensaje);

int main(){

	string texto;
	string textoIgnorando;
	
	cout << "EVALUADOR DE PALINDROMO por RODRIGO SERRANO" << endl << endl;
	cout << "Escriba la palabra a evaluar: ";
	getline(cin, texto);
	
	textoIgnorando = texto;
	//No toma encuenta el espacio en blanco
	textoIgnorando.erase(std::remove(textoIgnorando.begin(), textoIgnorando.end(), ' '), textoIgnorando.end());
	
	//No toma encuneta signos de puntacion
	textoIgnorando.erase(std::remove_if(textoIgnorando.begin(), textoIgnorando.end(), [](unsigned char c) { return std::ispunct(c); }), textoIgnorando.end()); 
	
	//No toma encuenta los numeros
	textoIgnorando.erase(std::remove_if(textoIgnorando.begin(), textoIgnorando.end(), [](unsigned char c) { return std::isdigit(c); }), textoIgnorando.end()); 
	//Pasa a mayus
	transform(textoIgnorando.begin(), textoIgnorando.end(), textoIgnorando.begin(), [](unsigned char c){ return toupper(c); });

 for (int i = 0; i < textoIgnorando.length(); i++) {
    //mmodifica cada letra por su representación
    textoIgnorando[i] = toupper(textoIgnorando[i]);
  }

	cout << endl;
	//evaluamos palabra
	if(evaluarPalindomo(textoIgnorando)){
		cout << "La palabra ingresada: '" << texto << "'es un Palindromo" << endl;
	}else{
		cout << "La palabra ingresada: '" << texto << "' NO es un Palindromo" << endl;
	}
	cout << endl;
	cout << endl;
	cout << "Creado por: Rodrigo Jose Serrano Recinos" << endl;
	
	return 0;
}


//funcion para evaluar
bool evaluarPalindomo(string palabraEvaluar){
	
	char letra;
	string palabraPila;
	string palabraLetra;
	
	Pila<char> pilaLetra;
	Cola<char> colaLetra;
	
	//push de caracteres a la pila y cola 
	for(int i = 0; i < palabraEvaluar.length(); i++){
		letra = palabraEvaluar[i];
		pilaLetra.push(letra);
		colaLetra.enqueue(letra);
	}
	
	//Extrayendo caracteres de la pila y cola
	for(int i = 0; i < palabraEvaluar.length(); i++){		
		palabraPila += pilaLetra.pop();
		palabraLetra += colaLetra.dequeue();
	}
		if(palabraPila == palabraLetra){
			cout << "Palabra al reves: " << palabraPila << endl;
			cout << "Palabra al derecho: " << palabraLetra << endl;
		return true;
	}else{
			cout << "Palabra al reves: " << palabraPila << endl;
			cout << "Palabra al derecho: " << palabraLetra << endl;
		return false;
	}
}
