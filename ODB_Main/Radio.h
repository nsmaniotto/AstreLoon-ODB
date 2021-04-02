#include <RH_RF95.h>

#ifndef __ODB_RADIO_H

#define __ODB_RADIO_H

class Radio
{
  private:
  
    Radio();
    
    static Radio* INSTANCE;

    RH_RF95* rf95;
    
  public:
  
    ~Radio();

    static Radio* getInstance();
    
    void send(char* data);
};

#endif // __ODB_RADIO_H
