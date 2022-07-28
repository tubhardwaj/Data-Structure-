#include <iostream>
#include <list>
#include <stdlib.h>
#include <assert.h>
using namespace std;

class hashtable{
	private:
		int buckets;
		list<int> *table;
	public:
		hashtable(int b){
			buckets = b;
			table= new list<int>[buckets];
		}
	void insert(int d);
	void print();
};

void hashtable::insert(int d){
	int bucket = d% buckets;
	table[bucket].push_back(d);
}

void hashtable::print(){
	for(int i=0; i<buckets;i++){
		cout<<"| bucket "<<i<<" | ";
		for(auto j : table[i]){
			cout<<"-> | "<<j<<" | ";
		}
		cout<<endl;
	}
}

int main(){
	hashtable ht(8);
	srand(2);  // set the random number seed
	//insert the 20 random number
	for(int i=0;i<20;i++){
		ht.insert(rand()%100);
	}
	ht.print();
}