#include<iostream>
using namespace std;
class item
{
    int num;
    float cost;
    public:
    void getdata(int a, float b)
    {
        num=a;
        cost=b;
    }
    void putdata(){
    cout<<"Number: "<<num<<"\n";
    cout<<"Cost: "<<cost<<"\n";
    }
};
int main()
{

    item x,y;
    x.getdata(200,175.50);
    x.putdata();
    y.getdata(300,125.36);
    y.putdata();
    return 0;
}
