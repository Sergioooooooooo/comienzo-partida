#include <SFML/Graphics.hpp>

#include <iostream>

using namespace std;


struct carta{
	string color;
	int valor;
	bool repartida;
	
};
	
	int main(int argc, char *argv[]) {
	
	carta cartas [40];
	int i;
	int j=0;
	int n=1;
		for (i=0;i<10;i++) {
			
			cartas[j]. color ="verde";
			
			cartas[j]. valor = n;
			cout << "La carta " << cartas [j]. color<< " "<< cartas[j]. valor <<"\n" ;
			j++;
			n++;
		}	
			
		int mano, mano_ia;

		
			
		
		
			return 0;
}
	
	
