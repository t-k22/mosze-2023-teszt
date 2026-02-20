#include <iostream>

constexpr int N_ELEMENTS = 100;

int main()
{
    // int *b = new int[NELEMENTS]; // HIBA: NELEMENTS nincs definiálva (N_ELEMENTS a helyes)
    // std::cout << '1-100 ertekek duplazasa' // HIBA: szimpla idézőjel és hiányzó pontosvessző
    // for (int i = 0;) // HIBA: hiányzó feltétel és növekmény
    {
        // b[i] = i * 2;
    }
    // for (int i = 0; i; i++) // HIBA: a ciklusfeltétel hibás (i=0-nál kilép)
    {
        // std::cout << "Ertek:" // HIBA: hiányzó pontosvessző és érték
    }    
    std::cout << "Atlag szamitasa: " << std::endl;
    // int atlag; // HIBA: nincs inicializálva (garbage value)
    // for (int i = 0; i < N_ELEMENTS, i++) // HIBA: vessző pontosvessző helyett
    {
        // atlag += b[i] // HIBA: hiányzó pontosvessző
    }
    // atlag /= N_ELEMENTS;
    // std::cout << "Atlag: " << atlag << std::endl;
    // return 0; // HIBA: memóriaszivárgás (delete[] b hiányzik)
}
