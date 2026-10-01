//implementation of tower of hanoi problem//
#include <iostream>
using namespace std;
void t_h_p_(int n, char A, char B,char C){
    if(n == 1){
        cout<<"\n"<<A<<" -> "<<C;
    }
    else {
        t_h_p_(n-1,A,C,B);  // using top to n-1 disk from a to b using c as intermideate 
         cout<<"\n"<<A<<" -> "<<C;
         t_h_p_(n-1,B,A,C);  // using top to n-1 disk from b to b using a as intermideate 
    }
}
int main () {
    int n;
    cout<<"Enter number of disk :: ";
    cin>>n;
    t_h_p_(n,'A','B','c');

}