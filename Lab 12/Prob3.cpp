#include<iostream>
using namespace std;

int SumOfDigits(int n){
    if(n==1){
        return 1;
    }
    else{
        return n+SumOfDigits(n-1);
    }
}

int main(){
    int i;
    cout<<"Enter value: "<<endl;
    cin>>i;
    cout<<SumOfDigits(i);

    return 0;
}
