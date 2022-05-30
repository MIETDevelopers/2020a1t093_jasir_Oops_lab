#include<iostream>
#include<math.h>
using namespace std;
int main()
{
	int i,n;
	float num[50], sum=0.0,var=0.0,stdev;
	cout<<"Enter the number of values: ";
	cin>>n;
	cout<<"\n";
	for(i=1;i<=n;i++)
	{
		cout<<"Enter the "<<i<<" value: ";
		cin>>num[i];
		sum += num[i];
	}
	float Mean=sum/n;
	cout<<"\nMean of the values is "<<Mean;
	for(i=1;i<=n;i++)
	{
		var += pow(num[i]-Mean,2);
	}
	var=var/n;
	cout<<"\n\nThe Standard variation of the values is "<<var;
	stdev=sqrt(var);
	cout<<"\n\n";
	cout<<"The Standard deviation of the values is "<<stdev;
	return 0;
}
