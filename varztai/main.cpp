#include <iostream>
#include <fstream>
#include <string>

const int MAX = 100;

using namespace std;

void Skaitymas(int& n, int& m, int A[], int B[]);
void Reikalinga(int& n, int& m, int A[], int B[]);
void Pasalinti(int &n, int A[], int B[], int rind);
void Sudelioti(int n, int A[], int B[]);

int main()
{
    int n,m;
    int Varz[MAX];
    int Verz[MAX];
    int Truk_verz[MAX];
    int Truk_varz[MAX];



    Skaitymas(n,m,Varz,Verz);
    Reikalinga(n,m,Varz,Verz);
    Reikalinga(n,m,Varz,Verz);
    Sudelioti(n,Varz,Truk_verz);

    return 0;
}


void Skaitymas(int& n, int& m, int A[], int B[]){
    ifstream fd("data.txt");
    fd >> n;
    for(int i=0; i<n; i++){
        fd >> A[i];
    }
    fd >> m;
    for(int i=0; i<m; i++){
        fd >> B[i];
    }
    fd.close();
}

void Reikalinga(int& n, int& m, int A[], int B[]){
    for(int i=0; i<n; i++){
        for(int j=0; j<=m; j++){
            if(A[i]==B[j]){
                Pasalinti(n,A,B,i);
                Pasalinti(m,B,A,j);
            }
        }
    }
}

void Pasalinti(int &n, int A[], int B[], int rind){
    for(int i = rind; i <= n-1; i++){
        A[i]=A[i+1];
    }
    n--;
}

void Sudelioti(int n, int A[], int B[]){
    int liek=0;
    int kiek=0;
    for(int i=0; i<n; i++){
        liek=A[i];
        if(liek==A[i+1]){
            kiek++;
            cout << kiek << endl;
        }
        else{
            liek=A[i];
            cout << liek << endl;
        }

    }
}


