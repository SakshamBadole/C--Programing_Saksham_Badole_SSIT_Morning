// Reverse a given number using class and object
#include <iostream>
using namespace std;
class one{
	public:
		int num, d1, d2, d3, d4, d5, rev;
	public:
		void collect();
		void calculation();
		void display();
};
void one:: collect(){
	cout<<"enter number: ";
	cin>>num;
	d1= num %10;
	num= num/10;
	d2= num%10;
	num= num/10;
	d3= num%10;
	num= num/10;
	d4= num%10;
	num= num/10;
	d5= num%10;
	num= num/10;	
}
void one::calculation(){
	rev= d1*10000 + d2*1000 + d3*100 + d4*10 + d5*1;
}
void one::display(){
	cout<<rev;
}

int main(){
	one ob;
	ob.collect();
	ob.calculation();
	ob.display();
}