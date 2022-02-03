
#include<iostream>

using namespace std;

int main()
{
    int i,j,c,x;
    float r;
    cin>>c;
    for(i=0;i<c;i++)
        {
            int z=0;
            cin>>r;
           x=r/2;
          for(j=0;j<x;j++){
            if(r>=1){
                r=r/2;
                z++;
            }
          }
          cout<<z<<" dias"<<endl;
        }
}
