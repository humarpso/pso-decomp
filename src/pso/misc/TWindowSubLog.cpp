#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

extern "C" {

void *__dt__13TWindowSubLogFv(void *arg0, s16 arg1);
int cleanup__13TWindowSubLogFPv(void* p);
void clear_flag4c_bit8__13TWindowSubLogFPv(void* p);
int fn_8027B288(void* p);
void fn_8027B2A8(void* p);
void render__13TWindowSubLogFv(void);
void set_flag4c_bit8__13TWindowSubLogFPv(void* p);
void TWindowCtrl__sub_8024ADF0(void *);
void TWindow__close(void *);
void __dl__7TObjectFPv(void *);
void __dt__7TObjectFv(void *, int);
void queue_destruction__7TObjectFv(void *);
int show_child_window__15TWindowMainMenuFPv(void*);
int update_trade_submenu__15TWindowMainMenuFPv(void*);

void render__13TWindowSubLogFv(void) {  }

extern M2C_UNK __vt__13TWindowSubLog[];

void *__dt__13TWindowSubLogFv(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = __vt__13TWindowSubLog;
        if (M2C_FIELD(arg0, void **, 0x28) != NULL) { queue_destruction__7TObjectFv(M2C_FIELD(arg0, void **, 0x28)); M2C_FIELD(arg0, M2C_UNK *, 0x28) = 0; }
        if (M2C_FIELD(arg0, void **, 0x24) != NULL) { TWindow__close(M2C_FIELD(arg0, void **, 0x24)); M2C_FIELD(arg0, M2C_UNK *, 0x24) = 0; }
        if (M2C_FIELD(arg0, void **, 0x20) != NULL) { clear_flag4c_bit8__13TWindowSubLogFPv((void*)(M2C_FIELD(arg0, void **, 0x20))); cleanup__13TWindowSubLogFPv((void*)(M2C_FIELD(arg0, void **, 0x20))); }
        TWindowCtrl__sub_8024ADF0(M2C_FIELD(arg0, void **, 0x1C));
        __dt__7TObjectFv(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

void clear_flag4c_bit8__13TWindowSubLogFPv(void* p) { *(u32*)((char*)p + 0x4c) &= 0xfffffff7; }
int cleanup__13TWindowSubLogFPv(void* p) { return show_child_window__15TWindowMainMenuFPv(p); }
void set_flag4c_bit8__13TWindowSubLogFPv(void* p) { *(u32*)((char*)p + 0x4c) |= 0x8; }
int fn_8027B288(void* p) { return update_trade_submenu__15TWindowMainMenuFPv(p); }
void fn_8027B2A8(void* p) { *(u16*)((char*)p + 0x1e) |= 0x200; }

}
