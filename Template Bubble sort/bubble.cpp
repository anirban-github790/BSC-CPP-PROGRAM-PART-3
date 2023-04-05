#include<iostream>
using namespace std;
template<class t>
void bubble(t a[],int n)
{
	for(int i=0;i<n;i++)
	{
		for(int j=i+1;j<n;j++)
		{
			if(a[i]>a[j])
			{
				swap(a[i],a[j]);
			}
		}
	}
}
template <class t>
void swap(t &a,t &b)
{
	t temp=a;
	a=b;
	b=temp;
}
int main()
{
	int x[6];
	float y[6];
	cout<<"Enter 6 data into integer array:\n";
	for(int i=0;i<6;i++)
	{
		cin>>x[i];
	}
	cout<<"\nThe integer array is:\n";
	for(int i=0;i<6;i++)
	{
		cout<<x[i]<<"\t";
	}
	cout<<"\nEnter 6 data into float array:\n";
	for(int i=0;i<6;i++)
	{
		cin>>y[i];
	}
	cout<<"\nThe integer array is:\n";
	for(int i=0;i<6;i++)
	{
		cout<<y[i]<<"\t";
	}
	bubble(x,6);
	bubble(y,6);
	cout<<"\nSorted floatinteger array is:\n";
	for(int i=0;i<6;i++)
	{
		cout<<x[i]<<"\t";
	}
	cout<<"\nSorted float array is:\n";
	for(int i=0;i<6;i++)
	{
		cout<<y[i]<<"\t";
	}
	return 0;
}
