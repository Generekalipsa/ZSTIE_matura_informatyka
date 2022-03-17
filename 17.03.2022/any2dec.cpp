#include <iostream>
#include <math.h>

using namespace std;

int any2dec(int any[1000], int n, int miejsca_tablicy){
	 
	 int suma=0;
	 int j=miejsca_tablicy;
	 for(int i=0;i<miejsca_tablicy; i++){
		suma=suma+(any[j-1]*pow(n,i));
		j--;
	 }
	return suma; 
}

int main(){
	
	int miejsca_tablicy=0;
	int n,wynik;
	
	cout << "Wybierz liczbe odpowiadajaca systemowi liczenia\n na ktory chcesz przekonwertowac liczbe dziesietna:\n";
	cin >> n;
	cout << "Wybierz dlugosc ciagu cyfr tej liczby:\n";
	cin >> miejsca_tablicy;
	
	int any[1000];
	
	cout << "Wpisz liczbe z tego systemu(kazda cyfre/znak po kolei po enterze):\n";
	for (int i=0; i<miejsca_tablicy; i++){
		cin >> any[i];		
	}
	wynik=any2dec(any, n, miejsca_tablicy);
	
	cout << "Twoj wynik: " << wynik;
	
	return 0;
}
