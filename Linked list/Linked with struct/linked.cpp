#include<iostream>
using namespace std;
struct node
{
	int info;
	struct node *next;
};
typedef struct node node;
node *create_node()
{
	node *p=new node;
	cout<<"Enter information:";
	cin>>p->info;
	p->next=NULL;
	return p;
}
class linked
{
	private:
		node *start;
	public:
		linked()
		{
			start=NULL;
		}
		void insert_begin();
		void insert_last();
		void insert_after();
		void display();
		void delete_particular();
		void reverse();
		void sort();
		void search();
		void merge(linked);
};
void linked::insert_begin()		//Insert begin
{
	node *p=create_node();
	if(start==NULL)
		start=p;
	else
	{
		p->next=start;
		start=p;
	}
}
void linked::insert_last()		//Insert last
{
	node *p=create_node();
	if(start==NULL)
		start=p;
	else
	{
		node *q=start;
		while(q->next!=NULL)
			q=q->next;
		q->next=p;
	}
}
void linked::insert_after()			//Insert after
{
	node *p=create_node();
	int key;
	cout<<"After which the node will insert:";
	cin>>key;
	if(start==NULL)
		start=p;
	else
	{
		node *q=start;
		while(q->info!=key && q->next!=NULL)
		{
			q=q->next;
		}
		if(q->next==NULL)
			q->next=p;
		else
		{
			p->next=q->next;
			q->next=p;
		}
	}
}
void linked::merge(linked l)		//Merge
{
	node *p;
	cout<<"The merged list is:";
	if(start==NULL)
	{
		p=l.start;
		while(p!=NULL)
		{
			cout<<p->info<<"->";
			p=p->next;
		}
	}
	else if(l.start==NULL)
	{
		p=start;
		while(p!=NULL)
		{
			cout<<p->info<<"->";
			p=p->next;
		}
	}
	else
	{
		p=start;
		while(p->next!=NULL)
			p=p->next;
		p->next=l.start;
		node *q=start;
		while(q!=NULL)
		{
			cout<<q->info<<"->";
			q=q->next;
		}
	}
}
void linked::delete_particular()			//Delete particular
{
	node *p=start;
	node *q;
	int key;
	if(start==NULL)
	{
		cout<<"Underflow\n";
		exit(0);
	}
	else
	{
		cout<<"Enter which node will delete:";
		cin>>key;
		if(p->info==key)
		{
			start=p->next;
			cout<<"Delete node:"<<p->info<<"\n";
			delete p;
		}
		else
		{
			while(p->info!=key && p->next!=NULL)
			{
				q=p;
				p=p->next;
			}
			if(p->next==NULL)
			{
				q->next=NULL;
				cout<<"Delete node:"<<p->info<<"\n";
				delete p;
			}
			else
			{
				q->next=p->next;
				cout<<"Delete node:"<<p->info<<"\n";
				delete p;
			}
		}
	}
}
void linked::sort()			//Sort
{
	node *p,*q,*r;
	int count=0;
	if(start==NULL)
	{
		cout<<"Empty\n";
		exit(0);
	}
	else
	{
		p=start;
		while(p!=NULL)
		{
			count++;
			p=p->next;
		}
		p=start;
		for(int i=1;i<=count;i++)
		{
			r=start;
			for(node *j=r->next;j->next!=NULL;j=j->next)
			{
				if(r->info>j->info)
				{
					int temp=r->info;
					r->info=j->info;
					j->info=temp;
				}
			}
		}
	}
}
void linked::search()			//Search a node
{
	node *p=start;
	int key;
	cout<<"Enter the node which will search:";
	cin>>key;
	while(p->next!=NULL && p->info!=key)
	{
		p=p->next;
	}
	if(p->info==key)
		cout<<"The search node:"<<p->info<<":is found\n";
	else
	{
		cout<<"The search node is not found\n";
		exit(0);
	}
}
void linked::reverse()				//Reverse a list
{
	node*p,*q,*r;
	if(start==NULL)
	{
		printf("no such node is there");
		exit(1);
    }
    else
    {
    	p=start;
    	q=p->next;
    	p->next=NULL;
    	while(q!=NULL)
    	{
    		r=q->next;
    		q->next=p;
    		p=q;
    		q=r;
		}
		start=p;
		p=start;
		while(p!=NULL)
    	{
    	    printf("%d->",p->info);
			p=p->next;  
		}
	}
}
void linked::display()			//Display
{
	node *p;
	p=start;
	if(start==NULL)
	{
		cout<<"Empty\n";
		exit;
	}
	else
	{
		while(p!=NULL)
		{
			cout<<p->info<<"->";
			p=p->next;
		}
	}
}
int main()
{
	linked l1,l2;
	int n;
	do
	{
		cout<<"\n1.Insert begin\n2.Insert last for first list\n3.Insert last for second list\n4.Display first list\n5.Display second list\n6.Insert after\n";
		cout<<"7.Merge\n8.Delete particular\n9.Sort\n10.Reverse a list\n11.Search node\n";
		cout<<"Enter choice:";
		cin>>n;
		switch(n)
		{
			case 1:
				l1.insert_begin();
				break;
			case 2:
				l1.insert_last();
				break;
			case 3:
				l2.insert_last();
				break;
			case 4:
				cout<<"The first list is:";
				l1.display();
				break;
			case 5:
				cout<<"the second list is:";
				l2.display();
				break;
			case 6:
				l1.insert_after();
				break;
			case 7:
				l1.merge(l2);
				break;
			case 8:
				l1.delete_particular();
				break;
			case 9:
				l1.sort();
				break;
			case 10:
				l1.reverse();
				break;
			case 11:
				l1.search();
				break;
			default:
				cout<<"Exit\n";
				exit;
		}
	}while(n!=12);
	return 0;
}
