#pragma once
typedef map<> 
class Opcode {

	private: 
		
	protected:

		void Add(uint8_t& vx, uint8_t value);
		void Clear();
		void Draw(uint8_t vx, uint8_t vy, uint8_t data);
		void JumpToAdress(uint16_t address);
		void Load(uint8_t& vx, uint8_t address);
		void Opcode();

	public:
		uint8_t* GetInstruct(string vx);
		string GetInstructs();



		

};