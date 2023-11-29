
#include<iostream>

using namespace std;

class Student 
{
    private :
     int roll_no;

     public :
      int sub1,sub2,sub3,sub4,sub5;

      

      void setData(int a1);

      void getData()
      {
          cout<<"Hindi num is "<<sub1<<endl;
            cout<<"English num is "<<sub2<<endl;  
            cout<<"Math num is "<<sub3<<endl;
            cout<<"Physics num is "<<sub4<<endl;
            cout<<"Chemistry num is "<<sub5<<endl;
      }

};

void Student :: setData(int a1)
{
    roll_no = a1;
}


int main()
{
    Student Sakshi;
    Sakshi.setData(32);

    Sakshi.sub1 = 79;
    Sakshi.sub2 = 79;
    Sakshi.sub3 = 89;
    Sakshi.sub4 = 90;
    Sakshi.sub5 = 89;

   Sakshi.getData();

    return 0;
}