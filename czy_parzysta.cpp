#include <iostream>

using namespace std;

bool czy_parzysta (int liczba_calkowita)
{
    if (liczba_calkowita%2 == 0)
        return true;
    else
        return false;
}

int main()
{
    int liczba_calkowita = 5;
    bool wynik;
    wynik = czy_parzysta (liczba_calkowita);
    cout << wynik;
    return 0;
}
