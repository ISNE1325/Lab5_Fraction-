#include<iostream>
#include"fraction.cpp"
using namespace std;
int main(){
    fraction f1(-6,9);
    fraction f2(3,4);

    cout << "f1 = ";
    f1.output();
    cout << endl;

    cout << "f2 = ";
    f2.output();
    cout << endl;

    fraction  x= f1.plus(f2);
    cout << "f1 + f2 = ";
    x.output();
    cout << endl;

    fraction y = f1.minus(f2);
    cout << "f1 - f2 = ";
    y.output();
    cout << endl;

    fraction z = f1.multiple(f2);
    cout << "f1 * f2 = ";
    z.output();
    cout << endl;

    fraction w = f1.divide(f2);
    cout << "f1 / f2 = ";
    w.output();
    cout << endl;
    
    cout << "f1 == f2 : " ;
    if(f1.equal(f2)){
        cout<<"TRUE";
    }else{
        cout<<"FALSE";
    }
    cout<<endl;

    cout << "f1 != f2 : " ;
    if(f1.notequal(f2)){
        cout<<"TRUE";
    }else{
        cout<<"FALSE";
    }
    cout<<endl;
    
    cout << "f1 <  f2 : " ;    
    if(f1.less(f2)){
        cout<<"TRUE";
    }else{
        cout<<"FALSE";
    }
    cout<<endl;
    
    cout << "f1 <= f2 : " ;
    if(f1.lessequal(f2)){
        cout<<"TRUE";
    }else{
        cout<<"FALSE";
    }
    cout<<endl;
    
    cout << "f1 >  f2 : ";
    if(f1.more(f2)){
        cout<<"TRUE";
    }else{
        cout<<"FALSE";
    }
    cout<<endl;
    
    cout << "f1 >= f2 : ";
    if(f1.moreequal(f2)){
        cout<<"TRUE";
    }else{
        cout<<"FALSE";
    }
    cout<<endl;
    

return 0;

}