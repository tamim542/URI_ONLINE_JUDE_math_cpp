#include <iostream>
#include <cstring>
#include <cstdlib>
#include <sstream>
using namespace std;

int main()
{

int x=15,y,i,j=0;
for(i=1;i<=15;i++)
{
    if(x%i==0)
    {
        j++;
    }
}
cout<<j;
}
