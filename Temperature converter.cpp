#include <iostream>
using namespace std;

void conversion(){
	cout<<"Temperature Converter"<<endl;
}

void fehren(float Feh){
	float Cel;
	cout<<"Temp in Faren"<<endl;
	cin>> Feh;
	Cel= (Feh-32)*5/9;
	cout<<"The temp is: "<< Cel<< endl;
}

void celci(float Cel){
	float Feh;
	cout<<"Temp in Celcius"<<endl;
	cin>> Cel;
	Feh= (Cel*9/5)+32;
	cout<<"The temp is: "<< Feh<< endl;
}


int main(){
	conversion();
	
	float Feh , Cel;
	char res;
	cout<<"If you want to convert Fahrenheit to Celcius then press F OR if you want to convert Celcius to Fahrenheit then press C "<<endl;
	cin>> res;
	if (res == 'F'){
		fehren(Feh);
	}
	else if (res == 'C'){
		celci(Cel);
	}
}