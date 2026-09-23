#include <iostream>

using namespace std;
//pojedynczy fragment kolejki
struct kolejka
{
    int nr;
    kolejka* nastepny;
};
//wskazuje poczatek i koniec kolejki
class uczen
{
    kolejka* poczatek;
    kolejka* koniec;

public:
//ustawia pocz¹tek i koniec kolejki na null a nastêpnie dodaje pierwszy numer ucznia
    uczen(int nr)
    {
        poczatek=NULL;
        koniec=NULL;
        dodaj(nr);
    }
//funkcja dodaj¹ca nowego ucznia na koniec kolejki
    int dodaj(int nr)
    {
        kolejka* nowy=new kolejka;
        nowy->nr=nr;
        nowy->nastepny= NULL;

        if(poczatek==NULL)
        {
            poczatek=nowy;
            koniec=nowy;
        }
        else
        {
            koniec->nastepny=nowy;
            koniec=nowy;
        }
        return 0;
    }
//funkcja wyœwietlaj¹ca wszystkie elementy kolejki
    void wypisz()
    {
        kolejka* temp=poczatek;

        while(temp!=NULL)
        {
            cout<<temp->nr<< " ";
            temp=temp->nastepny;
        }
        cout<<endl;
    }
//funkcja usuwa z tabeli wszystkie elementy
    void usun()
    {
        while(poczatek!=NULL)
        {
            kolejka* temp=poczatek;
            poczatek=poczatek->nastepny;
            delete temp;
        }
        koniec=NULL;
    }
//usuwa wszystkie elementy kolejki aby nie pozostawic niepotrzebnych danych
    ~uczen()
    {
        usun();
    }
};

int main()
{
    uczen uczniowie(1);
    uczniowie.dodaj(2);
    uczniowie.dodaj(3);
    uczniowie.dodaj(4);
    uczniowie.dodaj(5);

    cout << "kolejka ";
    uczniowie.wypisz();

    uczniowie.usun();

    cout<<"usnieto ";
    uczniowie.wypisz();

    return 0;
}
