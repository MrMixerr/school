#include <iostream>
#include <fstream>

using namespace std;

void Skaityti(int &n, int K[]);
void Visuma(int K[],int n, int &a);
void Nelijo(int K[],int n, int &a);
void Vidurkis(int n, int &a, int b, int c);
void Lijo(int K[],int n, int &a);
void Vis_vidurkis(int n, int &a, int b);
void Rasymas(int n, int K[], int a, int b, int c, int d, int e);


int main()
{
    int K[10],n, nl,vis,vid,ll,vis_vid;
    Skaityti(n,K);
    Nelijo(K,n,nl);
    Visuma(K,n,vis);
    Vidurkis(n,vid,nl,vis);
    Lijo(K,n,ll);
    Vis_vidurkis(n,vis_vid,vis);
    Rasymas(n,K,vis,nl,vid,ll,vis_vid);
    return 0;
}

void Skaityti(int &n, int K[]){
    ifstream fd("data.txt");
    fd>>n;
    for(int i=0; i<n; i++){
        fd>>K[i];
    }
    fd.close();
}
void Visuma(int K[],int n, int &a){
    a=0;
    for(int i=0; i<n; i++){
        a+=K[i];
    }
}
void Nelijo(int K[],int n, int &a){
    a=0;
    for(int i=0; i<n; i++){
        if(K[i]==0){
            a++;
        }
    }
}
void Vidurkis(int n, int &a, int b, int c){
    a=c/(n-b);
}

void Lijo(int K[],int n, int &a){
    a=0;
    for(int i=0; i<n; i++){
        if(K[i]!=0){
            a++;
        }
    }
}
void Vis_vidurkis(int n, int &a, int b){
    a=b/n;
}
void Rasymas(int n, int K[], int a, int b, int c, int d, int e){
    ofstream fr("rez.txt");
    fr << "Krituliai (lietus)" << endl;
    fr << "----------------------" << endl;
    fr << "Diena  Krituliø kiekis" << endl;
    fr << "----------------------" << endl;
    for(int i=0; i<n; i++){
        fr << i+1 << "         " << K[i] << endl;
    }
    fr << "----------------------" << endl;
    fr << "Is viso  iskrito krituliu (mm): " << a << endl;
    fr << "Nelijo (dienas): "<< b << endl;
    fr<< "Vidutiniskai kiekviena lietinga diena iskrito krituliu (mm): " << c << endl;
    fr << "Lijo (dienas): "<< d << endl;
    fr<< "Vidutiniskai kiekviena diena iskrito krituliu (mm): " << e << endl;
    fr.close();
}

