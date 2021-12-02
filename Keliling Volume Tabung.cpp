#include <iostream>
using namespace std;

int main (){
	
	string keliling_volume;
	double jarijari, tinggi, keliling, volume;

	
	cin >>keliling_volume;
	
	cout <<endl;
	if(keliling_volume=="1"){
		cout <<"Masukkan Jari-Jari Tabung\t : "; cin >>jarijari;
		keliling = 2*3.14*jarijari;
		cout <<"Hasil dari Keliling Alas Tabung\t : "<<keliling<<endl;
	}
	else if(keliling_volume=="2"){
		cout <<"Masukkan Jari-Jari Tabung\t : "; cin >>jarijari;
		cout <<"Masukkan Tinggi Tabung\t\t : "; cin >>tinggi;
		volume = 3.14*(jarijari*jarijari)*tinggi;
		cout <<"Hasil dari Volume Tabung adalah\t : "<<volume<<endl;
	}
	else {
		cout <<"syntax error";
	}
	
	return 0;
}
