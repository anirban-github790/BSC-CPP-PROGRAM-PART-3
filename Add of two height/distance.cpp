#include<iostream>
using namespace std;
class Distance
{
	private:
		int feet;
		float inch;
	public:
		Distance()
		{
			feet=0;
			inch=0.0;
		}
		Distance(int x,float y)
		{
			feet=x;
			inch=y;
		}
		void input()
		{
			cout<<"Enter feet:";
			cin>>feet;
			cout<<"Enter inch:";
			cin>>inch;
		}
		void output()
		{
			cout<<"Feet:"<<feet<<"\n";
			cout<<"inch:"<<inch<<"\n";
		}
		Distance add(Distance d2)
		{
			Distance d;
			d.feet=feet+d2.feet;
			d.inch=inch+d2.inch;
			if(d.inch>12.0)
			{
				d.feet=d.feet+1;
				d.inch=d.inch-12;
			}
			return d;
		}
};
int main()
{
	Distance d1,d2,d3;
	d1.input();
	d2.input();
	d1.output();
	d2.output();
	d3=d1.add(d2);
	cout<<"The addition of two heights:\n";
	d3.output();
	return 0;
}

