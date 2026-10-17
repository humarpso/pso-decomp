#include "types.h"
#include "pso/misc/TWindowSubCustomSelect_80275D84.h"
#include "pso/misc/TWindowSubCustomSelect.h"
#include "pso/misc/TWindowSubCustomEquip.h"

extern "C" {

int TWindowSubCustomSelect::is_active() { return this->m_73 & 0x1; }
int fn_80275D90(void* p) { return *(u8*)((char*)p + 0x73) & 0x2; }

}
