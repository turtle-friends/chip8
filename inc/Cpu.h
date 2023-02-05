#pragma once

#include <cstdint>
#include <map>
#include <string>

class Cpu {
public:
  Cpu() = default;
  ~Cpu() = default;

  void* GetRegister(std::string);
  void RunInstruction(std::string);
  void SetRegister(std::string, void*);

private:
  static const std::map <std::string, int> m_reg;

  static const uint8_t m_dt, m_sp, m_st;
  static const uint8_t m_v [16];

  static const uint16_t m_i, m_pc;
};