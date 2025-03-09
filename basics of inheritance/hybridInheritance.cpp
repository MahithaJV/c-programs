# include<iostream>
# include<string>
using namespace std;
//parent1
class person{
    public:
    string name;

};
//parent2
class student{
    public:
    int rollno;
};
//child;
class general:public person ,public student{
    public:
    int age;
};
int main(){
    general s1;
    s1.name="mahitha";
    s1.age=17;
    s1.rollno=32;
    cout<<"name:"<<s1.name<<endl;
    cout<<"age:"<<s1.age<<endl;
    cout<<"roll no:"<<s1.rollno<<endl;

}