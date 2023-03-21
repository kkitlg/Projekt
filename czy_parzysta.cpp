#include <iostream>

using namespace std;

bool czy_parzysta (int liczba_calkowita)
{
    if (liczba_calkowita%2 == 0)
        return true;
    else
        return false;
}

bool test_czy_parzysta (int testowana_liczba, bool oczekiwany_wynik)
{
    bool wynik;
    wynik = czy_parzysta (testowana_liczba);
    if (wynik == oczekiwany_wynik)
    {
        return true;
    }
    else
    {
        return false;
    }
}

int main()
{
    int liczba_calkowita = 5;
    bool wynik;
    cout << "Program sprawdza czy cyfra 5 jest parzysta:" << endl << endl;
    wynik = czy_parzysta (liczba_calkowita);
    if (wynik == 0)
    {
        cout << "Nie" << endl << endl;
    }
    else
    {
        cout << "Tak" << endl << endl;
    }

    bool wynik_testu;
    cout << "Uruchomienie testu dla 1:" << endl << endl;
    wynik_testu = test_czy_parzysta (1, false);
    if (wynik_testu == 0)
    {
        cout << "Test sie nie powiodl" << endl << endl;
    }
    else
    {
        cout << "Test sie powiodl" << endl << endl;
    }
    cout << "Uruchomienie testu dla 2:" << endl << endl;
    wynik_testu = test_czy_parzysta (2, true);
    if (wynik_testu == 0)
    {
        cout << "Test sie nie powiodl" << endl << endl;
    }
    else
    {
        cout << "Test sie powiodl" << endl << endl;
    }

    return 0;
}
