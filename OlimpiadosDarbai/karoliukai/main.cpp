#include <iostream>
#include <fstream>

using namespace std;

const int MAX = 600;

void Skaitymas(int& n, int A[], int B[]);
void Sona(int n, int A[], int pasukti);


int main()
{
    int n;
    int Ai[MAX];
    int Bi[MAX];
    Skaitymas(n,Ai,Bi);
    Sona(n,Ai,0);
    cout << endl;
    Sona(n,Ai,0);
    return 0;
}


void Skaitymas(int& n, int A[], int B[]){
    ifstream fd("data3.txt");
    fd >> n;
    for(int i=0; i<n; i++){
        fd >> A[i];
    }
    for(int i=0; i<n; i++){
        fd >> B[i];
    }
    fd.close();
}

void Sona(int n, int A[], int pasukti){
    int B[MAX];
    for(int i=0; i<n; i++){
        cout << A[i];

        if(pasukti==1){ //paskuti i desine
            B[i+1]=A[i];
            B[0]=A[n-1];
            A[i]=B[i];
            cout << " " << A[i] << endl;
        } else { // pasukti i kaire
            B[i]=A[i+1];
            B[n-1]=A[0];
            A[i]=B[i];
            cout << " " << B[i] << endl;
        }
    }
}
