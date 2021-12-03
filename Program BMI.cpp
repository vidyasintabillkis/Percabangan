#include <iostream>
using namespace std;

int main (){
	
	double beratbadan;
	double tinggibadan;
	double BMI;
	
	cout <<"Silahkan Isi Data di bawah ini!"<<endl;
	cout <<"Berat Badan (kg)\t : ";
	cin >>beratbadan;
	cout <<"Tinggi Badan (m)\t : ";
	cin >>tinggibadan;
	
	cout <<endl;
	cout <<"Berikut Hasil BMI anda!"<<endl;
	BMI = beratbadan/(tinggibadan*tinggibadan);
	cout <<"BMI\t\t\t : "<<BMI<<endl;

	if (BMI<18.5){
		cout <<"Underweight"<<endl;
	}
	else if (BMI>=18.5 || BMI<=24.9){
		cout <<"Normal Weight"<<endl;
	}
	else if (BMI>=24.9 || BMI<=29.9){
		cout <<"Over Weight"<<endl;
	}
	else if (BMI>=30 || BMI<=34.9){
		cout <<"Obesity Class 1"<<endl;
	}
	else  if (BMI>=35 || BMI<=39.9){
		cout <<"Obesity Class 2"<<endl;
	}
	else {
		cout <<"Obesity Class 3"<<endl;
	}
	
	return 0;
}
