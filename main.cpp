#include <iostream>

using namespace std;

double trasa, spalanie, cena, x;

int main()
{
    cout << "Jaki jest dystans trasy:" ;
    cin >> trasa;

    cout << "Jakie jest spalanie auta:";
    cin >> spalanie;

    cout << "Jaka jest cena paliwa:";
    cin >> cena;

    x = (spalanie/100)*cena*trasa;

    cout<< endl<< "Koszt trasy to:"<<x;


    return 0;
}
