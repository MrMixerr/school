#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    int m1,m2,m3, sum;
    ifstream fd("data.txt");
    ofstream fr("rez.txt");
    fd>>m1;
    fd>>m2;
    fd>>m3;
    if (m1>m2&&m1>m3){
        fr << m1 << endl;
        m2=m1/10;
        m3=m1%10;
        sum=m2+m3;
        fr << sum << endl;
    }
    else if (m2>m1&&m2>m3){
        fr << m2 << endl;
        m1=m1/10;
        m3=m1%10;
        sum=m1+m3;
        fr << sum << endl;
    }
    else{
        fr << m3 << endl;
        m2=m1/10;
        m1=m1%10;
        sum=m1+m2;
        fr << sum << endl;
    }
    fd.close();
    fr.close();
    return 0;
}
