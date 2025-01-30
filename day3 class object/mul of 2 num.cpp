// multiplication of two numbers using class and object 
#include <iostream>
using namespace std;
class one{
	public:
		int a,b,c;
	public:
		void collect();
		void calculate();
		void display();
};
void one:: collect(){
	cout<<"enter number ";
	cin>>a>>b;
}
void one:: calculate(){
	c=a*b;
}
void one:: display(){
	cout<<c;
}
int main(){
	one ob;
	ob.collect();
	ob.calculate();
	ob.display();
}