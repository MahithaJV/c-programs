#include<iostream>
#include<string>
using namespace std;
class person{
    public:
    string name;
    int age;
};
class student:public person{
    public:
    int rollno;
};
class gradstudent:public student{
    public:
    string research;
};
int main(){
    student s1;
    s1.name="mahitha";
    s1.age=17;
    s1.rollno=32;
    cout<<"name:"<<s1.name<<endl;
    cout<<"age:"<<s1.age<<endl;
    cout<<"roll no:"<<s1.rollno<<endl;
    gradstudent s01;//each varaiable has different scope
    s01.name="mahitha";
    s01.age=17;
    s01.rollno=32;
    s01.research="oops";
    cout<<"name:"<<s01.name<<endl;
    cout<<"age:"<<s01.age<<endl;
    cout<<"roll no:"<<s01.rollno<<endl;
    cout<<"resarch:"<<s01.research<<endl;

}