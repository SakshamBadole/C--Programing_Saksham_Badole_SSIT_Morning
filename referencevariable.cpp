//example 1
#include <iostream>
using namespace std;
int main (){
		int a=10;
		int & ref =a;
		cout<<a<<" "<<ref<<endl;
		a=20;
		cout<<a<<" "<<ref<<endl;
}

//example 2
#include <iostream>
using namespace std;

void fun (int &x,int &y){
		x=12;
		y=13;
	}
	int main(){
		int a=2,b=4;
		cout<<a<<" "<<b<<endl;
		fun(a,b);
		cout<<a<<" "<<b<<endl;
		
	}
// Default argument Adding
#include <iostream>
using namespace std;

void add(int x=4,int y=5){
	int c=x+y;
	cout<<c<<endl;
	}
	int main(){
		add(2,3);
		add();
		add(6);
		
	}
// Default argument multiplication
#include <iostream>
using namespace std;

void add(int x=4,int y=5){
	int c=x*y;
	cout<<c<<endl;
	}
	int main(){
		add(2,3);
		add();
		add(6);
		
	}

//inline function
#include <iostream>
using namespace std;
inline void add (int x, int y){
	int c=x+y;
	cout<<c<<endl;
	
}
int main(){
	add(2,3);
}  
