#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {
s32 TLobby__sub_803DA16C(void *, M2C_UNK);
extern int TAdMcSelectCursorGC__texture_entry;
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

extern u32 TAdMcSelectCursorGC__instance;

u32 get_instance__19TAdMcSelectCursorGCFi(s32 arg0) {
    u32 var_r0;

    if ((u32) TAdMcSelectCursorGC__instance == 0U) {
        var_r0 = __nw__7TObjectFUl(0x140);
        if (var_r0 != 0U) {
            var_r0 = TAdMcSelectCursorGC__ct(var_r0, arg0);
        }
        TAdMcSelectCursorGC__instance = var_r0;
    }
    return TAdMcSelectCursorGC__instance;
}

    extern unsigned char lbl_80477118[];
    extern unsigned char lbl_804ED99C[];
    extern int TAdMcSelectCursorGC__texture_entry;

void release_cursor_entry__19TAdMcSelectCursorGCFv(void) {
    u8 *temp_r4;
    if ((void **) (*(void ** *)&TAdMcSelectCursorGC__texture_entry) != NULL) {
        temp_r4 = (u8 *)(*(*(void ** *)&TAdMcSelectCursorGC__texture_entry));
        if ((u32) M2C_FIELD(temp_r4, u32 *, 8) != 0U) {
            TLobby__sub_803DA16C((*(void ** *)&TAdMcSelectCursorGC__texture_entry), (s32) temp_r4);
        }
    }
}

void init_resource__19TAdMcSelectCursorGCFv(void) { TAdMcSelectCursorGC__texture_entry = (int)lbl_804ED99C; TLobby__sub_8023E4B4(lbl_80477118, lbl_804ED99C); }

s32 TAdMcSelectCursorGC__sub_8032A6D8(void* p) { return *(s32*)((char*)p + 0x1c); }

    extern int memcard_cursor_instance_table[];
int get_cursor_type__19TAdMcSelectCursorGCFi(int a0) {  return memcard_cursor_instance_table[a0]; }

}
