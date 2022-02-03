#include<iostream>
#include<iomanip>
using namespace std;

int main()
{
    int i,j,c,n,a[1000],b,k,s;
    float r,avg;

    cin>>c;
    for(i=0;i<c;i++)
    {
        s=0;
        b=0;

        cin>>n;

        for(j=0;j<n;j++)
    {
        cin>>a[j];

        b=b+a[j];

    }
       avg=b/n;
       for(k=0;k<n;k++)
    {
        if(a[k]>avg){
            s++;
        }

    }

       r=s*100/(n*1.0);
       cout<<fixed<<setprecision(3)<<r<<"%"<<endl;
    }

}
