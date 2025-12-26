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
   
   //accesors
   int getNumerator();
   int getDenominator();

   //mutator
   void setNumerator(int n);
   void setDenomirator(int d);

   //output
   void output();

   
};

fraction::fraction(){
    num=0;
    de=1;

}

fraction::fraction(int n,int d){
    num=n;
    de=d;
}

void fraction::setNumerator(int n){
     num=n; 
}

void fraction::setDenomirator(int d){
     de=d; 
}

int fraction::getNumerator(){
   return num;  
}

int fraction::getDenominator(){
   return de;  
}

int fraction::GCD(int num,int de){
   if (de<0){
    de=-de;
   }
   int temp=de;
   de=num%temp;
   num=temp;
}

void fraction::output(){
    cout<<num<<"/"<<de;
}