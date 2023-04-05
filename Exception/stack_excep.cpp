#include<iostream>
using namespace std;
class stack
{
	private:
		int st[10],top;
	public:
		class range_over
		{};
		class range_under
		{};
		stack()
		{
			top=-1;
		}
		void push(int var)
		{
			if(top>=10)
				throw range_over();
			else
			{
				st[++top]=var;
				cout<<"The inserted item is:"<<var<<"\n";
			}
		}
		int pop()
		{
			if(top<0)
				throw range_under();
			else
			{
				return st[top--];
			}
		}
};
int main()
{
	stack s1;
	try
	{
		s1.push(5);
		s1.push(10);
		s1.push(15);
		s1.push(20);
		cout<<"The deleted item is:"<<s1.pop()<<"\n";
		cout<<"The deleted item is:"<<s1.pop()<<"\n";
	}
	catch(stack::range_over)
	{
		cout<<"Overflow\n";
	}
	catch(stack::range_under)
	{
		cout<<"Underflow\n";
	}
	return 0;
}
