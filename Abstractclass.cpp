#include<iostream>

using namespace std;

class Shape 
{
         public:

         virtual int Area() =0;

         void setWidth(int w)
         {
                  width =w;
         }

         void setHeight(int h)
         {
                  height =h;
         }

         protected:

         int width;
         int height;
};

class Rectangle : public Shape
{
         public :

         int Area()
         {
                  return (width *height);
         }
};


class Tringle : public Shape
{
         public: 
          int Area()
          {
                   return (width * height)/2;
          }
};

int main()
{
         Rectangle R;
         Tringle T;

         R.setWidth(5);
         R.setHeight(10);

         cout<<"The area of Rectangle is : "<<R.Area()<<endl;

         cout<<"The area of tringle is : "<<T.Area();

         return 0;
}