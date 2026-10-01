//  code in c++ to generate report card 
# include <iostream>
using namespace std ;

class report_card_generator 
{
    private :

    double marks ;

    public :

    string name ;

    void marks_input ()
    {
        cin >> name >> marks ;
    }

    void report_generator  ()
    {
        cout << name << "=" << marks << endl ;
    }

};

int main ()
{
    int y;
    cin >> y;

    report_card_generator *s = new report_card_generator[y];

    for (int i=0;i<y;i++)
    s[i].marks_input ();

    for (int i=0;i<y;i++)
    s[i].report_generator ();

    delete [] s;

    return 0;
}