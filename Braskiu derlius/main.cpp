#include <iostream>
#include <fstream>

using namespace std;

void Skaitymas(int& n, int Kg[]);
void Rasymas(int n, int dien1, int dien2, int dien3, int v1,int v2, int v3);
void Skaiciavimas(int n, int Kg[], int A[], int B[], int C[]);

int main()
{
    int Kg[50];
    int n;

    int Dkg[50], Pkg[50], Tkg[50]; // dkg desim 10 kg po viena diena; dkg desim 10 kg po viena diena;
    int visod, visop, visot; // visod - viso kg 10; visop - viso kg 5; visod - viso kg 3;


    Skaitymas(n,Kg);
    Skaiciavimas(n,Kg,Dkg,Pkg,Tkg);

    return 0;
}


void Skaitymas(int& n,int Kg[]){
    ifstream fd("Duomenys1.txt");
    fd >> n;
    printf("%i \n",n);
    for(int i=0; i<n; i++){
        fd >> Kg[i];
        cout << Kg[i] << endl;
    }
    fd.close();
}

void Rasymas(int n, int dien1, int dien2, int dien3, int v1,int v2, int v3){
    ofstream fr("Rezultatai1.txt");
    v1=0;
    v2=0;
    v3=0;
    for(int i=0; i<n; i++){

        cout << i << " diena: " << dien1 << " " << dien2 << " " << dien3 << " " << endl;
        v1+=dien1;
        v2+=dien2;
        v3+=dien3;
    }
    fr << "Is viso: " << v1 << "" << v2 << "" << v3 << "" << endl;
    fr.close();
}

void Skaiciavimas(int n, int Kg[], int A[], int B[], int C[]){
    for(int i=0; i<n; i++){
        A[i]=Kg[i]/10;
        if(Kg[i]%10){
            B[i]=Kg[i]%10;
        } else{
            B[i]=Kg[i]
        }


        printf("%i %i \n", A[i], B[i], C[i]);
    }
}
