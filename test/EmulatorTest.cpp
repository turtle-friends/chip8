#include <gtest/gtest.h>
#include "Emulator.h"

class EmulatorTest : public testing::Test {
protected:
	Emulator m_emulator;
};

TEST_F(EmulatorTest, IsSetup)
{
	EXPECT_TRUE(!m_emulator.Setup());
}