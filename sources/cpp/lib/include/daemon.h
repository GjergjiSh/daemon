#ifndef DAEMON_H
#define DAEMON_H

#include <string>

namespace cpp_daemon {

class Daemon {
public:
    Daemon(const std::string& name, int interval);
    void start();
    void stop();

private:
    std::string name_;
    int interval_;
    bool running_;

    void run();
};


} // namespace cpp_daemon

#endif // DAEMON_H