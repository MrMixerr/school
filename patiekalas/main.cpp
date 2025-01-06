#include <iostream>
#include <fstream>

using namespace std;

double skai(double a, double b);

int main()
{
    int n,m;
    double r,b,a,r1,b1,a1,m1;
    ifstream fd("data.txt");
    ofstream fr("rez.txt");
    fd >> n;
    r=0;
    b=0;
    a=0;
    m=0;
    for(int i=0; i<n; i++){
        fd >> r >> b >> a >> m;
        r1+=r;
        b1+=b;
        a1+=a;
        m1+=m;
    }
    fr << fixed << setprecision(2) << skai(r1,m1) << endl;
    fr << fixed << setprecision(2) << skai(b1,m1) << endl;
    fr << fixed << setprecision(2) << skai(a1,m1) << endl;
    fd.close();
    fr.close();
    return 0;
}
double skai(double a, double b){
    return a/b*100;
}
