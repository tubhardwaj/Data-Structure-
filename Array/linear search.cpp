#include <iostream>
using namespace std;

int linearsearch(int arr[],int size, int searchvalue){
	for(int i=0;i<size; i++){
		if (searchvalue== arr[i]){
			return i;
		}
	}
	return -1;
}


int main(){
	int arr[]= {15,23,7,45,87,16};
	
	int uservalue;
	cout<<"enter an integer: "<<endl;
	cin>> uservalue;
	
	int result= linearsearch(arr,6,uservalue);
	
	if(result>=0){
		cout<<"The number "<<arr[result] <<"was found at element at index "<<result<<endl;
	}
	else{
		cout<<"the number "<<uservalue <<" was not found. "<<endl;
	}
}