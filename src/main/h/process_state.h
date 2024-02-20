// processes have a name, a priority, a state, a time slice, a list of threads, and a list of children
#ifndef PROCESS_STATE_H
#define PROCESS_STATE_H

#include <string>
#include <nlohmann/json.hpp>

class ProcessState {
public:
    ProcessState(int PID);
    ~ProcessState();
    nlohmann::json getProcessInfo();
private:
    void GenerateProcessState();
    nlohmann::json processInfo;
};

#endif //PROCESS_STATE_H
