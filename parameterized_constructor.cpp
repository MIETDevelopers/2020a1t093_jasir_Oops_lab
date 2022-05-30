#include<iostream>
using namespace std;
class student 
{
    int rno;
    char* name;
    char* dept;
    public:
    student(int i,char* n,char* d)
    {
        rno=i;
        name=n;
        dept=d;
    }
    void display()
    {
        cout<<"\nroll no: "<<rno<<endl;
        cout<<"name: "<<name<<endl;
        cout<<"department: "<<dept<<endl;
    }
};
int main()
{
    student s(93,"jd","cse");
    s.display();
    return 0;
}