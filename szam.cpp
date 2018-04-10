#include <iostream>
#include <fstream>

using namespace std;

int main(int argc, char* argv[]){
	
	ifstream input( argv[1] );

	char inchar;

	int number = 0;

	while ( input.good() ){

		inchar = input.get();

		if ( isdigit(inchar) != 0 )
			number++;

	}

	input.close();

	cout<<"A fájlban lévő számok száma: "<< number <<endl;

	return 0;
}