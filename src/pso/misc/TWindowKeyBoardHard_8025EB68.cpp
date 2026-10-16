#include "types.h"
#include "pso/misc/TWindowKeyBoardBase.h"
#include "pso/misc/TWindowKeyBoardHard.h"

extern "C" {

int TWindowKeyBoardBase::sub_8025EB68() { return (this->m_60 >> 3) & 0x1; }

int TWindowKeyBoardHard::test_card_flag_0x80() { return TWindowKeyBoardHard::test_card_flag((s32)this, (s32)128); }
int TWindowKeyBoardHard::test_card_flag_64() { return TWindowKeyBoardHard::test_card_flag((s32)this, (s32)64); }
int TWindowKeyBoardHard::call_1A529C_with_32() { return TWindowKeyBoardHard::test_card_flag((s32)this, (s32)32); }
int TWindowKeyBoardHard::test_card_flag_16() { return TWindowKeyBoardHard::test_card_flag((s32)this, (s32)16); }

}
