#pragma once

#include <cstdint>

class Ram {
public:
    void SetAddress(uint8_t, uint8_t);
    uint8_t GetByte(uint8_t);

private:
    static const uint8_t kRamSize = 4096;
    uint8_t m_buf[kRamSize]; 
    
};