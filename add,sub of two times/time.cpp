#include<iostream>
using namespace std;
class time
{
	private:
		int hour,minute,sec,m,s;
	public:
		time()
		{
			hour=0;
			minute=0;
			sec=0;
			s=0;
			m=0;
		}
		void get_data()
		{
			cout<<"Enter hour:";
			cin>>hour;
			cout<<"Enter minute:";
			cin>>minute;
			cout<<"Enter sec:";
			cin>>sec;
		}
		void put_data()
		{
			cout<<"Hour is:"<<hour<<"\n";
			cout<<"Minute is:"<<minute<<"\n";
			cout<<"Sec is:"<<sec<<"\n";
		}
		time operator+(time t1)
		{
			time t;
			t.hour=hour+t1.hour;
			t.minute=minute+t1.minute;
			t.sec=sec+t1.sec;
			if(t.sec>60)
			{
				t.minute=t.minute+(t.sec/60);
				t.sec=t.sec-(60*(t.sec/60));
			}
			if(t.minute>60)
			{
				t.hour=t.hour+(t.minute/60);
				t.minute=t.minute-(60*(t.minute/60));
			}
			return t;
		}
		time operator-(time t1)
		{
			time T1,T2,T3,t;
			if(hour<=t1.hour)
			{
				cout<<"Small time is subtracted from big time\n";
				exit;
			}
			else
			{
				//For only T1
				if(sec>60)
				{
					T1.minute=sec/60;
					T1.sec=sec-(60*(sec/60));
				}
				else
				{
					T1.minute=0;
					T1.sec=sec;
				}
				if(minute>60)
				{
					T1.hour=minute/60;
					T1.minute=T1.minute+(minute-(60*(minute/60)));
				}
				else
				{
					T1.minute=T1.minute+minute;
					T1.hour=0;
				}
				T1.hour=T1.hour+hour;
				//For only T2
				if(t1.sec>60)
				{
					T2.minute=t1.sec/60;
					T2.sec=t1.sec-(60*(t1.sec/60));
				}
				else
				{
					T2.minute=0;
					T2.sec=t1.sec;
				}
				if(minute>60)
				{
					T2.hour=t1.minute/60;
					T2.minute=T2.minute+(t1.minute-(60*(t1.minute/60)));
				}
				else
				{
					T2.minute=T2.minute+t1.minute;
					T2.hour=0;
				}
				T2.hour=T2.hour+t1.hour;
				//Perform minus that is T1-T2
				if(T1.sec>=T2.sec)
				{
					T3.sec=T1.sec-T2.sec;
				}
				else
				{
					T1.sec=T1.sec+60;
					T3.sec=T1.sec-T2.sec;
					t.s=1;
				}
				if(T1.minute>=T2.minute)
				{
					T3.minute=T1.minute-T2.minute;
					if(t.s==1)
					{
						T3.minute=T3.minute-1;
					}
				}
				else
				{
					T1.minute=T1.minute+60;
					T3.minute=T1.minute-T2.minute;
					t.m=1;
					if(t.s==1)
					{
						T3.minute=T3.minute-1;
					}
				}
				if(t.m==1)
				{
					T3.hour=T1.hour-T2.hour;
					T3.hour=T3.hour-1;
				}
				else
				{
					T3.hour=T1.hour-T2.hour;
				}
				if(T3.sec>60)
				{
					T3.minute=T3.minute+(T3.sec/60);
					T3.sec=T3.sec-(60*(T3.sec/60));
				}
				if(T3.minute>60)
				{
					T3.hour=T3.hour+(T3.minute/60);
					T3.minute=T3.minute-(60*(T3.minute/60));
				}
			}
			return T3;
		}
};
iint main()
{
	time t1,t2,t3;
	t1.get_data();
	cout<<"Time for t1 object\n";
	t1.put_data();
	t2.get_data();
	cout<<"Time for t2 object\n";
	t2.put_data();
	cout<<"After addition:\n";
	t3=t1+t2;
	t3.put_data();
	cout<<"After subtraction:\n";
	t3=t1-t2;
	t3.put_data();
	return 0;
}
