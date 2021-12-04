#include <iostream>
#include <limits>

using namespace std;

int main(){
	
	int imin = numeric_limits<int>::min();
	int imax = numeric_limits<int>::max();
	
	cout << " imin = " << imin << endl;
	cout << " imax = " << imax << "\n";
	cout << " tamanio de int : " << sizeof(int) << endl;
	
	float fmin = std::numeric_limits<float>::min();
	float fmax = std::numeric_limits<float>::max();
	
	cout << " fmin = " << fmin << endl;
	cout << " fmax = " << imax << "\n";
	cout << " tamanio de float : " << sizeof(float) << endl;
	
	char cmin = numeric_limits<char>::min();
	char cmax = numeric_limits<char>::max();
	
	cout << " cmin = " << fmin << endl;
	cout << " cmax = " << imax << "\n";
	cout << " tamanio de char : " << sizeof(char) << endl;
	
	double dmin = numeric_limits<double>::min();
    double dmax = numeric_limits<double>::max();
    
    cout << " dmin = " << dmin << endl;
    cout << " dmax = " << dmax << "\n";
    cout << " tamanio de numero double : " << sizeof(double) << endl;
	
	
	bool bmin = numeric_limits<bool>::min();
    bool bmax = numeric_limits<bool>::max();
    
    cout << " bmin = " << bmin << endl;
    cout << " bmax = " << bmax << "\n";
    cout << " tamanio de un boolean : " << sizeof(bool) << endl;
    
    long llmin = numeric_limits<long>::min();
    long llmax = numeric_limits<long>::max();
    
    cout << " llmin = " << llmin << endl;
    cout << " llmax = " << llmax << "\n";
    cout << " tamanio de un long int : " << sizeof(long) << endl;
	
	short shmin = numeric_limits<short>::min();
    short shmax = numeric_limits<short>::max();
    
    cout << " shmin = " << shmin << endl;
    cout << " shmax = " << shmax << "\n";
    cout << " tamanio de un short int : " << sizeof(short) << endl;
	return 0;
}
