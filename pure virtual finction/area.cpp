#include<iostream>
#include<math.h>
using namespace std;
class area
{
	protected:
		float a,b,c;
	public:
		area()
		{
			a=0;
			b=0;
			c=0;
		}
		area(float w,float x,float y)
		{
			a=w;
			b=x;
			c=y;
		}
		area(float x)
		{
			a=x;
		}
		area(float x,float y)
		{
			a=x;
			b=y;
		}
		virtual void display()=0;					//This is the pure virtual function
};
class triangle:public area
{
	public:
		float s;
		triangle():
			area()
			{s=0;}
		triangle(float w,float x,float y):
				area (w,x,y)
				{s=0;}
		void display()
		{
			s=(a+b+c)/2;
			cout<<"a="<<a<<"\n";
			cout<<"b="<<b<<"\n";
			cout<<"c="<<c<<"\n";
			cout<<"s="<<s<<"\n";
			cout<<"The area of triangle:"<<sqrt(s*(s-a)*(s-b)*(s-c))<<"\n";
		}
};
class squre:public area
{
	public:
		squre():
			area()
			{}
		squre(float x):
			area(x)
			{}
		void display()
		{
			cout<<"The area of the squre:"<<a*a<<"\n";
		}
};
class rectriangle:public area
{
	public:
		rectriangle():
			area()
			{}
		rectriangle(float x,float y):
			area(x,y)
			{}
		void display()
		{
			cout<<"The area of the rectriangle:"<<a*b<<"\n";
		}
};
class circle:public area
{
	public:
		circle():
			area()
			{}
		circle(float a):
			area(a)
			{}
		void display()
		{
			cout<<"the area of the circle:"<<3.14*a*a<<"\n";
		}
};
int main()
{
	area *ptr[10];
	triangle t(5,15,17);
	ptr[0]=&t;
	ptr[0]->display();
	squre s(5);
	ptr[1]=&s;
	ptr[1]->display();
	rectriangle r(5,10);
	ptr[2]=&r;
	ptr[2]->display();
	circle c(5);
	ptr[3]=&c;
	ptr[3]->display();
	return 0;
}
