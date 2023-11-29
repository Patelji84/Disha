#include<iostream>

using namespace std;

class person 
{
    int age;
    char name[20];

    public:
     
     void read()
     {
         cout<<"Enetr Name =";
         cin>>name;

         cout<<"Enter Age = ";
         cin>>age;

     }

     void show()
     {
         cout<<"Name = "<<name<<endl;
         cout<<"Age = "<<age<<endl;
     }
};

class student: public person
{
    int rollno;
    char branch[10];
  public:
     void read()
     {
         person::read();
         cout<<"Enetr roll number =";
         cin>>rollno;

         cout<<"Enter branch = ";
         cin>>branch;

     }

     void show()
     {
         person::show();
         cout<<"Rolll Number= "<<rollno<<endl;
         cout<<"Branch = "<<branch<<endl;
     }

};

int main()
{

    student s1;

    cout<<"Enter student details"<<endl;
    s1.read();

    cout<<"You have entered="<<endl;
    s1.show();

    return 0;

}