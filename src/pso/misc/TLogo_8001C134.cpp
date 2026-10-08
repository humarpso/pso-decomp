#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {
int TLobby__sub_8023E4B4(void*, void*);
    extern unsigned char lbl_804349A0[];
    extern unsigned char texture_logo_e_descriptor[];
extern u32 lbl_805D4A38;
void register_texture_logo_e(void);
int queue_destruction__7TObjectFv(void);
    extern int lbl_805D4A50;
void request_exit__5TLogoFv(void);
}

extern "C" {

void free_held_object__5TLogoFv(void);
void TLobby__sub_803DA16C(void*);

extern u32 lbl_805D4A38;

void free_held_object__5TLogoFv(void) {
    if ((u32) lbl_805D4A38 != 0U) {
        TLobby__sub_803DA16C((void*)lbl_805D4A38);
        lbl_805D4A38 = 0U;
    }
}
void register_texture_logo_e(void) { (*(int *)&lbl_805D4A38) = (int)texture_logo_e_descriptor; TLobby__sub_8023E4B4(lbl_804349A0, texture_logo_e_descriptor); }
void request_exit__5TLogoFv(void) { queue_destruction__7TObjectFv(); lbl_805D4A50 = 1; }

}
