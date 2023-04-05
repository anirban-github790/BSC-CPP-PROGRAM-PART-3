#include<iostream>
using namespace std;
class decimal
{
	private:
		int arr[50],n;
	public:
		void input()
		{
			cout<<"Enter the dec number:";
			cin>>n;
		}
		void output()
		{
			cout<<"Dec number is:";
			cout<<n;
		}
		void bin()		//convert decimal to binary
		{
			int i=0;
			while(n>0)
			{
				arr[i]=n%2;
				n=n/2;
				i++;
			}
			cout<<"\nThe dec to bin number is:";
			for(int j=i-1;j>=0;j--)
				cout<<arr[j];
		}
		void oct()		//convert decimal to octal
		{
			int i=0;
			while(n>0)
			{
				arr[i]=n%8;
				n=n/8;
				i++;
			}
			cout<<"\nThe dec to oct number is:";
			for(int j=i-1;j>=0;j--)
					cout<<arr[j];
		}
		void hex()		//convert decimal to hexadecimal
		{
			int i=0,temp;
			char ch[50];
			while(n>0)
			{
				temp=n%16;
				if(temp<10)
				{
					ch[i]=temp+48;
					i++;
				}
				else
				{
					ch[i]=temp+55;
					i++;
				}
				n=n/16;
				
			}
			cout<<"\nThe dec to hex number is:";
			for(int j=i-1;j>=0;j--)
					cout<<ch[j];
		}
};
int main()
{
	int var;
	cout<<"1.Dec to bin\n2.Dec to oct\n3.Dec to hex\n4.Exit\n";
	cout<<"Enter choice:";
	cin>>var;
	switch(var)
	{
		case 1:
			decimal d1;
			d1.input();
			d1.output();
			d1.bin();
			break;
		case 2:
			decimal d2;
			d2.input();
			d2.output();
			d2.oct();
			break;
		case 3:
			decimal d3;
			d3.input();
			d3.output();
			d3.hex();
			break;
		default:
			cout<<"Exit\n";
			exit(0);
	}
}
