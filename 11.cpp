//write a c++ program to overload a function add() that performs the following tasks.
# include <iostream>
using namespace std ;

class addition 
{
    public :

    int add (int a,int b)
    {
        return a+b ;
    }

    int add (int a,int b,int c)
    {
        return a+b+c ;
    }
};

int main ()
{
    addition s ;

    cout << s.add(2,3) << endl ;
    cout << s.add(2,3,4) << endl ;

    return 0;

}


