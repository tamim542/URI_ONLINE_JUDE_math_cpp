#include <iostream>
#include <cstring>
#include <cstdlib>
#include <sstream>
using namespace std;

int main()
{
    int y;
    string z;

    while(getline(cin, z))
        {
         y = atoi(z.c_str());
         if(y < 0)
            {
             return 0;
            }
          if(z[1] == 'x')
          {
            istringstream(z) >> std::hex >> y;
            cout << std::dec << y << endl;
        }
        else
            {
              cout << "0x" << std::hex << uppercase << y << endl;
            }
    }
}


