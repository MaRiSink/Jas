#include <iostream>
#include <windows.h>

using namespace std;

void paradise()
{

}

void death_prisoner()
{
    cout << "" << endl;
    cout << "" << endl;
    cout << "" << endl;
    cout << "" << endl;
}

void death_old_age() //domohozajka; pisatel; wrach-detektiwnyj
{
    cout << "" << endl;
    cout << "" << endl;
    cout << "" << endl;
    cout << "" << endl;
}

void death_pretty_kitty()
{
    cout << "" << endl;
    cout << "" << endl;
    cout << "" << endl;
    cout << "" << endl;
}

void death_arabic_sheikh()
{
    cout << "" << endl;
    cout << "" << endl;
    cout << "" << endl;
    cout << "" << endl;
}

void death_spaceman()
{
    cout << "" << endl;
    cout << "" << endl;
    cout << "" << endl;
    cout << "" << endl;
}

void death_department()
{
    cout << "" << endl;
    cout << "" << endl;
    cout << "" << endl;
    cout << "" << endl;
}

void death_librian()
{
    cout << "" << endl;
    cout << "" << endl;
    cout << "" << endl;
    cout << "" << endl;
}

void death_historical()
{
    cout << "" << endl;
    cout << "" << endl;
    cout << "" << endl;
    cout << "" << endl;
}

void death_0_kidneys()
{
    cout << "" << endl;
    cout << "" << endl;
    cout << "" << endl;
    cout << "" << endl;
}

void death_dantist()
{
    cout << "" << endl;
    cout << "" << endl;
    cout << "" << endl;
    cout << "" << endl;
}

void death_writer()
{
    cout << "" << endl;
    cout << "" << endl;
    cout << "" << endl;
    cout << "" << endl;
}

int main()
{
    HANDLE console_kolor;

   int tab[10][10] =
   {
       {1,1,1,1,0,0,1,1,1,1},
       {1,0,0,0,0,0,0,0,0,1},
       {1,0,0,0,0,0,0,0,0,1},
       {1,0,0,0,0,0,0,0,0,1},
       {1,0,0,0,0,0,0,0,0,1},
       {1,0,0,0,0,0,0,0,0,1},
       {1,0,0,0,0,0,0,0,0,1},
       {1,0,0,0,0,0,0,0,0,1},
       {1,0,0,0,2,0,0,0,0,1},
       {1,1,1,1,1,1,1,1,1,1}

    };


    HANDLE h;

    h = GetStdHandle(STD_OUTPUT_HANDLE);

    for (int i = 0; i < 100; i++ )
    {
        if ( i % 10 == 0)
    {
        cout << endl;
    }
    swich (tab[0][i])
    {
case 0:
    SetConsoleTextAttribute(h, 42);
            cout << tab[0][i] ;
        /*if (tab[0][i] == 1)
        {
           SetConsoleTextAttribute(h, 42);
            cout << tab[0][i] ;

        }
        if (tab[0][i] == 0)
        {
            SetConsoleTextAttribute(h, 48);
            cout << tab[0][i];

        }*/
    }
    cout<<endl;
    SetConsoleTextAttribute(h, 0);
}
