#include "Board.h"

#ifndef __ODB_ODB_H

#define __ODB_ODB_H

class ODB
{
  private:

    int state;
    Board * boards;
  
  public:
  
    ~ODB();
    
    ODB();
    
    int addBoard();
};

#endif // __ODB_ODB_H
