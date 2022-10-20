#pragma once

class Opcode {
	virtual void Add(uint8_t& vx, uint8_t value);
	virtual void Clear();
	virtual void Draw(uint8_t vx, uint8_t vy, uint8_t data);
	virtual void JumpToAdress(uint16_t address);
	virtual void Load(uint8_t& vx, uint8_t address);
	virtual void LoadToI(uint16_t address);
};