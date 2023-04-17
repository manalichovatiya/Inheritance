#include<iostream>
using namespace std;
class X{
    public:
    int a;
    int b;
    int c;
};
class Y : public X{
    public:
    void inputData(){
        cout<<"Enter value of a:";
        cin>>this->a;
        cout<<"Enter value of b:";
        cin>>this->b;
        cout<<"Enter value of c:";
        cin>>this->c;
    }
    void setData(){
        this->a = a;
        this->b = b;
        this->c = c;
    }
    void getData(){       
        int m = (a*a*a)+(b*b*b)+(c*c*c);
        cout<<"Sum of all three number’s cubes: "<<m<<endl;
    }
};
int main () {
    Y obj1;
    obj1.inputData();
    obj1.setData();
    obj1.getData();
    return 0;
}
