#include <iostream>
#include <fstream> // reikalinga biblioteka

using namespace std;

int main()
{
    int sum,n,x,b,t,k; // surasyti reikiami kintamieji
    ifstream fd("data.txt");
    ofstream fr("rezas.txt");
    fd>>n>>x>>b;
    sum = 0;

    for(int i = 1; i <= n; i++){
        fd>>t>>k;
        sum=sum+t+(x-k)*b;

    }
    fr<<sum;
    fd.close();
    fr.close();

    return 0;
}
