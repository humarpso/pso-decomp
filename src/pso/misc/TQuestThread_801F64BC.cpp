#include "types.h"

extern "C" {

void set_status_flag_80__12TQuestThreadFPv(void* p);
void TQuestThread__sub_801F64CC(int a0);

void set_status_flag_80__12TQuestThreadFPv(void* p) { *(u16*)((char*)p + 0x70) |= 0x80; }

    extern int lbl_805D5EF4;
void TQuestThread__sub_801F64CC(int a0) { lbl_805D5EF4 = a0; }

}
