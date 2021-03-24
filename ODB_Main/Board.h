#include "Sensor.h"

#ifndef __ODB_BOARD_H

#define __ODB_BOARD_H

class Board
{
  private:

    int type;
    Sensor * sensors;
  
  public:
  
    ~Board();
    
    Board(int type);
    
    int addSensor(Sensor sensor);
};

#endif // __ODB_BOARD_H
