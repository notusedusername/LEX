#include <iostream>
#include <fstream>

using namespace std;

int main(int argc, char* argv[]){
	
	ifstream input( argv[1] );

	char inchar, prev;

	int number = 0, alpha = 0, line = 0, word = 0, count = 0;

	while ( input.good() ){

		inchar = input.get();

		if ( isdigit(inchar) != 0 )
			number++;

		if ( isalpha(inchar) != 0 )
			alpha++;

		if ( inchar == '\n')
			line++;

		switch (inchar){

			case '\n': case '\t' : case ' ':
					
				if (prev != '\n' && prev !='\t' && prev != ' ' )
					word++;
				
				break;

		}
	
		prev = inchar;



	}

	input.close();

	cout<<"A fájlban \n\t> "<< alpha << " betű,\n\t> ";

	cout<< number <<" szám,\n\t> ";

	cout<< word <<" szó,\n\t> ";

	if ( line-1 != 0 || count != 2)
		cout<< line  <<" sor"<<endl;	//Az első új sor karakter miatt +1 lenne 
																// de egy üres fájlban is gyakorlatilag 0 sor van.
	else if( count == 2 ) 
		cout<<"0 sor"<<endl;

	int sumofchars = number + alpha;

	cout<<" van "<<sumofchars <<" karakterben.\n";

	return 0;
}