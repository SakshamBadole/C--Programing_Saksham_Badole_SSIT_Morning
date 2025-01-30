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