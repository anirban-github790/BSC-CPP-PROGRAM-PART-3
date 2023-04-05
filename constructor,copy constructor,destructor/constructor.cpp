#include<iostream>
using namespace std;
class sample
{
	private:
		int a;
	public:
		sample() //Constructor
		{
			a=0;
		}
		~sample() //Destructor
		{
			cout<<"The object is destroyed\n";
		}
		sample(sample &s) //Copy constructor
		{
			s.a=0;
		}
		void display()
		{
			cout<<"The value of a is:"<<a<<"\n";
		}
};
int main()
{
	sample s;
	s.display();
	return 0;
}
