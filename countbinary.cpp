#include<iostream>                 //header files
using namespace std;
int binaryCounter(int n){      
    int count = 1;
    while (n>1)
    {
        count++;  //increamenting
        n = n/2;
    }
    return count;      //returning count
}

int main(){
    cout<<binaryCounter(10);   // printing output

    return 0;
}
