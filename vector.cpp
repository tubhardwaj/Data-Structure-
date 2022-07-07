#include <iostream>
#include <vector>
using namespace std;

void printvector(vector<int> b){
	for (int i =0;i<b.size();i++){
		cout<< b[i]<<"|";
	}
}

int main(){
	vector<int> v(3);
	
	v[0]= 10;
	v[1]= 5;
	v[2]= 22;
	
	v.push_back(7);
	
	cout<<v.front()<<endl;
	cout<<v.back()<<endl;
	cout<<v.at(3)<<endl;
	printvector(v);
	return 0;
}