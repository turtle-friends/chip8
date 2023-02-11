#pragma once

#include <cstdint>

class Stack {
public:
  void Push(uint16_t);
  uint16_t Pop();

private:
  static const uint16_t kStackSize = 16;
  uint16_t m_buf[kStackSize]; 
  uint8_t m_top = -1;
  
};
