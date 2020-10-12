#include<iostream>
using namespace std;

int fib(int n){
    if((n==0)||(n==1)){
        return (n);
    }
    else{
        return (fib(n-1)+fib(n-2));
    }
}
int main(){
    int n,i=0;
    cout<<"Enter value: "<<endl;
    cin>>n;
    cout<<"Fibonacci series is: "<<endl;

    while(i<n){
        cout<<" "<<fib(i)<<endl;
        i++;
    }
    //int i;
    //cin>>i;
    cout<<"Fibonacci series: "<<i<<"Th number is: "<<fib(i)<<endl;
    return 0;
}

