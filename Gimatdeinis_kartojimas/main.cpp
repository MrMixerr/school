#include <iostream>
#include <fstream>
#include <iomanip>


using namespace std;

int main()
{
    double k, d, s, r, g;
    ifstream fd("data.txt");
    ofstream fr("rez.txt");
    fd >> d >> s >> r >> g;
    d=d+s+r;
    k=g/d;
    fr << "Vaikai gales skirti kiekvienam sveciui: " << fixed << setprecision(2) << k << " euru" << endl;
    fd.close();
    fr.close();
    return 0;
}
