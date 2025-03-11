# include <iostream>
#include <string>
using namespace std;
//base class
class vechile{
	
	
	protected:
	string brand;
	string model;
	public:
	int year;
	vechile(){
		cout<<"parent calss default constructor is called"<<endl;
		brand="";
		model="";
		year=0;
	}
	vechile(string a,string b,int c){
		brand=a;
		model=b;
		year=c;
		
	}
	~vechile(){
		cout<<"parent class destructor is called"<<endl;
	}
};
//child1
class car:public vechile{
	int nodoors;
	public:
	car(){
		cout<<"child1 class default constructor is called"<<endl;
		nodoors=0;
	}
	car(string a,string b,int c,int d){
		brand=a;
		model=b;
		year=c;
		nodoors=d;
		cout<<"mahi0"<<endl;
		
	}
	~car(){
		cout<<"child1 destuctor is called"<<endl;
	}
	void displaycar(){
		cout<<brand<<endl;
		cout<<model<<endl;
		cout<<year<<endl;
		cout<<nodoors<<endl;
	}
};
//child 2
class bike:public vechile{
	bool hasbasket;
	public:
	bike(string a,string b,int c,bool e){
		brand=a;
		model=b;
		year=c;
		hasbasket=e;
		cout<<"mahi"<<endl;
		}
	~bike(){
		cout<<"child2 destuctor is called"<<endl;
	}
	void displaybike(){
		cout<<brand<<endl;
		cout<<model<<endl;
		cout<<year<<endl;
		cout<<hasbasket<<endl;
	}
};
int main(){
	car c1("bmw","k",2000,4);
	c1.displaycar();
	bike b1("hero","l",2001,true);
	b1.displaybike();
	return 0;
}
		
	
		
		
	
