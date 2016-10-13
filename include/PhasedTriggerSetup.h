#ifndef PHASED_TRIGGER_SETUP_H
#define PHASED_TRIGGER_SETUP_H

#include <vector> 
#include <unistd.h>

namespace PhasedTrigger
{

  class TriggerSetup
  {
    public: 



      // Antenna properties
      size_t NAntennas; //Number of antennas
      std::vector<double> antennaZs; // Z positions of antennas, in m, relative coords are all that matter

      //Waveform properties
      size_t Nbits; // Number of bits 
      double  mVPerBit; // number of mV per bit 
      double sampleRateGHz; //Sample rate in GHz
      size_t  nsamples; //Number of sam


      //Trigger properties

      size_t sumWidth; //width to sum over


      /// what else? 
     

      //set defaults
      TriggerSetup()
      {
        NAntennas = 16; 

        antennaZs.reserve(NAntennas); 
        for (int i = 0; i < NAntennas; i++) antennaZs.push_back(-i); //1 m spacing by default, starting from top 

        Nbits = 7; 
        mVPerBit = 7.8125;// FIXME 
        sampleRateGHz = 1.5; 
        nsamples = 1024; // FIXME
        sumWidth = 16; 
      }
      
  }; 

}




#endif
