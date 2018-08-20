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
 
  int filter()
  {int a,fmonthlyrental,fcalls,finternet,fsms;
    cout<<"\n 1. filter based on monthly rental";
    cout<<"\n 2. filter based on free internet";
    cout<<"\n 3. filter based on free calls";
    cout<<"\n 4. filter based on free sms";
    cout<<"\n select the option";
    cin>>a;
   switch(a)
   {case 1: cout<<"\n enter the filtering amount";
            cin>>fmothlyrental;
            return fmonthlyrental;
            break;
    case 2: cout<<"\n enter the filtering amount";
            cin>>finternet;
            return finternet;
            break;
    case 3: cout<<"\n enter the filtering amount";
            cin>>fcalls;
            return fcalls;
            break;
    case 2: cout<<"\n enter the filtering amount";
            cin>>fsma;
            return fsms;
            break;
   }
  }
   void show_results()
   { int filter();
     cout<<"\n available plan is "<<pname;
    cout<<"\n free calls is "<<fcall;
    cout<<"\n free internet is "<<fint;
    cout<<"\n free sms is "<<fint;
   }
   void payment()
   {int b;
     cout<<"\n 1. credit card";
    cout<<"\n 2. debit card";
    cout<<"\n 3. net banking";
    cout<<"\n 4. UPI";
    cout<<"\n select the option";
    cin>>b;
   
     
   }
};
