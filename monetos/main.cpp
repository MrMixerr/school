#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    int k, ats, km; // nustatomi kintamieji
    double D;
    ifstream fd("data.txt"); // atidaromas duomenu failas
    ofstream fr("rez.txt"); // sukuriamas rezultatu failas
    fd >> k >> D >> km;// istatomas skaicius i kintamuosius
    ats=(k*D)*100; //
    if (ats) // patikrinami kintamieji, kad nustatyti, kuris didesnis
        fr << "zuvu stebejimu pakanka";
    else
        fr << "zuvu stebejimu nepakanka";

    fd.close(); // uzdaromi failai
    fr.close();
    return 0;
}

