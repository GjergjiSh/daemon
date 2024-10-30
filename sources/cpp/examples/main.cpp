#include <iostream>
#include <daemon.h>

int main()
{
    vdaemon::Daemon daemon("Dummy", 5);
    daemon.start();
    return 0;
}