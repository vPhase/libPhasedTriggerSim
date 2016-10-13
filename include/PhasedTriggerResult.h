#ifndef _PHASED_TRIGGER_RESULT_H
#define _PHASED_TRIGGER_RESULT_H




namespace PhasedTrigger
{

  /** This class stores the result of the trigger simulation
   *
   *  For now it's just a yes/no and a status, but we can think of more stuff to put here. 
   *
   */ 
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

