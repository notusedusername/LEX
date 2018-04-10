#include <iostream>
#include <fstream>

using namespace std;

int main(int argc, char* argv[]){
	
	ifstream input( argv[1] );

	char inchar;

	int alpha = 0;

	while ( input.good() ){

		inchar = input.get();

		if ( isalpha(inchar) != 0 )
			alpha++;

	}

	input.close();

	cout<<"A fájlban lévő betűk száma: "<< alpha <<endl;

	return 0;
}