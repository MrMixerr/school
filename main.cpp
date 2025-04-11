// 90.3 sportininkai
#include <iostream>
#include <iomanip>
#include <fstream>
#include <cmath>

using namespace std;

void Skaitymas(int& n, int& a, int& b, int& c, double D[], double E[],int F[]);
void KMI_skaiciavimas(int n, double A[], double B[], double KMI[]);
int Didelis(int n, double A[]);
int Mazas(int n, double A[]);
void Rasymas(int n, double A[], double B[], double C[], int D[]);

int const ind = 100;


int main()
{
    int r,b,a;
    int n;
    double Kg[ind],M[ind],KMI[ind];
    int Kcal[ind];
    Skaitymas(n,r,b,a,Kg,M,Kcal);
    Rasymas(n,Kg,M,KMI,Kcal);

    return 0;
}

void Skaitymas(int& n, int& a, int& b, int& c, double D[], double E[],int F[]){
    ifstream paulius("data.txt");
    paulius >> a >> b >> c;
    paulius >> n;
    for(int i=0; i<n; i++){
        paulius >> D[i] >> E[i] >> F[i];
        // printf("%f %f %i \n", D[i], E[i],F[i]);
    }
    paulius.close();
}


void KMI_skaiciavimas(int n, double A[], double B[], double KMI[]){
    for(int i=0; i<n; i++){
        KMI[i]=A[i]/(pow(B[i],2));
        // printf("%f \n", KMI[i]);
    }
}


int Didelis(int n, double A[]){
    double maxx=A[0];
    int maxi=0;
    for(int i=0; i<n; i++){
        if(maxx<A[i]){
            maxx=A[i];
            maxi=i;

        }
        printf("%i", A[i]);
        return maxi;
    }
}
int Mazas(int n, double A[]){
    double min=A[0];
    int mini=0;
    for(int i=0; i<n; i++){
        if(min>A[i]){
            min=A[i];
            mini=i;
            printf("%i", mini);
        }
        return mini;
    }
}
void Rasymas(int n, double A[], double B[], double C[], int D[]){

    ofstream saulius("rez.txt");

    KMI_skaiciavimas(n,A,B,C);

    for(int i=0; i<n; i++){
        saulius << i+1 << " " << fixed << setprecision(0) << C[i] << endl;
    }
    Didelis(n,A);

    saulius.close();
}
