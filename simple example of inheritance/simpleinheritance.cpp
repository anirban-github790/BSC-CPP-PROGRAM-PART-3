#include<iostream>
using namespace std;
class counter
{
	protected:
		int count;
	public:
		counter()
		{
			count=0;
		}
		counter(int c)
		{
			count=c;
		}
		counter operator++()
		{
			return (counter(++count));
		}
		void show()
		{
			cout<<"count:"<<count<<"\n";
		}
};
class counterdn:public counter
{
	public:
		counterdn():
			counter()
			{}
		counterdn(int x):
			counter(x)
			{}
		counterdn operator--()
		{
			return (counterdn(--count));
		}
};
int main()
{
	counterdn d1,d2(10);
	++d1;
	--d2;
	d1.show();
	d2.show();
}
