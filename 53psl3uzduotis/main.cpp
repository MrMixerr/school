#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    int n,u;
    ifstream fd("data.txt");
    ofstream fr("rez.txt");
    fd >> n;
    s=0;
    k=0;
    for(int i=1; i<=n; i++){
        fd >> u;
        if(p<0)
        {
            k++;
            s=s+p;
        }
    }
    fr << "prekes ne didesnes uz 14 litu, yra k = "<< k << endl;
    fr << "Uz jas reikes moketi s = "<< s << endl;
    fd.close();
    fr.close();
    return 0;
}


