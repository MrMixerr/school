#include <iostream>
#include <iomanip>
#include <fstream>



using namespace std;

const int MAX = 100;


void Skaitymas(int& n, int A[], double B[]);
void Rasymas(int n, double A[], double B[], double ats);
void Kainos(int n,int A[],double B[], double C[], double D[]);
double Is_viso(int n, double A[]);

int main()
{
    int n;
    int Kn[MAX];
    double P[MAX];

    double Vid[MAX]; // Vidurkio masyvas
    double Pp[MAX]; // per diena parduotu prekiu masyvas
    double vp;

    Skaitymas(n,Kn,P);
    Kainos(n,Kn,P,Pp,Vid);
    vp=Is_viso(n,P);
    Rasymas(n,Pp,Vid,vp);

    return 0;

}

void Skaitymas(int& n, int A[], double B[]){
    ifstream fd("Duomenys2.txt");
    fd >> n;
    for(int i=0; i<n; i++){
        fd >> A[i] >> B[i];
    }
    fd.close();
}

void Rasymas(int n, double A[], double B[], double ats){
    ofstream fr("Rasymas2.txt");
    if(A[0]>0){
        fr << "Kasininke 1: " << endl;
        fr << "Per diena pardave prekiu uz " << fixed << setprecision(2) << A[0] << " Eur." << endl;
        fr << "Vidutiniskai viena preke kainavo " << fixed << setprecision(2) << B[0] << " Eur." << endl;
    }
    if(A[1]>0){
        fr << "Kasininke 2: " << endl;
        fr << "Per diena pardave prekiu uz " << fixed << setprecision(2) << A[1] << " Eur." << endl;
        fr << "Vidutiniskai viena preke kainavo " << fixed << setprecision(2) << B[1] << " Eur." << endl;
    }
    if(A[2]>0){
        fr << "Kasininke 3: " << endl;
        fr << "Per diena pardave prekiu uz " << fixed << setprecision(2) << A[2] << " Eur." << endl;
        fr << "Vidutiniskai viena preke kainavo " << fixed << setprecision(2) << B[2] << " Eur." << endl;
    }
    if(A[0]<=0){
        fr << "Kasininke 1: " << endl;
        fr << "Nepardave ne vienos prekes." << endl;
    }
    if(A[1]<=0){
        fr << "Kasininke 2: " << endl;
        fr << "Nepardave ne vienos prekes." << endl;
    }
    if(A[2]<=0){
        fr << "Kasininke 3: " << endl;
        fr << "Nepardave ne vienos prekes." << endl;
    }
    fr << "Per diena parduota preikiu uz " << fixed << setprecision(2) << ats << "Eur. " << endl;
    fr.close();
}

void Kainos(int n,int A[],double B[], double C[], double D[]){
    int p1,p2,p3;
    p1=0;
    p2=0;
    p3=0;
    for(int i=0; i<n; i++){
        C[i]=0;
        D[i]=0;
    }
    for(int i=0; i<n; i++){
        if(A[i]==1){
            p1++;
            C[0]+=B[i];
            D[0]=C[0]/p1;
        }
        if(A[i]==2){
            p2++;
            C[1]+=B[i];
            D[1]=C[1]/p2;
        }
        if(A[i]==3){
            p3++;
            C[2]+=B[i];
            D[2]=C[2]/p3;
        }
    }

}

double Is_viso(int n, double A[]){
    double b;
    for(int i=0; i<n; i++){
        b+=A[i];
    }
    return b;
}
