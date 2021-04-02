#ifndef __ODB_SDCARD_H

#define __ODB_SDCARD_H

class SDCard
{
  private:
    
    static SDCard* INSTANCE;
  
    SDCard();
    
  public:
  
    ~SDCard();

    static SDCard* getInstance();
    
    void write(char* fileName, char* input);

    void read(char* fileName);
};

#endif // __ODB_SDCARD_H
