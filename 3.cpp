// making array of object using c++
# include <iostream>
using namespace std ;

class qw
{
    public :

    int a;

    void store_the_value ()
    {
        cin >> a ;
    }

    void  display_the_value ()
    {
        cout << a << " " ;
    }
}b[5];

int main ()
{
    for (int i=0;i<5;i++)
    b[i].store_the_value();

    for (int i=0;i<5;i++)
    b[i].display_the_value();

    return 0;
}