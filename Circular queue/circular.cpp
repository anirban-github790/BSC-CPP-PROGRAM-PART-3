#include<iostream>
#define max 4
using namespace std;
class circular
{
	private:
		int q[max],rear,front,dis;
	public:
		circular()
		{
			rear=-1;
			front=-1;
			dis=0;
		}
		void display()
		{
			if(rear<0)
			{
				cout<<"Queue is empty\n";
				exit(0);
			}
			else
			{
				if(front<0)
				{
					int i;
					for(i=0;i<=rear;i++)
					{
						cout<<"Data display:"<<q[i]<<"\n";
					}
				}
				else
				{
					for(int i=front+1;i<=rear;i++)
					{
						cout<<"Data display:"<<q[i]<<"\n";
					}
				}
			}
		}
		void push(int x)
		{
			if(rear>=max)
			{
				cout<<"Overflow\n";
				exit(0);
			}
			else
			{
				rear=rear+1;
				q[rear]=x;
				cout<<x<<":is pushed"<<"\n";
			}
		}
		void pop()
		{
			if(rear<0)
			{
				cout<<"Underlow\n";
				exit(0);
			}
			else
			{
				front=front+1;
				cout<<"Deleted data:"<<q[front]<<"\n";
			}
		}
};
int main()
{
	circular c1;
	c1.push(5);
	c1.push(10);
	c1.push(15);
	c1.push(20);
	c1.display();
	c1.pop();
	c1.display();
	return 0;
}
