#include <chrono>
#include <thread>
#include <iostream>
#include <vector>
#include <cstdlib>
#include <ctime>
#include "cola.hpp"

using namespace std;

int numeroAleatorio(int max);
void papaCaliente(const vector<string> &listaNombres);

int main(){
	vector<string> jugadores = { 	"1.Erick", "2.Carlos", "3.Bryan", "4.Jose", "5.Krisia", "6.Paola", "7.Silvia", 
									"8.Rene", "9.Alberto", "10.Alejandra", "11.Alejandro", "12.Willian", "13.Michell",
									"14.Iker", "15.Stephanie", "16.Ingrid", "17.Gustavo", "18.Juan", "19.Gohan" };
	papaCaliente(jugadores);
	return 0;
}

int numeroAleatorio(int max){
	static bool semillaCreada = false;
	if (!semillaCreada){
		srand(time(0));
		semillaCreada = true;
	}
	return rand() % max;
}

void papaCaliente(const vector<string> &listaNombres){
	int cantidadJugadores = listaNombres.size();
	Cola<string> simulacion;
	for(int i = 0; i < cantidadJugadores; i++){
		simulacion.enqueue(listaNombres[i]);
	}
	
	for(int i = cantidadJugadores; i > 1; i--){
		cout << "Quien tiene la papa caliente?  " << endl;
		for(int pases = numeroAleatorio(cantidadJugadores); pases > 0; pases--){
			string jugador = simulacion.dequeue();
			cout << jugador << endl;
			simulacion.enqueue(jugador);
			this_thread::sleep_for(chrono::milliseconds(10));
			
		}
		string funado = simulacion.dequeue();
		cout << "Alto!!! " << endl;
		cout << funado << " sale del juego..." << endl << endl;
		this_thread::sleep_for(chrono::milliseconds(2500));
	}
	string ganador = simulacion.dequeue();
	cout << " ****** WINNER ****** " << endl << endl;
	cout << ganador << " gano el juego." << endl;
}
