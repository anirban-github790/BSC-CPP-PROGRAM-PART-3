#include<iostream>
using namespace std;
class simple
{
	private:
		int a,b;
	public:
		void input()
		{
			cout<<"Enter a:";
			cin>>a;
			cout<<"Enter b:";
			cin>>b;
		}
		void output()
		{
			cout<<"a="<<a<<"\n";
			cout<<"b="<<b<<"\n";
		}
		void check()
		{
			if(a>b)
				cout<<"a is greater than b\n";
			else
				cout<<"b is greater than a\n";
		}
};
int main()
{
	simple s;
	s.input();
	s.output();
	s.check();
	return 0;
}
