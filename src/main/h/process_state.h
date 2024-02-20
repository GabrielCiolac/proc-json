// processes have a name, a priority, a state, a time slice, a list of threads, and a list of children
#ifndef PROCESS_STATE_H
#define PROCESS_STATE_H

#include <string>

class Process {
public:
    Process(std::string name, int priority, int time_slice, int PID);
    ~Process();
    std::string getName();
    int getPriority();
    int getTimeSlice();
    int getPID();
    std::string getState();
    void printProcess();
    void printChildren();
};

#endif //PROCESS_STATE_H
