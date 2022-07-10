#include <iostream>
using namespace std;

int binarysearch(int array[], int size, int searchvalue){
	int low=0;
	int high = size-1;
	
	int mid;
	while(low<=high){
	
	mid= (low+high)/2;
	
	if(searchvalue == array[mid]){
		return mid;
	}
	else if (searchvalue >array[mid]){
		low=mid+1;
	}
	else{
		high = mid-1;
	}
}
return -1;
}

int main(){
	int arr[]= {12,22,34,47,55,67,82,98};
	
	int uservalue;
	cout<<"enter an integer: "<<endl;
	cin>> uservalue;
	
	int result= binarysearch(arr,8,uservalue);
	
	if(result>=0){
		cout<<"The number "<<arr[result] <<"was found at element at index "<<result<<endl;
	}
	else{
		cout<<"the number "<<uservalue <<" was not found. "<<endl;
	}
}