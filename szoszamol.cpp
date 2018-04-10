# LEX
/*Szószámláló, futtatási argumentumként a bemeneti file neve,
az egymást követő whitespace-ket figyelmen kívül hagyja.


*/
#include <iostream>
#include <fstream>


using namespace std;

int main(int argc, char* argv[]){

	ifstream input (argv[1]);

	char inchar, prev;

	int szo = 0;

	while(input.good()){

		inchar = input.get();

		switch (inchar){

			case '\n': case '\t' : case ' ':
					
				if (prev != '\n' && prev !='\t' && prev != ' ' )
					szo++;
				
				break;

		}
	
		prev = inchar;

	}
	
	input.close();

	cout<<"Szavak száma a fájlban: "<<szo<<endl;

	return 0;

}
