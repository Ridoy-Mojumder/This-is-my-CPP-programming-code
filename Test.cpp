#include<iostream>
using namespace std;
class first{
int a;
public:
    void setData(int a){
        this -> a=a;
    }
    void getData()
    {
        cout<<"The value of a = "<<a<<endl;
    }


};


int main()
{
    first a;
    a.setData(4);
    a.getData();
    return 0;
}
