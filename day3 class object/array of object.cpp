#include <iostream>
using namespace std;
class emp{
	public:
		int id;
		char name [20];
		char phone [20];
		void collect(){
			cout<<"enter id ";
			cin>>id;
			cout<<"enter name ";
			cin>>name;
			cout<<"enter phone ";
			cin>>phone;
		}
		void display(){
			cout<<id<<" "<<name<<" "<<phone;
			
		}
};
int main(){
	emp ob[3];
	int i;
	for(i=0; i<3; i++){
		ob[i].collect();
	}
	for(i=0; i<3; i++){
		ob[i].display();
	}
}