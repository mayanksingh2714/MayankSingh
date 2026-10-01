// to dynamically generate array , read and display
# include <iostream>
using namespace std ;

class array_
{
    public :

    int size =0 ;
    int *ptr = nullptr ;

    void get_size ()
    {
        cin >> size;
    }

    void array_generator ()
    {
        ptr = new int[size];
    }

    void take_input ()
    {
        for (int i=0;i<size;i++)
        cin >> ptr[i];
    }

    void display_array ()
    {
        for (int i=0;i<size;i++)
        cout << ptr[i] << " ";
    }

    ~array_ ()
    {
        delete[] ptr;
    }

};

int main ()
{
    array_ s1;
    s1.get_size();
    s1.array_generator();
    s1.take_input ();
    s1.display_array ();

    return 0;
}