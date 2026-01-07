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
   fraction plus( fraction& f);
   fraction minus( fraction& f);
   fraction multiple( fraction& f);
   fraction divide( fraction& f);
   fraction plus2();   
   fraction minus2();        

   //comparison
   bool equal( fraction& f);
   bool notequal( fraction& f);
   bool less( fraction& f);
   bool more( fraction& f);
   bool lessequal( fraction& f);
   bool moreequal( fraction& f);

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

fraction fraction::plus( fraction& f){
   int a=num*f.getDenominator()+de*f.getNumerator();
   int b=f.getDenominator()*de;
   
    return fraction(a,b);
} 

fraction fraction::minus( fraction& f){
   int a=num*f.getDenominator()-de*f.getNumerator();
   int b=f.getDenominator()*de;
   
    return fraction(a,b);
} 
fraction fraction::multiple(fraction&f){
   int a =num*f.getNumerator();
   int b= de*f.getDenominator();

   return fraction(a,b);
}
fraction fraction::divide(fraction&f){
   int a =num*f.getDenominator();
   int b=de*f.getNumerator();

   return fraction(a,b);
}

fraction fraction::plus2(){
   int a = num+de;
   int b = de;
   return fraction(a,b);
}

fraction fraction::minus2(){
   int a = num-de;
   int b =de;
   return fraction(a,b);
}
//comparison
bool fraction::equal(fraction&f){
   if(num==f.getNumerator()&&de==f.getDenominator()){
      return true;
   }else{
      return false;
   }
   
}

bool fraction::notequal(fraction&f){
   if(num!=f.getNumerator()&&de!=f.getDenominator()){
   return true;}
   else{
      return false;
   }

}

bool fraction::less(fraction&f){
 if(num*f.getDenominator()<de*f.getNumerator()){
      return true;}
      else{
         return false;
      }
 }

bool fraction::lessequal(fraction&f){
   if(num*f.getDenominator()<=de*f.getNumerator()){
      return true;
   }else{
      return false;
   }

}

bool fraction::more(fraction&f){
   if(num*f.getDenominator()>de*f.getNumerator()){
      return true;
   }else{
      return false;
   }
   
}

bool fraction::moreequal(fraction&f){
   if(num*f.getDenominator()>=de*f.getNumerator()){
   return true;}
   else{
      return false;
   }
}

void fraction::output(){
    cout<<num<<"/"<<de;
}
