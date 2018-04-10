#include <iostream>
#include <fstream>

using namespace std;

int main( int argc, char* argv[]){
	
	ifstream input ( argv[1] );

	int line = 0, count = 0;

	char inchar;

	while ( input.good() ){

		inchar = input.get();

		count++;

		if ( inchar == '\n')

			line++;


	}

	input.close();


	if ( line-1 != 0 || count != 2)
		cout<<"Sorok száma a fájlban: "<< line  <<"."<<endl;	//Az első új sor karakter miatt +1 lenne 
																// de egy üres fájlban is gyakorlatilag 0 sor van.
	else if( count == 2 ) 
		cout<<"A fájl üres."<<endl;

	return 0;
}