#include "types.h"
#include "pso/misc/TWindowSubCustomSelect.h"
#include "pso/misc/TWindowSubCustomEquip.h"

extern "C" {

int fn_80275D90(void* p);
int TWindowSubCustomEquip__sub_80275DA8(void* p);

int TWindowSubCustomSelect::is_active() { return this->m_73 & 0x1; }
int fn_80275D90(void* p) { return *(u8*)((char*)p + 0x73) & 0x2; }

}
