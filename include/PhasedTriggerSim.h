#ifndef _PHASED_TRIGGER_SIM_H
#define _PHASED_TRIGGER_SIM_H


/** This is the main interface for the phased array trigger 
 * simulation.  
 *
 */


#include "PhasedTriggerResult.h" 

namespace PhasedTrigger
{

  class TriggerSetup; 


  class TriggerSim  
  {

    public: 

      TriggerSim(const TriggerSetup * setup = 0); 

      const TriggerResult& evalTrigger(const double ** wfs); 

    private: 

      const TriggerSetup * setup; 
      TriggerResult result; 
  }; 




}


#endif

