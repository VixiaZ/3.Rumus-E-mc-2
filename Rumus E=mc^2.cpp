#include <iostream>
#include <iomanip>
using namespace std ;

int E ;
int m;
int c;
int hasil;

int main ()
	{
		cout <<"masukan nilai m : ";
		cin >> m ;
		
		cout << "masukan nilai c : ";
		cin >> c;
		
		//Rumus menghitung E = mc^2 
		E = (m * c) / 3;
		cout << "hasil dari perhitungan E = mc^2 adalah = " <<E;
		
		return 0;
	}
