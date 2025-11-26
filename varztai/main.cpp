#include <iostream>
#include <fstream>

const int MAX = 100;

using namespace std;
void Skaitymas(int& n, int& m, int A[], int B[]);
void Reikalinga(int& n, int& m, int A[], int B[]);

int main()
{
    int n,m;
    int Varz[MAX];
    int Verz[MAX];
    Skaitymas(n,m,Varz,Verz);
    Reikalinga(n,m,Varz,Verz);

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
    int ka=0;
    for(int i=0; i<n; i++){
        cout << A[i] << endl;
        for(int j=0; j<m; j++){
            if(A[i]==B[j]){
                cout << A[i] << " ";
            }
        }
        cout << endl;
    }
}

