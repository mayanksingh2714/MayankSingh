//write a c++ program to overload a function multiply() that multiplies.
# include <iostream>
using namespace std ;

class multiplication 
{
    public :

    int multiply (int a,int b)
    {
        return a*b ;
    }

    int multiply (int a,int b,int c)
    {
        return a*b*c ;
    }
};

int main ()
{
    multiplication s ;

    cout << s.multiply(2,3) << endl ;
    cout << s.multiply(2,3,4) << endl ;

    return 0;

}