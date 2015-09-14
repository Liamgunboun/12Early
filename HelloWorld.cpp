#include <iostream>

using namespace std;
int main (){	

	string input = "";
	cout<<"Hello! Enter your name: "<<endl;	
	getline(cin,input);
	cout<<"Hello "<<input<<endl<<"Hit Enter To Continue";
	getline(cin,input);
	return 0;
}
