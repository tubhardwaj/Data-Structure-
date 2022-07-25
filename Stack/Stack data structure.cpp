#include <iostream>
#include <string>
using namespace std;

class stack{
	private:
		int top;
		int arr[5];
	public:
	    stack(){
	    	top=  -1;
	    	for(int i=0;i<5;i++){
	    		arr[i]= 0;
			}
		}	
		bool isempty(){
			if(top==-1){
				return true;
			}else{
				return false;
			}
		}
		bool isfull(){
			if(top==4){
				return true;
			}else{
				return false;
			}
		}
		void push(int val){
			if(isfull()){
				cout<<"stack overflow"<<endl;
			}else{
				top++; // 0
				arr[top]= val;
			}
		}
		int pop(){
			if(isempty()){
				cout<<"stack is empty"<<endl;
				return 0;
			}else{
				int popvalue= arr[top];
				arr[top] = 0;
				top--;
				return popvalue;
			}
		}
		
		int count(){
			return (top+1);
		}
		int peek(int pos){
			if(isempty()){
				cout<<"stack is empty"<<endl;
				return 0;
			}else{
				return arr[pos];
			}
		}
		void change(int pos, int val){
			arr[pos]= val;
			cout<<"value changed at location"<<pos<<endl;
		}
		
		void display(){
			cout<<"All elements in the stack are "<<endl;
			for(int i=4;i>=0;i++){
				cout<<arr[i]<<endl;
			}
		}
};

int main(){
	stack s1;
	int option, position, value;
	
	do{
		cout<<"What operation do you want to perform? select option number. Enter 0 to exit."<<endl;
		cout<<"1. Push"<<endl;
		cout<<"2. pop"<<endl;
		cout<<"3. isempty()"<<endl;
		cout<<"4. isfull()"<<endl;
		cout<<"5. peak()"<<endl;
		cout<<"6. count"<<endl;
		cout<<"7. change"<<endl;
		cout<<"8. display"<<endl;
		cout<<"9. clear screen"<<endl;
		
		cin>>option;
		switch(option){
			case 0:
				break;
			case 1:
				cout<<"Enter an item to push in the stack"<<endl;
				cin>>value;
				s1.push(value);
				break;
			case 2:
				cout<<"Pop funtion called - Popped value: "<<s1.pop()<<endl;
				break;
			case 3:
				if(s1.isempty()){
					cout<<"Stack is empty"<<endl;
				}else{
					cout<<"Stack is not empty"<<endl;
				}
				break;
			case 4:
				if(s1.isfull()){
					cout<<"Stack is full"<<endl;
				}else{
					cout<<"Stack is not full"<<endl;
				}
				break;
			case 5:
				cout<<"Enter the position of the item you want to peek"<<endl;
				cin>>position;
				cout<<"Peek Function called - value a position "<<position<<" is "<<s1.peek(position)<<endl;
				break;
			case 6:
				cout<<"Count Function called - Number of items in the stack are: "<<s1.count()<<endl;
				break;
			case 7:
				cout<<"Change function called - "<<endl;
				cout<<"Enter position of item you want to change : ";
				cin>>position;
				cout<<endl;
				cout<<"Enter position of item you want to change: ";
				cin>>value;
				s1.change(position, value);
				break;
			case 8:
				cout<<"Display function called - "<<endl;
				s1.display();
				break;
			case 9:
				system("cls");
				break;
			default:
				cout<<"Enter proper option number "<<endl;
		}
	}while(option!=0);
	return 0;
}