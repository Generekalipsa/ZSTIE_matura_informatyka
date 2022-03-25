#import <iostream>
#import <fstream>
#import <string>
#import <vector>


// Co 59 znakow kolejna plansza, czyli co 58 indexow

using namespace std;

char plansze[1000];
int kolejna_plansza=1;

void test(){
}

int main(){
	char kropka= '.';
	
	fstream fin("szachy.txt", fstream::in);
	
	ifstream fin;
	fin.open("my-input-file.txt", ios::in);

	char my_character ;
	int number_of_lines = 0;

	while (!fin.eof() ) {

	fin.get(my_character);
	cout << my_character;
	
/*	for(int i=0; i<125; i++){
		
		if()
		
		
		kolejna_plansza=kolejna_plansza+58;
	}
*/	
	return 0;
}


	
