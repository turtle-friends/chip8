#pragma once

#include <array>
#include <cstdint>
#include <functional>
#include <map>
#include <string>

// create template for the type, so it avoids future issues
// use concepts and require clauses
using Func = std::function<void(void*)>;

// see if we can move this inside class
const uint8_t kTotal = 36;

class Opcode {
	public:
		Func Decode(std::string vx);
		std::array<std::string, kTotal> Instructions();

	protected:
		void Add(uint8_t& vx, uint8_t value);
		void Clear();
		void Draw(uint8_t vx, uint8_t vy, uint8_t data);
		void Jump(uint16_t address);
		void Load(uint8_t& vx, uint8_t address);

	private: 
		std::map<std::string, Func> m_instructions;
};