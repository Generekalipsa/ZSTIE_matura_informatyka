#include <iostream>

using namespace std;

int tab[1000];
int miejsca_tablicy=0;

void dec2any(int dec, int n){
	 int i=0;
	 int reszta;
	 do{
	 	reszta=dec%n;
		dec=dec/n;	 	
	 	tab[i]=reszta;
	 	i++;
	 	miejsca_tablicy++;
	 }while(dec!=0);
}

int main(){
	int dec,n;
	cout << "Wpisz liczbe dziesietna:\n";
	cin >> dec;
	cout << "Wybierz liczbe odpowiadajaca systemowi liczenia:\n";
	cin >> n;
	
	dec2any(dec,n);
	
	for(int i=miejsca_tablicy-1; i>=0; i--){
		cout << tab[i];
	}
	
	return 0;
}
