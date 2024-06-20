#include <iostream>
using namespace std; 
int main(){ 
    int a,b,c; 
    cin>>a>>b>>c;
    if (a>b){ 
        if (a>c){
            cout<<"A is the largest"
<<endl;
            }
            cout<<"C is largest"<<endl; 

    }
    else if (b>c){ 
        cout<<"B is the largest"<<endl;
    }
    else{ 
        cout<<"C is the largest"<<endl; 
    }

    return 0 ; 
}