#include<iostream>
#include<string.h>
using namespace std;
class string1
{
	private:
		char ch[40];
	public:
		string1()
		{
			strcpy(ch," ");
		}
		string1(char a[])
		{
			strcpy(ch,a);
		}
		void get()
		{
			cout<<"Enter string:";
			gets(ch);
		}
		void show()
		{
			cout<<"The string is:";
			puts(ch);
		}
		void operator+(string1 s) //Concatination of two strings
		{
			if(strlen(ch)+strlen(s.ch)>=40)
			{
				cout<<"The array size is bound";
				exit(0);
			}
			else
			{
				string1 temp;
				strcpy(temp.ch,ch);
				strcat(temp.ch," ");
				strcat(temp.ch,s.ch);
				temp.show();
			}
		}
	void operator=(string1 s) //Overloading '=' operator
	{
		if(strcmp(ch,s.ch)==0)
			cout<<"Two strings are equls\n";
		else
			cout<<"Two strings are not equls\n";
	}
};
int main()
{
	string1 s1,s2;
	s1.get();
	s2.get();
	s1.show();
	s2.show();
	cout<<"Check two strings are equls or not\n";
	s1=s2;
	cout<<"After concatinating two strings:\n";
	s1+s2;
}
