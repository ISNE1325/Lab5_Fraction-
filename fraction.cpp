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

   //output
   void output();

   
};

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