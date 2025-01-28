// find maximum between two numbers.
#include <iostream>
using namespace std;
int main(){
	int a,b;
	cout<<"enter number:";
	cin>>a;
	cout<<"enter number:";
	cin>>b;
	if(a>b){
		cout<<"maximum is "<<a;
	}
	else if(b>a){
		cout<<"maximum is "<<b;
	}
	else{
		cout<<"both are same ";
	}
}

// find maximum between three numbers.
#include <iostream>
using namespace std;
int main(){
	int a,b,c;
	cout<<"enter number:";
	cin>>a;
	cout<<"enter number:";
	cin>>b;
	cout<<"enter number:";
	cin>>c;
	if(a>b && a>c){
		cout<<"maximum is "<<a;
	}
	else if(b>a && b>c){
		cout<<"maximum is "<<b;
	}
		else if(c>a && c>b){
		cout<<"maximum is "<<c;
	}
	else{
		cout<<"both are same ";
	}	
}
// check whether a number is negative, positive or zero.
#include <iostream>
using namespace std;
int main(){
	int a;
	cout<<"enter number:";
	cin>>a;
	if(a>0){
		cout<<"is positive number"<<a;
	}
	else{
		cout<<"is a negative number";
	}
}

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