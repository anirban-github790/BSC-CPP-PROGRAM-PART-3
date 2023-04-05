#include<iostream>
#include<math.h>
using namespace std;
class shape
{
	public:
		void area();
		void peri_meter();
};
class circle:public shape
{
	private:
		float r;
	public:
		void area()
		{
			cout<<"Enter radious for circle:";
			cin>>r;
			cout<<"The area of circle is:"<<3.14*pow(r,2)<<"\n";
		}
		void peri_meter()
		{
			cout<<"The perimeter of circle is:"<<2*3.14*r<<"\n";
		}
};
class squre:public shape
{
	private:
		int a;
	public:
		void area()
		{
			cout<<"Enter side for squre:";
			cin>>a;
			cout<<"The area of circle is:"<<a*a<<"\n";
		}
		void peri_meter()
		{
			cout<<"The perimeter of squre is:"<<4*a<<"\n";
		}
};
class triangle:public shape
{
	private:
		float a,b,c,s;
	public:
		void area()
		{
			cout<<"For triangle:\n";
			cout<<"Enter first side:";
			cin>>a;
			cout<<"Enter second side:";
			cin>>b;
			cout<<"Enter third side:";
			cin>>c;
			s=0;
			s=(a+b+c)/2;
			s=sqrt(s*(s-a)*(s-b)*(s-c));
			cout<<"The area of triangle is:"<<s<<"\n";
		}
		void peri_meter()
		{
			cout<<"The perimeter of triangle is:"<<a+b+c<<"\n";
		}
};
int main()
{
	circle c;
	squre s;	
	triangle t;
	c.area();
	c.peri_meter();
	s.area();
	s.peri_meter();
	t.area();
	t.peri_meter();
	return 0;
}
