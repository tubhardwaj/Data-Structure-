#include <iostream>
using namespace std;

class Drawer{
	private:
		int n;      /* Number of itmes in the Drawer */
		string item[100];     /* Array of itmes in Drawer */
	public:
		Drawer(){ n=0;}        /* constructor for empty drawer */
		void putIn(string thing){item[n]=thing;n++;}  
		void showall();
};


int main(){
	string thing;
	Drawer junk_drawer;
	cout<<"Put this in the drawer"<<endl;
	getline(cin,thing);
	while (thing != "quit"){
		junk_drawer.putIn(thing);
		cout<<"anything else? "<<endl;
		getline(cin,thing);
	}
	cout<<"items in drawer"<<endl;
	junk_drawer.showall();

}

void Drawer::showall(){
	for (int i=0;i<n;i++){
		cout<<item[i]<<endl;
	}
	
}