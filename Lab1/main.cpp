
#include <iostream>
#include "dynamicArray.h"
using namespace std;

int main() {

int temp;
int size=5;
dynamicArray d(size);
for(int i=0;i<size;i++) {
cout<< "Enter value to be inserted  index = "<<i<<endl;
cin>>temp;
d.insertItem(i, temp);
}




cout<< "The values stored are: ";

int temp2;

for(int i=0;i<size;i++) {
temp2 = d.getItem(i);
cout<<"Index = "<<i<<" and Value = "<<temp2<<endl;

}

 return 0;
 }
