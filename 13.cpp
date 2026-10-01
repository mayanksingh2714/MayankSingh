# include <iostream>
using namespace std ;

class to_calculate_area
{
    public :

    float area (float r)
    {
        return 3.14*r*r ;
    }

    int area (int a,int b)
    {
        return a*b ;
    }

    int area (int a)
    {
        return a*a ;
    }
};

int main ()
{
    to_calculate_area s ;

    cout << s.area(2) << endl << s.area(2.5f) << endl << s.area(2,4) << endl ;

    return 0;


}