#ifndef _PHASED_TRIGGER_RESULT_H
#define _PHASED_TRIGGER_RESULT_H


namespace PhasedTrigger
{

  class TriggerResult
  {

    public: 

      operator bool() const { return triggered; }

      bool triggered; //did I trigger? 
      int status; // 0 on success 

      // other stuff we might wanna know here 




  }; 

}; 

#endif

