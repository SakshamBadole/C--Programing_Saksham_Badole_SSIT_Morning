// check whether a character is alphabet or not.
#include <iostream>
using namespace std;
int main(){
	char ch ;
	cout<<"enter character:";
	cin>>ch;
	if(ch>='A' && ch<='Z'){
		cout<<"is a alphabet "<<ch;
	}
	else if(ch>='a' && ch<='z'){
		cout<<"is a alphabet "<<ch;
	}
	else{
		cout<<"is consonent ";
	}
}