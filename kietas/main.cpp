#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    int n,t,m,vid;
    ifstream fd("data.txt");
    ofstream fr("rezai.txt");
    m=0;
    vid=0;
    fd>>n;
    for(int i=1; i<=n; i++){
       fd>>t;
       m=m+t;
    }
    vid=m/n;
    fr<<m<<endl;
    fr<<vid<<endl;
    return 0;
}
