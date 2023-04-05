#include<iostream>
using namespace std;
class complex
{
	private:
		int a,b;
	public:
		void get_data()
		{
			cout<<"Enter a:";
			cin>>a;
			cout<<"Enter b:";
			cin>>b;
		}
		void put_data()
		{
			cout<<"Value of a:"<<a<<"\n";
			cout<<"Value of b:"<<b<<"\n";
		}
		complex operator+(complex);
		complex operator-(complex);
		complex operator*(complex);
		
};
complex complex::operator+(complex c)
{
	complex temp;
	temp.a=a+c.a;
	temp.b=b+c.b;
	return temp;
}
complex complex::operator-(complex c)
{
	complex temp;
	temp.a=a-c.a;
	temp.b=b-c.b;
	return temp;
}
complex complex::operator*(complex c)
{
	complex temp;
	temp.a=(a*c.a)+(-(b*c.b));
	temp.b=(a*c.b)+(b*c.a);
	return temp;
}
int main()
{
	complex c1,c2,c3;
	c1.get_data();
	c2.get_data();
	cout<<"The value of c1 object:\n";
	c1.put_data();
	cout<<"The value of c2 object:\n";
	c2.put_data();
	c3=c1+c2;
	cout<<"After adding:\n";
	c3.put_data();
	c3=c1-c2;
	cout<<"After subtracting:\n";
	c3.put_data();
	c3=c1*c2;
	cout<<"After multiply:\n";
	c3.put_data();
	return 0;
}
