#include <iostream>
#include <daemon.h>

int main()
{
    cpp_daemon::Daemon daemon("example", 5);
    daemon.start();
    return 0;
}