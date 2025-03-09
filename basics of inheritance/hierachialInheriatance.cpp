# include<iostream>
# include<string>
using namespace std;
//parent1
class person{
    public:
    string name;
   
};
//chlid1
class student:public person{
    public:
    int age;
    
    
};
//child2;
class general:public person{
public:
int rollno;
};
int main(){
    general s1;
    s1.name="mahitha";
    
    s1.rollno=32;
    cout<<"name:"<<s1.name<<endl;
   
    cout<<"roll no:"<<s1.rollno<<endl;

}