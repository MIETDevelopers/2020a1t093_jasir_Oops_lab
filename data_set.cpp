#include<iostream>
using namespace std;
main()
{
	int n, Rgno, PId;
	char name[20];
	float marks1, marks2;
	cout<<"Enter the total no of students in a Dataset: ";
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		cout<<"\nEnter the Registration Number: ";
		cin>>Rgno;
		cout<<"Enter the Name: ";
		cin>>name;
		cout<<"Enter the marks in CSE1001: ";
		cin>>marks1;
		cout<<"Enter the marks in CSE1002: ";
		cin>>marks2;
		cout<<"Enter the Proctor ID: ";
		cin>>PId;
		cout<<endl;
	}
	return 0;
}
