#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {
s32 TLobby__sub_803DA16C(void *, M2C_UNK);
extern int TAdMcSelectCursorGC__data_805D6C90;
void release_cursor_entry__19TAdMcSelectCursorGCFv(void);
}

extern "C" {

s32 TAdMcSelectCursorGC__sub_8032A6D8(void* p);
int get_cursor_type__19TAdMcSelectCursorGCFi(int a0);
u32 get_instance__19TAdMcSelectCursorGCFi(s32 arg0);
void init_resource__19TAdMcSelectCursorGCFv(void);
u32 TAdMcSelectCursorGC__ct(u32, s32);
int TLobby__sub_8023E4B4(void*, void*);
u32 __nw__7TObjectFUl(M2C_UNK);

extern u32 lbl_805D6C94;

u32 get_instance__19TAdMcSelectCursorGCFi(s32 arg0) {
    u32 var_r0;

    if ((u32) lbl_805D6C94 == 0U) {
        var_r0 = __nw__7TObjectFUl(0x140);
        if (var_r0 != 0U) {
            var_r0 = TAdMcSelectCursorGC__ct(var_r0, arg0);
        }
        lbl_805D6C94 = var_r0;
    }
    return lbl_805D6C94;
}

    extern unsigned char lbl_80477118[];
    extern unsigned char lbl_804ED99C[];
    extern int TAdMcSelectCursorGC__data_805D6C90;

void release_cursor_entry__19TAdMcSelectCursorGCFv(void) {
    u8 *temp_r4;
    if ((void **) (*(void ** *)&TAdMcSelectCursorGC__data_805D6C90) != NULL) {
        temp_r4 = (u8 *)(*(*(void ** *)&TAdMcSelectCursorGC__data_805D6C90));
        if ((u32) M2C_FIELD(temp_r4, u32 *, 8) != 0U) {
            TLobby__sub_803DA16C((*(void ** *)&TAdMcSelectCursorGC__data_805D6C90), (s32) temp_r4);
        }
    }
}

void init_resource__19TAdMcSelectCursorGCFv(void) { TAdMcSelectCursorGC__data_805D6C90 = (int)lbl_804ED99C; TLobby__sub_8023E4B4(lbl_80477118, lbl_804ED99C); }

s32 TAdMcSelectCursorGC__sub_8032A6D8(void* p) { return *(s32*)((char*)p + 0x1c); }

    extern int lbl_804EFAA0[];
int get_cursor_type__19TAdMcSelectCursorGCFi(int a0) {  return lbl_804EFAA0[a0]; }

}
