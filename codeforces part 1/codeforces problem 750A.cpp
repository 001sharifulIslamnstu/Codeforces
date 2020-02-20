#include<bits\stdc++.h>

using namespace std;

class Information
{
    public:
    int id;
    double gpa;
   // char address[100];
   void setValue(int x,double y)
   {
       id=x;
       gpa=y;
   }


    void display()
    {
        cout<<id<< "  "<<gpa<<endl;
    }
    Information(int x,double y)
    {
        id=x;
        gpa=y;
    }
};

int main ()
{
    Information prince(100,4.00),imran(120,3.80);

     imran.display();
       prince.display();

}
