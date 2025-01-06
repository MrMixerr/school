#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    int m, n, ats; // nustatomi kintamieji
    ifstream fd("data.txt"); // atidaromas duomenu failas
    ofstream fr("rez.txt"); // sukuriamas rezultatu failas
    fd >> m  >> n;// istatomas skaicius i kintamuosius
    ats=(m*n)/1000000; // sugadint kad gauti teisinga rezultata ir padalint is 1000000 kad paversti i kilogramus
    if (ats>1) // patikrinami kintamieji, kad nustatyti, kuris didesnis
        fr << "zuvu stebejimu pakanka";
    else
        fr << "zuvu stebejimu nepakanka";

    fd.close(); // uzdaromi failai
    fr.close();
    return 0;
}

