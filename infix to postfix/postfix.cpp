#include<iostream>
using namespace std;
class stack
{
	private:
		int top;
		char post[30],st[30],ch[40];
	public:
		stack()
		{
			top=-1;
		}
		void input()
		{
			cout<<"The input must be followed by operator precedence rule:\n";
			cout<<"Enter the string:";
			gets(ch);
		}
		void output()
		{
			cout<<"The output string is:";
			puts(ch);
		}
		void postfix()
		{
			int j=0;
			for(int i=0;ch[i]!='\0';i++)
			{
				if((ch[i]>=65 && ch[i]<=90) || (ch[i]>=97 && ch[i]<=122) || (ch[i]>=48 && ch[i]<=57))
				{
					post[j++]=ch[i];
				}
				else if(ch[i]==40 || ch[i]==42 || ch[i]==94 || ch[i]==47 || ch[i]==43 || ch[i]==45)	//   (,*,^,/,+,-
				{
					st[++top]=ch[i];
				}
				else if(ch[i]==41)		
				{
					post[j++]=st[top--];
					top--;
				}
				else
				{
					cout<<"Unknown operator\n";
					exit(0);
				}
			}
		}
		void postfix_display()
		{
			for(int i=0;post[i]!='\0';i++)
			{
				cout<<post[i];
			}
		}
};
int main()
{
	stack s1;
	s1.input();
	s1.output();
	s1.postfix();
	cout<<"The postfix expression:";
	s1.postfix_display();
	return 0;
}
