#ifndef MOJOCOM_H
#define MOJOCOM_H

#include <iostream>
#include <thread>
#include <chrono>
#include <string>

#include "SerialCom.h"
#include "I2CCom.h"
#include "Logger.h"

class MojoCom : public I2CCom {
    public:
        MojoCom(std::string dev);
        ~MojoCom();

        int enableI2C();
        int writeI2C(unsigned id, unsigned addr, unsigned *data, unsigned bytes);
        int readI2C(unsigned id, unsigned addr, unsigned *data, unsigned bytes);
    protected:
    private:
        SerialCom *m_com;

        int writeReg(unsigned reg, unsigned val);
        int readReg(unsigned reg, unsigned &val);

};

#endif
