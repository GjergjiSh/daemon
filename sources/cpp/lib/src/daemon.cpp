#include <daemon.h>
#include <iostream>
#include <unistd.h> // For sleep()

namespace cpp_daemon {

Daemon::Daemon(const std::string& name, int interval)
    : name_(name)
    , interval_(interval)
    , running_(false)
{
}

void Daemon::start()
{
    if (!running_) {
        running_ = true;
        run();
    }
}

void Daemon::stop()
{
    if (running_) {
        running_ = false;
    }
}

void Daemon::run()
{
    while (running_) {
        std::cout << "Daemon '" << name_ << "' is running..." << std::endl;
        sleep(interval_);
    }
    std::cout << "Daemon '" << name_ << "' has stopped." << std::endl;
}

}