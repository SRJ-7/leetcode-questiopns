#include<iostream>
using namespace std;
int main(){
    // cout<<"Namaste Dunia :-)" <<endl; //endl to create new line
    // cout<<"Namaste Dunia :-)" << '\n';
    // // cout<<"Namaste Dunia :-)\n";
    // int a=123;
    // cout << a << endl;
    // char b = 'a';
    // cout << b << endl;
    // bool bl = true;
    // cout << bl << endl;
    // float f=1.2;
    // cout<< f << endl;
    // double d=1.23;
    // cout<< d << endl;

    // int size = sizeof(d); 
    // cout << "Size of a is : "<<  size << endl;
    // unsigned int a1 = 12345;
    // cout << a1 << endl;

    // int a=2;
    // int b=3;

    // bool first = (a<=b);
    // cout << first << endl;
    
    int a;
    cin>> a;
    // a= cin.get();  //a='1' -> 49 ASCII value
    // cout << "value of n is :"<< a  << endl;
    if(a>0){
        cout<< "Pos." << endl;

    }
    // else{
    //     if(a<0){
    //         cout<<"Neg." <<endl;
    //     }
    //     else{
    //         cout<<"Zero"<<endl;
    //     }
    // }
       if(a%2==0){
        cout<< "EVEN" << endl;

    }
       else if(a<=10){
        cout<< "less than 10" << endl;

    }


   
} 

