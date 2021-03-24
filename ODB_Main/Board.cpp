#include "Board.h"

#include <stdlib.h>   /* malloc, free, rand */
#include "Constants.h"

Board::~Board()
{
  free(sensors);
}
    
Board::Board(int type)
{
  this->type = type;
  this->sensors = malloc(BOARD_MAX_NB_SENSORS * sizeof(Sensor));
 }
    
int Board::addSensor(Sensor sensor)
{
  // TODO
}
