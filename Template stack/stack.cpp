#include<iostream>
using namespace std;
template<class t>
class stack
{
	private:
		t st[5];
		int top;
	public:
		stack()
		{
			top=-1;
		}
		void push(t var)
		{
			if(top>5)
			{
				cout<<"Stack overflow\n";
				exit(0);
			}
			else
			{
				cout<<var<<" is pushed\n";
				st[++top]=var;
			}
		}
		t pop()
		{
			if(top<0)
			{
				cout<<"Stack underflow\n";
				exit(0);
			}
			else
				return (st[top--]);
		}
};
int main()
{
	stack <float> f;
	f.push(10.1);
	f.push(20.2);
	f.push(30.3);
	f.push(40.4);
	cout<<"pop float item is:"<<f.pop()<<"\n";
	cout<<"pop float item is:"<<f.pop()<<"\n";
	stack <int> i;
	i.push(10);
	i.push(20);
	cout<<"pop int item is:"<<i.pop()<<"\n";
	return 0;
}
