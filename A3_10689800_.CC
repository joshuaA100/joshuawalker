#include <iostream>
#include<conio.h>

using namespace std;
int main()
{

 int no, i;
 float marks[10], per=0, total=0;
 cout << "enter number of subjects.";
 cin >>no;
 cout << "enter marks of "<<no<<"  subjects:" ;
 for(i=0; i<no; i++)
 {
     cin >>marks[i];

 }
    for(i=0; i<no; i++)
    {
        total=total+marks[i];
    }
    per=total/no;
    cout << "percentage: "<<per<<" % " <<endl;
    if(per>80)
    {
        cout <<" A grade";
    }
   else if(per<80 && per>=75)
   {
       cout << "B grade";
   }
    else if(per<75 && per>=50)
    {
        cout << "C grade";
    }

  else if(per<50 && per>=30)
  {
      cout << "D grade";

  }
  else
  {
      cout << "F grade";
  }

{
    getch();
}


return 0;

}



