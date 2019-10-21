#ifndef THREADBEHAVIOR_H
#define THREADBEHAVIOR_H
#include <QThread>

class ThreadBehavior : public QThread
{
public:
    ThreadBehavior();
    virtual void run();
};

#endif // THREADBEHAVIOR_H
