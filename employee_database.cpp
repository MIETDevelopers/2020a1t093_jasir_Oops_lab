#include<iostream>
using namespace std;
class employee
{
    char name[10],pos[10];
    int id;
    float sal;
    public:
    void getd()
    {
        cout<<"Enter the name of the employee: ";
        cin>>name;
        cout<<"Enter the Id of the employee: ";
        cin>>id;
        cout<<"Enter the position of the employee: ";
        cin>>pos;
        cout<<"Enter the salary of the employee: ";
        cin>>sal;
    }
    void putd()
    {
        cout<<"NAME: "<<name<<"\n";
        cout<<"ID: "<<id<<"\n";
        cout<<"POSITION: "<<pos<<"\n";
        cout<<"SALARY: "<<sal<<"\n";
    }
};
int main()
{
    employee man[2],foreman[4],workers[17];
    for(int i=1;i<=2;i++)
    {
        cout<<"\nManager "<<i<<"\n";
        man[i].getd();
    }
    for(int i=1;i<=4;i++)
    {
        cout<<"\nForeman "<<i<<"\n";
        foreman[i].getd();
    }
	for(int i=1;i<=17;i++)
    {
        cout<<"\nWorker "<<i<<"\n";
        workers[i].getd();
    }
    cout<<endl;
    for(int i=1;i<=2;i++)
    {
        cout<<"Details of Manager "<<i<<"\n";
        man[i].putd();
    }
    cout<<endl;
    for(int i=1;i<=4;i++)
    {
        cout<<"Details of Worker "<<i<<"\n";
        workers[i].putd();
    }
    cout<<endl;
    for(int i=1;i<=17;i++)
    {
    	cout<<"Details of Foreman "<<i<<"\n";
        foreman[i].putd();
	}
	cout<<endl;
	return 0;
}
