#include<iostream>
using namespace std;
class matrix
{
	private:
		int row,column,arr[30][30];
	public:
		matrix()
		{
			row=0;
			column=0;
		}
		matrix(int m,int n)
		{
			row=m;
			column=n;
		}
		void input()
		{
			cout<<"Enter the input:\n";
			for(int i=0;i<row;i++)
			{
				for(int j=0;j<column;j++)
				{
					cin>>arr[i][j];
				}
				cout<<"\n";
			}
		}
		void output()
		{
			cout<<"The 2-d array is:\n";
			for(int i=0;i<row;i++)
			{
				for(int j=0;j<column;j++)
				{
					cout<<arr[i][j]<<"\t";
				}
				cout<<"\n";
			}
		}
		void valid2(matrix m)
		{
			if(column!=m.row)
			{
				cout<<"The dimenssion is not match for multiplucation\n";
				exit(0);
			}
		}
		void valid1(matrix m)
		{
			if(row!=m.row)
			{
				cout<<"The dimenssion is not match for addition or subtraction\n";
				exit(0);
			}
			else if(column!=m.column)
			{
				cout<<"The dimenssion is not match for addition or subtraction\n";
				exit(0);
			}
			else
			{
				cout<<"Dimenssion is valid:\n";
			}
		}
		void operator+(matrix);
		void operator-(matrix);
		void operator*(matrix);
};
void matrix::operator+(matrix m)
{
	matrix s;
	for(int i=0;i<row;i++)
	{
		for(int j=0;j<column;j++)
		{
			s.arr[i][j]=arr[i][j]+m.arr[i][j];
		}
	}
	cout<<"The addition of two matrix is:\n";
	for(int i=0;i<row;i++)
	{
		for(int j=0;j<column;j++)
		{
			cout<<s.arr[i][j]<<"\t";
		}
		cout<<"\n";
	}
}
void matrix::operator-(matrix m)
{
	matrix s;
	for(int i=0;i<row;i++)
	{
		for(int j=0;j<column;j++)
		{
			s.arr[i][j]=arr[i][j]-m.arr[i][j];
		}
	}
	cout<<"The subtraction of two matrix is:\n";
	for(int i=0;i<row;i++)
	{
		for(int j=0;j<column;j++)
		{
			cout<<s.arr[i][j]<<"\t";
		}
		cout<<"\n";
	}
}
void matrix::operator*(matrix m)
{
	matrix s;
	for(int i=0;i<row;i++)
	{
		for(int j=0;j<m.column;j++)
		{
			s.arr[i][j]=0;
			for(int k=0;k<column;k++)
			{
				s.arr[i][j]=s.arr[i][j]+(arr[i][k]*m.arr[k][j]);
			}
		}
	}
	cout<<"The multiplication of two matrix is:\n";
	for(int i=0;i<row;i++)
	{
		for(int j=0;j<m.column;j++)
		{
			cout<<s.arr[i][j]<<"\t";
		}
		cout<<"\n";
	}
}
int main()
{
	int m,n,p,q,var;
	cout<<"Enter row and column for first array:\n";
	cout<<"Enter the row:";
	cin>>m;
	cout<<"Enter the column:";
	cin>>n;
	matrix m1(m,n);
	m1.input();
	m1.output();
	cout<<"Enter row and column for second array:\n";
	cout<<"Enter the row:";
	cin>>p;
	cout<<"Enter the column:";
	cin>>q;
	matrix m2(p,q);
	m2.input();
	m2.output();
	cout<<"\n1.Addition\n2.Subtraction\n3.Multiplication\n4.Exit\n";
	cout<<"Enter the choice:";
	cin>>var;
	switch(var)
	{
		case 1:
		
			m1.valid1(m2);
			m1+m2;
			break;
		case 2:
			m1.valid1(m2);
			m1-m2;
			break;
		case 3:
			m1.valid2(m2);
			m1*m2;
			break;
		default:
			cout<<"Exit\n";
			exit(0);
	}
	return 0;
}
