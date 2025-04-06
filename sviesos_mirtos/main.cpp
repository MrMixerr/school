#include <iostream>
#include <iomanip>
#include <fstream>

using namespace std; 

int const in_ = 100;

void Skaitymas(int& a, int& b, int C[]);
void Keitimas(int a, int b, int C[]);

int main(){ 
    int Sv[in_];
    int n, nk;
    Skaitymas(n,nk,Sv);
    Keitimas(n,nk,Sv);
    return 0;
}

void Skaitymas(int& a, int& b, int C[]){
    ifstream fd("data2.txt");
    fd >> a; 
    fd >> b;
    for(int i=0; i<a; i++){
        fd >> C[i]; 
    }
    fd.close();
}

void Keitimas(int a, int b, int C[]){ 
    int PN[in_];

    // Pirma naktis
    for(int i=0; i<a; i++) { 
        printf("%i ", C[i]);
    }
    printf("\n");

    for(int i=1; i<b; i++){  // visas veiksmas
        // sukuriama kopija 
        for(int k=0; k<a; k++){
            PN[k] = C[k];
        }

        for(int j=0; j<a; j++){ 
            int k = 0; // kairinis
            int d = 0; // desininis
            
            if(j > 0){
                k = PN[j-1];
            }
            if(j < a - 1){
                d = PN[j+1];
            }

            if (k == 1 && d == 1){
                C[j] = 0;
            }
            else if ((k == 1 && d == 0) || (k == 0 && d == 1)){
                C[j] = 1;
            } 
            else{
                if ((i+1) % 2 == 0){
                    C[j] = 1;
                }
                else{   
                    C[j] = 0; 
                }
            }
        }

        // Isvedama dabartine naktis
        for(int j=0; j<a; j++){
            printf("%i ", C[j]);
        }
        printf("\n");
    }
}