Kolejka uczniów w C++
Opis projektu

Program przedstawia prostą implementację kolejki jednokierunkowej w języku C++ z wykorzystaniem listy wiązanej.

Każdy element kolejki przechowuje numer ucznia oraz wskaźnik na kolejny element. Klasa uczen zarządza początkiem i końcem kolejki.

Kolejka działa zgodnie z zasadą FIFO (First In, First Out) — pierwszy dodany element jest pierwszym elementem usuwanym.

Funkcjonalności

Program umożliwia:

utworzenie kolejki,

dodawanie uczniów na koniec kolejki,

wyświetlanie wszystkich elementów,

usunięcie wszystkich elementów kolejki,

automatyczne zwolnienie pamięci przy usuwaniu obiektu.

Struktura danych

Pojedynczy element kolejki jest reprezentowany przez strukturę:

struct kolejka
{
    int nr;
    kolejka* nastepny;
};


Element zawiera:

nr — numer ucznia,

nastepny — wskaźnik na następny element kolejki.

Klasa uczen przechowuje dwa wskaźniki:

kolejka* poczatek;
kolejka* koniec;


poczatek wskazuje pierwszy element kolejki, a koniec wskazuje ostatni.

Dostępne funkcje
dodaj(int nr)

Dodaje nowego ucznia na koniec kolejki.

wypisz()

Wyświetla wszystkie numery uczniów znajdujące się aktualnie w kolejce.

usun()

Usuwa wszystkie elementy kolejki i zwalnia zajmowaną przez nie pamięć.

~uczen()

Destruktor klasy automatycznie wywołuje funkcję usun(), dzięki czemu pamięć zaalokowana dynamicznie jest zwalniana.

Przykład działania

W programie do kolejki dodawani są uczniowie o numerach:

1 2 3 4 5


Wynik działania:

kolejka 1 2 3 4 5
usnieto


Po wykonaniu funkcji usun() kolejka jest pusta.

Kompilacja

Program można skompilować za pomocą kompilatora g++:

g++ main.cpp -o kolejka


Następnie uruchomić:

Windows
kolejka.exe

Linux / macOS
./kolejka

Wykorzystane technologie

C++

wskaźniki

struktury (struct)

klasy

dynamiczna alokacja pamięci (new / delete)

lista jednokierunkowa

kolejka FIFO

Autor

Projekt edukacyjny dotyczący implementacji kolejki w języku C++.
