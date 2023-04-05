#include<iostream>
using namespace std;
class queue
{
	protected:
		int q[20],front,rear;
	public:
		queue()
		{
			rear=-1;
			front=-1;
		}
		void insert(int var)
		{
			q[++rear]=var;
			cout<<"The inserted item is:"<<var<<"\n";
		}
		void del()
		{
			cout<<"The deleted item is:"<<q[++front]<<"\n";
		}
};
class dev_queue:public queue
{
	public:
		dev_queue():
			queue()
			{}
		void insert(int var)
		{
			if(rear>=20)
			{
				cout<<"The queue is overflow\n";
				exit(1);
			}
			else
			{
				queue::insert(var);
			}
		}
		void del()
		{
			if(rear<0)
			{
				cout<<"The queue is underflow\n";
				exit(1);
			}
			else
			{
				queue::del();
			}
		}		
};
int main()
{
	dev_queue d1;
	d1.insert(5);
	d1.insert(10);
	d1.insert(15);
	d1.insert(20);
	d1.del();
	d1.del();
	return 0;
}
