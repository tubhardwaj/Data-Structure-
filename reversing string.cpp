#include <iostream>
#include <string>
using namespace std;

string reverseStringRecursively(string str){
    if (str.length() == 1) {
        return str;
    }else{
        return reverseStringRecursively(str.substr(1,str.length())) + str.at(0);
    }
}

int main()
{
    string str;
    cout<<"Enter the string to reverse : ";
    cin>>str;

    cout<<"The reversed string is : "<<reverseStringRecursively(str);
    return 0;
}
