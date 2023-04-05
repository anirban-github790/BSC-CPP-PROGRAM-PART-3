#include<iostream>
using namespace std;
class polynomial
{
	private:
		int arr[8],final[16],count;
	public:
		void input();
		void output();
		void operator+(polynomial p);
		void operator-(polynomial p);
		void operator*(polynomial p);
};
void polynomial::input()
{
	for(int i=0;i<8;i++)
	{
		cout<<"Enter co-efficient:";
		cin>>arr[i];
		i++;
		cout<<"Enter power:";
		cin>>arr[i];
	}
}
void polynomial::output()
{
	for(int i=0;i<8;i++)
	{
		cout<<arr[i]<<"x^";
		i++;
		cout<<arr[i]<<"+";
	}
}
void polynomial::operator+(polynomial p)
{
	polynomial s;
	int r=0;
	for(int i=0;i<8;i=i+2)
	{
		for(int j=0;j<8;j=j+2)
		{
			if(arr[i+1]==p.arr[j+1])
			{
				s.arr[r]=arr[i]+p.arr[j];
				cout<<s.arr[r]<<"x^";
				r++;
				s.arr[r]=arr[i+1];
				cout<<s.arr[r]<<"+";
				r++;
			}
		}
	}
}
void polynomial::operator-(polynomial p)
{
	polynomial s;
	int r=0;
	for(int i=0;i<8;i=i+2)
	{
		for(int j=0;j<8;j=j+2)
		{
			if(arr[i+1]==p.arr[j+1])
			{
				s.arr[r]=arr[i]-p.arr[j];
				cout<<s.arr[r]<<"x^";
				r++;
				s.arr[r]=arr[i+1];
				cout<<s.arr[r]<<"+";
				r++;
			}
		}
	}
}
void polynomial::operator*(polynomial p)
{
	polynomial s;
	int r=0;
	for(int i=0;i<8;i=i+2)
	{
		for(int j=0;j<8;j=j+2)
		{
			if(arr[i+1]==p.arr[j+1])
			{
				s.arr[r]=arr[i]*p.arr[j];
				cout<<s.arr[r]<<"x^";
				r++;
				s.arr[r]=arr[i+1];
				cout<<s.arr[r]<<"+";
				r++;
			}
		}
	}
}
int main()
{
	polynomial p1,p2;
	cout<<"Enter the first polynomial:\n";
	p1.input();
	cout<<"The first polynomial:\n";
	p1.output();
	cout<<"\n";
	cout<<"Enter the second polynomial:\n";
	p2.input();
	cout<<"The second polynomial:\n";
	p2.output();
	cout<<"\nAdditon of two polynomials:\n";
	p1+p2;
	cout<<"\nSubtraction of two polynomials:\n";
	p1-p2;
	cout<<"\nMultiplication of two polynomials:\n";
	p1*p2;
	return 0;
}
