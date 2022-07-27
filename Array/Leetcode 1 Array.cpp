#include <iostream>
using namespace std;

int main(){
	int nums[10];
	int target,n,i;
	cout<<"type n"<<endl;
	cin>>n;
	cout<<"Type elements of array"<<endl;
	for( i=0;i<=n;i++){
		cin>>nums[i];
	}
	cout<<"type target value"<<endl;
	cin>>target;
	for(int j=0;j<=n;j++){
		for(int k=0; k<=n;k++){
			if((nums[j]+nums[k])==target){
				cout<<(nums[j],nums[k])<<endl;
			}
		}
	}
}
	