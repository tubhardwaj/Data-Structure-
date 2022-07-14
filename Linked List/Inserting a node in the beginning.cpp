#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

class node{
	public:
		int data;
		node* link;
};

 // global

int main(){
	node*head= NULL;
	node* ptr = new node();
	ptr->data=2;
	ptr->link = NULL;
	head=ptr;
	
	node* ptr1 = new node();
	ptr1->data = 3;
	ptr1->link = ptr;
	
	head= ptr1;
	while(head != NULL){
		cout<< head-> data;
		head= head-> link;
	}
		
	
	return 0;
}