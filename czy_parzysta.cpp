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
    cout << "Program sprawdza czy cyfra 5 jest parzysta:" << endl << endl;
    wynik = czy_parzysta (liczba_calkowita);
    if (wynik == 0)
    {
        cout << "Nie" << endl;
    }
    else cout << "Tak" << endl;
    return 0;
}
