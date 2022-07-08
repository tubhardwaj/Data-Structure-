#include <iostream>
#include <cmath>
using namespace std;

void readin(int arr[]);
void display(int arr[]);
const int size = 10;

int main(){
	//int arr[size];    //static array
	int *arr;          //pointer
	arr = new int[size]; //dynamic memory allocation
	readin(arr);      // read data into array
	display(arr);     // prints out the array
}

void readin(int* arr){
	for (int i=0; i<size;i++){
		arr[i]= pow(2,i);
	}
}

void display(int arr[]){
	for (int i=0; i<size; i++){
		cout<< arr[i]<<" ";
		cout<<endl;
	}
}