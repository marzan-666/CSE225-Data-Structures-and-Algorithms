#include<iostream>
using namespace std;

int fact(int n){
    if(n>1){
        return n*(n-1);
    }
    else{
        return 1;
    }
}

int main(){
    int i;
    cout<<"Enter value: "<<endl;
    cin>>i;
    cout<<fact(i);

    return 0;

}
