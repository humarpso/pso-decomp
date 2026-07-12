#include "types.h"

extern "C" {

void clear_flag4c_bit8__13TWindowSubLogFPv(void* p);
void set_flag4c_bit8__13TWindowSubLogFPv(void* p);
int cleanup__13TWindowSubLogFPv(void* p);
int fn_8027B288(void* p);
void fn_8027B2A8(void* p);
int show_child_window__15TWindowMainMenuFPv(void*);
int TWindowMainMenu__sub_80264514(void*);

void clear_flag4c_bit8__13TWindowSubLogFPv(void* p) { *(u32*)((char*)p + 0x4c) &= 0xfffffff7; }
int cleanup__13TWindowSubLogFPv(void* p) { return show_child_window__15TWindowMainMenuFPv(p); }
void set_flag4c_bit8__13TWindowSubLogFPv(void* p) { *(u32*)((char*)p + 0x4c) |= 0x8; }
int fn_8027B288(void* p) { return TWindowMainMenu__sub_80264514(p); }
void fn_8027B2A8(void* p) { *(u16*)((char*)p + 0x1e) |= 0x200; }

}
