#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    int k, v; // nustatomi kintamieji
    ifstream fd("data.txt"); // atidaromas duomenu failas
    ofstream fr("rez.txt"); // sukuriamas rezultatu failas
    fd >> k >> v;// istatomas skaicius i kintamuosius
    if (k<v) // patikrinami kintamieji, kad nustatyti, kuris didesnis
        fr << "maziau zibuokliu prazydo kiskiu miske";
    else
        fr << "maziau zibuokliu prazydo vilku miske";

    fd.close(); // uzdaromi failai
    fr.close();
    return 0;
}
