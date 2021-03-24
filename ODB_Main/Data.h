#ifndef __ODB_DATA_H

#define __ODB_DATA_H

class Data
{
  private:
  
    float value;
    int unit;
    
  public:
  
    ~Data();

    Data();
    
    Data(float value, int unit);
};

#endif // __ODB_DATA_H
