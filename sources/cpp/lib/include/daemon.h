#ifndef DAEMON_H
#define DAEMON_H

#include <string>

namespace vdaemon {

class IDaemon {
public:
    virtual ~IDaemon() = default;

    virtual void start() = 0;
    virtual void stop() = 0;
    virtual int status() = 0;
};

class Daemon : public IDaemon {
public:
    Daemon(const std::string& name, int interval);
    void start() override;
    void stop() override;
    int status() override;

private:
    std::string name_;
    int interval_;
    bool running_;

    void run();
};

} // namespace vdaemon

#endif // DAEMON_H