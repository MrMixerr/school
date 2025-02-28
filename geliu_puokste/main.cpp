#include <iostream>
#include <fstream>

using namespace std;

void Skaitymas(int& n, int B[]);
int IlgiausiaiZydi(int A[], int n);
void Rasymas(int n, int B[], int c);

int main()
{
    int n,G[50],ilg;
    Skaitymas(n,G);
    ilg=IlgiausiaiZydi(G,n);
    // cout << ilg << endl;
    Rasymas(n,G,ilg);
    return 0;
}

void Skaitymas(int& n, int B[]){
    ifstream fd("data.txt");
    fd >> n;
    for(int i=0; i<n; i++){
        fd >> B[i];
        // cout << B[i] << endl;
    }
    fd.close();
}

int IlgiausiaiZydi(int A[], int n){
    int max = A[0];
    for(int i = 1; i < n; i++){
        if(A[i] > max){
            max = A[i];
        }
    }
    return max;
}
void Rasymas(int n, int B[], int c){
    ofstream fr("rez.txt");

    for(int i=0; i<n; i++){
        fr << i << "     " << B[i];

    }
    fr.close();
}

