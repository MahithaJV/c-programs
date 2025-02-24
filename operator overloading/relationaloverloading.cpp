# include<iostream>
using namespace std;
 class distance{
    int feet;
    int inches;
    public:
    distance(){
        feet=0;
        inches=0;
    }
    distance(int x,int y){
        feet=x;
        inches=y;
    }
    bool operator <(distance d){
        if(feet<d.feet)
        return true;
        else if(feet==d.feet && inches<d.inches)
        return true;
        else
        return false;
    }
};
int main(){
    distance d1(2,3);
    distance d2(3,2);
    if(d1<d2){
        printf("true bro!");
    }
}
