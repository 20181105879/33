#include<iostream>
#include <string.h>
using namespace std;
char c;
class Animal{
	public :
		Animal(int t=0);
		int getAge()
		{
			return x;
		}
	void print(){
		cout<<"111";
	}
	
	private :
		int x;
		
	
	
};
 Animal :: Animal(int t){
   x=t;
   	
}
class Dog : public Animal{
	
	public :
	Dog(int v=0,string c="s");

	int showInfor();
	
		void print(){
		cout<<"222";
	}
	
	
		private :
			int x;
			string s;
}; 
Dog ::Dog(int v,string c): Animal(v)
		{
			s=c;
		}
int Dog :: 	showInfor()
{
			cout<<"age:"<<Dog::getAge()<<endl;
			cout<<"color:"<<s<<endl;
}
int main(){
	Animal ani(5);
	cout<<"age of ani:"<<ani.getAge()<<endl;
	Dog dog(5,"black");
	dog.print();
	
	cout<<"infor of dog:"<<endl;
	dog.showInfor();
}

