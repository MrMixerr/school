#include <iostream>
#include <fstream>

const int MAX = 10000;

using namespace std;

void Skaitymas(int& n, int A[], int B[]);
void Kova(int n, int& roundai, int A[], int B[], int Ats[]);
bool Vienodi(int a, int b);
int Didesnis(int a, int b);
void Sumos(int n, int A[], int B[], int& d_i, int salyga, int& S1, int& S2);
void Rasymas(int n, int Ats[]);

int main()
{
    int N, roundai;
    int Si[MAX];
    int Vi[MAX];
    int Ats[MAX];
    Skaitymas(N,Si,Vi);
    Kova(N,roundai,Si,Vi,Ats);
    Rasymas(roundai,Ats);
    return 0;
}


void Skaitymas(int& n, int A[], int B[]){
    ifstream fd("data.txt");
    fd >> n;
    // cout << n << endl;
    for(int i=0; i<n; i++){
        fd >> A[i] >> B[i];
        // cout << A[i] << " " << B[i] << endl;
    }

    fd.close();
}

void Kova(int n, int& roundai, int A[], int B[], int Ats[]){
    int Suma1, Suma2;
    int d_i=-1;
    int kortu_s1, kortu_s2;
    bool stiprumas;
    bool duagiau_kortu;
    roundai=0;

    while(n>=10){
        roundai++;
        n-=10;
    }
    for(int i=1; i<=roundai; i++){
        Suma1=0;
        Suma2=0;
        Sumos(10,A,B,d_i,-1,Suma1,Suma2);
        if(Vienodi(Suma1, Suma2)==false){
            Ats[i]=Didesnis(Suma1, Suma2);
        } else {
            d_i=-1;
            Suma1=0;
            Suma2=0;
            Sumos(10,A,B,d_i,0,Suma1,Suma2);
            if(Vienodi(Suma1, Suma2)==false){
                Ats[i]=Didesnis(Suma1, Suma2);
            } else{
                for(int j=1; j<4; j++){
                    d_i=-1;
                    Suma1=0;
                    Suma2=0;
                    Sumos(10,A,B,d_i,j,Suma1,Suma2);
                    if(Vienodi(Suma1, Suma2)==false){
                        Ats[i]=Didesnis(Suma1, Suma2);
                    } else {
                        j=50;
                    }
                }
            }
        }
    }
}

bool Vienodi(int a, int b){
    if(a==b){
        return true;
    } else {
        return false;
    }
}

void Sumos(int n, int A[], int B[], int& d_i, int salyga, int& S1, int& S2){
    if(salyga==-1){
        for(int j=0; j<n; j++){
            d_i++;
            if(j>=5){
                S2+=A[d_i];
            } else{
                S1+=A[d_i];
            }
        }
    }
    else if (salyga==0) {
        for(int j=0; j<n; j++){
            d_i++;
                if(j>=5){
                    S2+=A[d_i];
                } else{
                    S1+=A[d_i];
                }
            }
        }
    else{
        for(int j=0; j<n; j++){
            d_i++;
            if(A[j]==salyga){
                if(j>=5){
                    S2+=A[d_i];
                } else{
                    S1+=A[d_i];
                }
            }
        }
    }
}

int Didesnis(int a, int b){
    if(a>b){
        return 1;
    } else if(a<b){
        return 2;
    }
}

void Rasymas(int n, int Ats[]){
    ofstream fr("rez.txt");
    int a,b,c;
    a=0;
    b=0;
    c=0;
    for(int i=1; i<=n; i++){
        switch(Ats[i]){
            case 1:
                a++;
                break;
            case 2:
                b++;
                break;
            case 3:
                c++;
                break;
        }
    }
    fr << a << endl;
    fr << b << endl;
    fr << c << endl;
    fr.close();

}
