#include <iostream>
#include <cmath>
using namespace std;

void readin(int* arr);
void display(int* arr);
const int size = 10;

int main(){
	//int arr[size];    //static array
	int *arr;          //pointer variable
	arr = new int[size]; //dynamic memory allocation
	readin(arr);      // read data into array
	display(arr);     // prints out the array
}

void readin(int* arr){
	int*p;
	for ( p=arr; p<arr+size;p++){
		*p= pow(2,p-arr);
	}
}

void display(int* arr){
	for (int i=0; i<size; i++){
		cout<< *(arr +i)<<" ";
		cout<<endl;
	}
}