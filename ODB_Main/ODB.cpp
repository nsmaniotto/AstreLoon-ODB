#include "ODB.h"

#include <stdlib.h>   /* malloc, free, rand */
#include "Constants.h"

ODB::~ODB()
{
  delete boards;
}
    
ODB::ODB()
{
  this->state = ODB_STATE_INITIALISATION;
  Board * boards = malloc(ODB_MAX_NB_BOARDS * sizeof(Board));
}
    
int ODB::addBoard(Board board)
{
  // TODO
}
