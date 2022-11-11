#include <gtest/gtest.h>
#include <gmock/gmock.h>

#include <cstdint>

#include "Opcode.h"

class MockOpcode {
public:
	MOCK_METHOD(uint8_t, Add, (uint8_t& vx, uint8_t value), ());
	MOCK_METHOD(bool, Clear, (), ());
	MOCK_METHOD(bool, Draw, (uint8_t vx, uint8_t vy, uint8_t data), ()); // only first 4 bits are needed for data
	MOCK_METHOD(uint8_t, JumpToAddress, (uint16_t address), ()); // only first 12 bits are needed for address
	MOCK_METHOD(bool, Load, (uint8_t& vx,  uint8_t address), ());
	MOCK_METHOD(bool, LoadToI, (uint16_t address), ()); // only first 12 bits are needed for address
};

class OpcodeTest: public testing::Test {
protected:
	MockOpcode m_opcode;
};

TEST_F(OpcodeTest, BasicArithmetic)
{
	/* @todo Add tests and clauses for Add, Sub, etc. */
}

TEST_F(OpcodeTest, ClearScreen)
{
	EXPECT_CALL(m_opcode, Clear)
		.Times(1);
	
	m_opcode.Clear();
}

TEST_F(OpcodeTest, JumpToAddress)
{
	EXPECT_CALL(m_opcode, JumpToAddress)
		.Times(1);
	
	m_opcode.JumpToAddress(2);
}

TEST_F(OpcodeTest, LoadAddress)
{
	/* @todo Add tests and clauses for Load and LoadToI */
}

TEST_F(OpcodeTest, DrawPrimitive)
{
	EXPECT_CALL(m_opcode, Draw)
		.Times(1);
	
	m_opcode.Draw(2, 4, 3);
}