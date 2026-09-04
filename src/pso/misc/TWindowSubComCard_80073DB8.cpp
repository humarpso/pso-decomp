#include "types.h"

extern "C" {

int get_status_flag__17TWindowSubComCardFPv(void* p);
void set_field_20__12TQuestListVMFPvi(void* p, s32 v);

int get_status_flag__17TWindowSubComCardFPv(void* p) { return (*(u16*)((char*)p + 0x70) >> 2) & 0x1; }

}
