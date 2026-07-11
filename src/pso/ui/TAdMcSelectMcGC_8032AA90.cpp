#include "types.h"

extern "C" {

void init_memorycard__15TAdMcSelectMcGCFv(void);
int fn_8023E4B4(void*, void*);

    extern unsigned char lbl_80477150[];
    extern unsigned char lbl_804ED9CC[];
    extern int TAdMcSelectMcGC__data_805D6C98;
void init_memorycard__15TAdMcSelectMcGCFv(void) { TAdMcSelectMcGC__data_805D6C98 = (int)lbl_804ED9CC; fn_8023E4B4(lbl_80477150, lbl_804ED9CC); }

}
