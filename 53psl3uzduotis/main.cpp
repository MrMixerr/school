#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    int n,u,k,e, msum, bsum;
    double mvid, bvid;
    ifstream fd("data.txt");
    ofstream fr("rez.txt");
    fd >> n;
    k=0;
    e=0;
    msum=0;
    bsum=0;
    for(int i=1; i<=n; i++){
        fd >> u;
        if(u<0)
        {
            k++;
            bsum=bsum+u;
            bvid=bsum/k;
        }
        else{
            e++;
            msum=msum+u;
            mvid=msum/e;
        }
    }
    fr << "vidVaikinu = "<< bvid*-1 << ", vidMerginu = " << mvid << endl;
    fd.close();
    fr.close();
    return 0;
}


