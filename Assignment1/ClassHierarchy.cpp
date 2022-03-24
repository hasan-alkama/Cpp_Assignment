#include<iostream>
#include<algorithm>
#include<math.h>
#include<vector>
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

class Engine
{
    protected:
        double heat;
        double work;
        double efficiency;
        virtual double GetEfficiency() = 0;
};
class InternalCombustionEngine:public Engine
{
    
};

class PetrolEngine:public InternalCombustionEngine
{
    public:
      PetrolEngine()
      {
        cout << "Enter the Heat input of the Petrol engine: ";
		cin >> heat;
		cout << "Enter the Work output of the Petrol engine: ";
		cin >> work;
      }
      double GetEfficiency(){
          if(heat>=work)
          {
              efficiency = work / heat;
              return efficiency;
          }
           else
          cout<<"Incorrect Input"<<endl;
      }
};
class DieselEngine:public InternalCombustionEngine
{
    public:
       DieselEngine()
       {
        cout << "Enter the Heat input of the Diesel engine: ";
		cin >> heat;
		cout << "Enter the Work output of the Diesel engine: ";
		cin >> work;
       }
      double GetEfficiency(){
          if(heat>=work)
          {
              efficiency = work / heat;
              return efficiency;
          }
          else
          cout<<"Incorrect Input"<<endl;
      }
};
class ExternalCombustionEngine:public Engine
{
    
};
class SteamEngine:public ExternalCombustionEngine
{
    public:
      double GetEfficiency() {
	  	if (heat >= work) {
	  		efficiency =work/heat;
	  		return efficiency;
	  	}
	  	else
	  	{
	  		cout << "Incorrect Entry";
	  	}
	  }
	  SteamEngine() { //constructor
	  	cout << "Enter the Heat input of the Steam engine: ";
	  	cin >> heat;
	  	cout << "Enter the Work output of the Steam engine: ";
	  	cin >> work;
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

    // InternalCombustionEngine ic1(1.73,2.58);
    // cout<<"the efficiency of the ic engine is :"<<ic1.GetEfficiency()<<"%"<<endl;
    // ExternalCombustionEngine ec1(1.73,2.10);
    // cout<<"the efficiency of the ec engine is :"<<ec1.GetEfficiency()<<"%"<<endl;
    PetrolEngine pe1;
    cout<<"the efficiency of the Petrol engine is :"<<pe1.GetEfficiency()<<"%"<<endl;
    DieselEngine de1;
    cout<<"the efficiency of the diesel engine is :"<<de1.GetEfficiency()<<"%"<<endl;
    SteamEngine he1;
    cout << "the efficiency of Heat engine is :" << he1.GetEfficiency() << "%" << endl;

    return 0;
}