/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <bits/stdc++.h>

using namespace std;
class Shape
{
    public:
      virtual int GetArea()=0;
    
};
class Rectangle:public Shape
{
    private:
      int length,breadth;
    public:
      Rectangle(int l,int b)
      {
          length=l;
          breadth=b;
      }
      int GetArea()
      {
          return (length*breadth);
      }
};
class Triangle:public Shape
{
  private:
    int A,B,C;
  public:
    Triangle(int a,int b,int c)
    {
        A=a;
        B=b;
        C=c;
    }
    int GetArea()
    {
        double s = (A+B+C)/2;
        return (sqrt(s*(s-A)*(s-B)*(s-C)));
    }
    
};
class Virus
{
    public:
      virtual double GetMortalityRate()=0;
};
class Covid:public Virus
{
    private:
       int totalNoOfCases,TotalDeath;
    public:
      Covid(int tc,int td)
      {
          totalNoOfCases=tc;
          TotalDeath=td;
      }
      double GetMortalityRate()
      {
          return double(TotalDeath)/double(totalNoOfCases);
      }
      
};
class HIV:public Virus
{
    private:
       int totalNoOfCases,TotalDeath;
    public:
       HIV(int tc,int td)
       {
           totalNoOfCases=tc;
           TotalDeath=td;
       }
       double GetMortalityRate()
       {
           return (double(TotalDeath)/double(totalNoOfCases));
       }
};
class Birdflue:public Virus
{
    private:
      int totalNoOfCases,TotalDeath;
    public:
      Birdflue(int tc,int td)
      {
          totalNoOfCases=tc;
          TotalDeath=td;
      }
      double GetMortalityRate()
      {
          return (double(TotalDeath)/double(totalNoOfCases));
      }
};

int main()
{
    Rectangle r1(15,5);
    Triangle t1(3,4,5);
    cout<<"Area of rectangle is:"<<r1.GetArea()<<endl;
    cout<<"Area of Triangle is :"<<t1.GetArea()<<endl;
    Covid cv1(100,2);
    HIV hv1(1000,3);
    Birdflue bv1(100,4);
    cout<<"the Mortality rate of covid is:"<<cv1.GetMortalityRate()<<endl;
    cout<<"The Mortality rate of HIV is:"<<hv1.GetMortalityRate()<<endl;
    cout<<"The Mortality rate of Birdflue Virus is:"<<bv1.GetMortalityRate()<<endl;
    
    

    return 0;
}