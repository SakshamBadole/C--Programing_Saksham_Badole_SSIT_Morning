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