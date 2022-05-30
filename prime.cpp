#include<iostream>
using namespace std;
int main()
{
	int num,i=1,c=0;
	cout<<"Enter Number:";
	cin>>num;
	while(i<=num)
	{
		if(num%i==0)
		c++;
		i++;
	}
	if(c==2)
	       cout<<num<<" is prime Number";
	else
	       cout<<num<<" is Not Prime Number";
	return 0;
}
