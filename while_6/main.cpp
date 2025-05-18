#include <iostream>
#include <fstream>

using namespace std; 

int main(){
    ifstream fd("duomenys.txt");
    ofstream fr("rezultatai.txt");
    int kk, s;
    int k, ks, p;
    fd >> s;
    p=s;
    k=0;
    ks=0;
    while (s>0)
    {
        fd >> kk; //nusiskaito cia nes yra 2 knygos kurias nori pirkt
        s-=s;
        k++; // kiek knygu nusipirks
        ks+=kk; // kiek kainuoja visos norimos pirkit knygos
        p-=kk; // kiek liko pinigu 
        
    }
    

    fr << "k=" << k << " ks=" << ks << " p=" << p << endl;
    fd.close();
    fr.close();
    return 0;
}