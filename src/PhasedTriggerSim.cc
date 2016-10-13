#include "PhasedTriggerSim.h" 
#include "PhasedTriggerSetup.h" 



static PhasedTrigger::TriggerSetup defaultSetup; 

PhasedTrigger::TriggerSim::TriggerSim(const PhasedTrigger::TriggerSetup * setup) : setup(setup ? setup : &defaultSetup) {}





const PhasedTrigger::TriggerResult & PhasedTrigger::TriggerSim::evalTrigger(const double ** wfs) 
{

  result.status = 0; 
  result.triggered = false; 

  //TODO implement! 



  return result; 
}



