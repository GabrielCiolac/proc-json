#include "process_state.h"

ProcessState::ProcessState(int PID){
    this->PID = PID;
    GenerateProcessState();
}

ProcessState::~ProcessState(){
    //delete processInfo;
}

nlohmann::json ProcessState::getProcessInfo(){
    return processInfo;
}
