#ifndef __ODB_SDCARD_H

#define __ODB_SDCARD_H

class SDCard
{
  private:
  
    SDCard();
    
    static SDCard* INSTANCE;
    
  public:
  
    ~SDCard();

    static SDCard* getInstance();
    
    void write(char* fileName, char* input);

    void read(char* fileName);
};

#endif // __ODB_SDCARD_H
