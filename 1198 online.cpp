#include <iostream>

int main(){
    long long x, y;

    while(std::cin >> x){
                   std::cin >> y;
                   if(x >= y) std::cout << x-y << "n";
                   else std::cout << y-x << "n";
    }

    return 0;
}




///
import signal
import sys
import time

run = True

def signal_handler(signal, frame):
    global run
    print "exiting"
    run = False

signal.signal(signal.SIGINT, signal_handler)
while run:
    print "hi"
    time.sleep(1)
    # do anything
    print "bye"
