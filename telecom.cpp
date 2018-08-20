#include<iostream.h>
class data
{public:
  char pname[20];  //plan name
  int mrental;     //monthly rental
  int fcall;       //free calls
  int fint;        //free internet
  int fsms;        //free sms
  int cchg;        //call charges
  int schg;        //sms charges
  int dchg;        //data charges
  int rchg;        //roming charges
  void enter_data()
  {int c=1;
  while(c)
  { 
    cout<<"\n enter the plan name";
    gets(pname);
    cout<<"\n enter monthly charges";
    cin>>mrental;
    cout<<"\n enter no. of free calls";
    cin>>fcall;
    cout<<"\n enter amount of free internet";
    cin>>fint;
    cout<<"\n enter no. of free sms";
    cin>>fsms;
    cout<<"\n enter the call rates";
    cin>>cchg;
    cout<<"\n enter the sms rates";
    cin>>schg;
    cout<<"\n enter the data rates";
    cin>>dchg;
    cout<<"\n enter the roming rates";
    cin>>rchg;
    cout<<"\n want to enter more plans(1/0)";
    cin>>c;
  }
 
  void filter()
  
};
