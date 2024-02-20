#ifndef PROCESS_MANAGER_H
#define PROCESS_MANAGER_H

#include <string>
#include "process_publisher.h"

//this class iterates through /proc and creates a list of all processes
class ProcessManager{
    public:
        ProcessManager(ProcessPublisher*);
};

#endif //PROCESS_MANAGER_H