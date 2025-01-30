//find number is positive or negative using class and object 
#include <iostream>
using namespace std;
class one{
	public:
		int a;
	public:
		void collect();
};
void one:: collect(){
	cout<<"enter number: ";
	cin>>a;
	if(a){
		cout<<"is positive number: ";
	}
	else{ 
		cout<<"is negative number: ";
	}
}

int main(){
	one ob;
	ob.collect();
}
