#include <iostream>
using namespace std;

class node{
	public:
		int data;
		node* link;
};
node* top= NULL;

bool isempty(){
	if(top== NULL){
		return true;
	}else{
		return false;
	}
}

void push(int val){
	node* ptr= new node();
	ptr->data= val;
	ptr->link= top;
	top= ptr;
}

void pop(){
	if(isempty()){
		cout<<"Stack is empty"<<endl;
	}else{
		node* ptr= top;
		top=top->link;
		delete(ptr);
	}
}

void showtop(){
	if(isempty()){
		cout<<"Stack is empty"<<endl;
	}else{
		cout<<"Elements at top is "<<top->data;
	}
}

int main(){
	push(1);
	push(2);
	pop();
	showtop();
	return 0;
}