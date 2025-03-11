# include<iostream>
# include<string>
using namespace std;
//doing with help of default constructor
class person{
	public:
	string name;
	int age;
	person(){
		cout<<"parent class conmstructor is called"<<endl;
		name="";
		age=0;
	}
	~person(){
		cout<<"parent destructor is called"<<endl;
	}
};
class student:public person{
	public:
	int studentid;
	char grade;
	student(){
		cout<<"child class constructor is called"<<endl;
		studentid=0;
		grade='\0';
	}
	~student(){
		cout<<"child destructor is called"<<endl;
};
int main(){
	student s1;
	s1.name="mahitha";
	s1.age=17;
	s1.studentid=112416032;
	s1.grade='A';
	cout<<"name"<<s1.name<<endl;
	cout<<"age"<<s1.age<<endl;
	cout<<"student id"<<s1.studentid<<endl;
	cout<<"grade"<<s1.grade<<endl;
	return 0;
}
	
	
