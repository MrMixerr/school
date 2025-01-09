#include <iostream>
#include <fstream>

using namespace std;

void skaiciavimas(int a, int b, int c, int d, int e, int f, int g, int h, int ats);


int main()
{
    int n,ats;
    int av,am,isv,ism;
    int av1,am1,isv1,ism1;
    ifstream fd("data_test.txt");
    ofstream fr("rez.txt");
    ats=0;
    fd >> n;
    for(int i=1; i<=n; i++){
        fd >> av >> am >> isv >> ism >> av1 >> am1 >> isv1 >> ism1;
        skaiciavimas(av,am,isv,ism,av1,am1,isv1,ism1,ats);

    }


    fd.close();
    fr.close();
    return 0;
}
void skaiciavimas(int a, int b, int c, int d, int e, int f, int g, int h, int ats){
    b+=a*60;
    d+=c*60;
    f+=e*60;
    h+=g*60;
    ats=(b+d+f+h)/24;
    cout << ats/60 << " ";
    cout << ats%60 << endl;
}
