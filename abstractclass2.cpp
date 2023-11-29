#include <iostream>

using namespace std;

class Base
{
public:
         virtual int getNumbers() = 0;

         void setNumber1(int n)
         {
                  number1 = n;
         }

         void setNuber2(int n2)
         {
                  number2 = n2;
         }

protected:
         int number1;
         int number2;
         ;
};

class Addition : public Base
{

public:
         int getNumbers()
         {
                  return (number1 + number2);
         }
};

class Substraction : public Base
{

public:
         int getNumbers()
         {
                  return (number1 - number2);
         }
};

class multiplacton : public Base
{

public:
         int getNumbers()
         {
                  return (number1 * number2);
         }
};

class division : public Base
{

public:
         int getNumbers()
         {
                  return (number1 / number2);
         }
};

class reminder : public Base 
{
         public :

         int getNumbers()
         {
                  return (number1 % number2);
         }
};

int main()
{
         Addition A;

         A.setNumber1(15);
         A.setNuber2(10);

         cout << "The Adition  is : " << A.getNumbers() << endl;

         Substraction S;

         S.setNumber1(15);
         S.setNuber2(10);

         cout << "The Substraction  is : " << S.getNumbers() << endl;

         multiplacton M;

         M.setNumber1(15);
         M.setNuber2(10);

         cout << "The Multiplication  is : " << M.getNumbers() << endl;

         division D;

         D.setNumber1(30);
         D.setNuber2(10);

         cout << "The Division  is : " << D.getNumbers() << endl;

          reminder R; 


         R.setNumber1(15);
         R.setNuber2(10);

         cout<<"The Reminder  is : "<<R.getNumbers()<<endl;

         return 0;
}