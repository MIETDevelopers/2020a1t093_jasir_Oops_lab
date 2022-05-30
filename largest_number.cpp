#include<iostream>
using namespace std;
class set
{
    int n, m;
    public:
    int larg()
    {

        if(m>=n)
            return(m);
        else
            return(n);
    }
    void getdata()
    {
        cout<<"Input the values of m and n: "<<"\n";
        cin>>m>>n;
    }
    void putdata()
    {
        cout<<"largest value is "<<larg()<<"\n";
    }
};
int main()
{
    set A;
    A.getdata();
    A.putdata();
    return 0;
}
