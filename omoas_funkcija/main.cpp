#include <iostream>
#include <fstream>
#include <iomanip>

using namespace std;

void skaiciavimas(int a, int b,int c, int &i, int &u, int &r);

int main()
{
    int i,u,r,n,ats;
    ifstream fd("data.txt");
    ofstream fr("rez.txt");
    fd >> n;
    for(int j=1; j<=n; j++){
        fd >> i >> u >> r;
        skaiciavimas(i,u,r, i,u,r);
        cout << setw(3) << i << setw(3) << u <<  setw(3) << r << endl;
    }
    fr.close();
    fd.close();
    return 0;
}
void skaiciavimas(int a, int b, int c, int &i, int &u, int &r){
    if (a==0){
        i=c*b;
    }
    else if(b==0){
        u=a*c;
    }
    else{
        r=a/b;
    }
}
