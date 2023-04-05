#include<iostream>
#include<string.h>
using namespace std;
class convert
{
	private:
		char ch[30];
	public:
		convert()
		{
			strcpy(ch,"");
		}
		convert(char c[])
		{
			strcpy(ch,c);
		}
		void input()
		{
			cout<<"\nEnter string:";
			gets(ch);
		}
		void output()
		{
			cout<<"The string is:";
			puts(ch);
		}
		void lower();
		void upper();
};
void convert::lower()
{
	for(int i=0;ch[i]!='\0';i++)
	{
		if(ch[i]>='A' && ch[i]<='Z')
			ch[i]=ch[i]+32;
	}
	cout<<"\nThe lower case is:";
	puts(ch);
}
void convert::upper()
{
	for(int i=0;ch[i]!='\0';i++)
	{
		if(ch[i]>='a' && ch[i]<='z')
			ch[i]=ch[i]-32;
	}
	cout<<"The upper case is:";
	puts(ch);
}
int main()
{
	char a[30];
	cout<<"Enter the string which will convert to lower case:";
	gets(a);
	cout<<"The entered string is:";
	puts(a);
	convert c1,c2(a);
	cout<<"Enter the string which will convert to upper case:";
	c1.input();
	c1.output();
	c1.upper();
	c2.lower();
	return 0;
}
