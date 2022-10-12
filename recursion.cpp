//recursion-->jei function nijei nijeke call kore

#include<iostream>
using namespace std;

//0!=1 by defination 
int factorial(int n){
    if(n<=1){
     return 1;
    }
     else 
     return n*factorial(n-1);
}
int fib(int b){
    if(b<2){
        return 1;
    }
    return (fib(b-2)+fib(b-1));
}

int main(){

int a;
cout<<"Enter a number"<<endl;
cin>>a;
cout<<"The factorial of "<<a<< " is "<<factorial(a)<<endl;
cout<<a<<" th number of the fibonacci series is "<<fib(a);  
cout<<"\n The seires is "<<endl;
for (int i = 0; i < a; i++)
{
    cout<< fib(i)<<" ";
    /* code */
}

return 0;
}
