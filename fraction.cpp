#include<iostream>
//#include"fraction.h"
using namespace std;

class fraction{
   private:
   int num,de;

   public:
   fraction();
   fraction(int num,int de);

   int GCD(int gc,int cd);
   void simple();
   
   //accesors
   int getNumerator();
   int getDenominator();

   //mutator
   void setNumerator(int n);
   void setDenomirator(int d);

   //process
   int plus(const fraction& f);
   int minus(const fraction& f);
   int multiple(const fraction& f);
   int divide(const fraction& f);

   //comparison
   bool equal(const fraction& f);
   bool notequal(const fraction& f);
   bool less(const fraction& f);
   bool more(const fraction& f);
   bool lessequal(const fraction& f);
   bool moreequal(const fraction& f);

   //output
   void output();

   
};

//implementation

int fraction::GCD(int gc,int cd){
   gc=num;
   cd=de;
   if (cd<0){
    cd=-cd;
   }
   if (gc<0)
   {
      gc=-gc;
   }

   while(cd!=0){
   int temp=cd;
   cd=gc%cd;
   gc=temp;
   }
return gc;
}
// check value that negative value is multipled with - 
void fraction::simple(){
   if(de==0)return;
   if(de<0){
      num = -num;
      de = -de;
   }
   int divide= GCD(num,de);
   num/=divide;
   de/=divide;
   
}

fraction::fraction(){
    num=0;
    de=1;

}

fraction::fraction(int n,int d){
    num=n;
    de=d;
    simple();
}

void fraction::setNumerator(int n){
     num=n;
     simple(); 
}

void fraction::setDenomirator(int d){
     de=d; 
     simple();
}

int fraction::getNumerator(){
   return num;  
}

int fraction::getDenominator(){
   return de;  
}
   
void fraction::output(){
    cout<<num<<"/"<<de;



}
}