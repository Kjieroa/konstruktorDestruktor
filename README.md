# Kolejka uczniów w C++

## Opis projektu

Program przedstawia prostą implementację kolejki jednokierunkowej w języku C++ z wykorzystaniem listy wiązanej.

Każdy element kolejki przechowuje numer ucznia oraz wskaźnik na kolejny element. Klasa `uczen` zarządza początkiem i końcem kolejki.

Kolejka działa zgodnie z zasadą **FIFO (First In, First Out)** — pierwszy dodany element jest pierwszym elementem usuwanym.

## Funkcjonalności

Program umożliwia:

- utworzenie kolejki,
- dodawanie uczniów na koniec kolejki,
- wyświetlanie wszystkich elementów kolejki,
- usunięcie wszystkich elementów kolejki,
- automatyczne zwalnianie pamięci przy usuwaniu obiektu.

## Struktura danych

Pojedynczy element kolejki jest reprezentowany przez strukturę:

```cpp
struct kolejka
{
    int nr;
    kolejka* nastepny;
};
