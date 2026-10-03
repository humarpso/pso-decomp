#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {
void TObjPlayer__sub_8013A748(void *);
void TObjPlayer__sub_801BBB98(void *arg0);
void TObjPlayer__sub_801B59F8(s32, s32, s32, s32, s32, s32);
void TObjPlayer__sub_801BBBD0(s32 arg0);
}

extern "C" {

s32 is_locally_controlled__10TObjPlayerFPv(void *);
s32 obj_isState3_324(void *);
s32 obj_getField1c(void *);
u32 TLockOnCursor__ct(u32, void *, s32);
s32 is_single_screen__10TObjPlayerFv();
u32 __nw__7TObjectFUl(s32);
void TObjPlayer__sub_801BBB70(void);
int TObjPlayer__sub_801BBB74(void* p);
void TObjPlayer__sub_801BBB94(void);
void TObjPlayer__sub_801BBC2C(void* p);
void update_lock_on_cursor__10TObjPlayerFPv(void* p);
void TObjPlayer__sub_801BBC64(void);
int clear_links__10TObjPlayerFPv(void* p);
int reset_and_spawn_cursors__13TLockOnCursorFi(void*);
int clear_obj_links(void*);
int enable_action_input__10TObjPlayerFPv(void*);

void TObjPlayer__sub_801BBB98(void *arg0) {
    TObjPlayer__sub_8013A748((void *)((char *)arg0 + 1280));
    TObjPlayer__sub_801BBBD0((s32)((void *)(arg0)));
}
void TObjPlayer__sub_801BBBD0(s32 arg0) {
    TObjPlayer__sub_801B59F8(arg0, 0, 0, 0, 1, 0);
    TObjPlayer__sub_801B59F8(arg0, 0, 1, 0, 1, 0);
}

}
