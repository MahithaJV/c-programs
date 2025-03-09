# include<iostream>
# include<string>
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
int main(){
    student s1;
    s1.name="mahitha";
    s1.age=17;
    s1.rollno=32;
    cout<<"name:"<<s1.name<<endl;
    cout<<"age:"<<s1.age<<endl;
    cout<<"roll no:"<<s1.rollno<<endl;

}