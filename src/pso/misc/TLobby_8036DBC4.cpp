#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {
s32 get_camera_id__11TCameraCtrlFv();
s32 TLobby__sub_8001EEFC(void *);
void draw_string__9TLanguageFPvPvi(void *, void *, int);
void TLobby__sub_8001EE48(void *);
s32 load_gvm_texture_file(void *);
void set_global_param__8TObjFishFi();
void TLanguage__sub_803DAF70(int, int);
extern u8 lbl_8047AD08[];
extern u8 lbl_8047AD14[];
extern u8 lbl_8047AD20[];
extern u32 lbl_805D7018;
extern s32 lbl_805D701C;
void TBGMulti__ct(void);
}

extern "C" {

void free_singleton_805D7018__6TLobbyFv(void);
M2C_UNK safe_free__23TAdSinglePlyChrSelectGCFUi(u32);
M2C_UNK TLobby__sub_803DA16C(void*);

extern u32 lbl_805D7018;

void free_singleton_805D7018__6TLobbyFv(void) {
    if ((u32) lbl_805D7018 != 0U) {
        TLobby__sub_803DA16C((void*)lbl_805D7018);
        safe_free__23TAdSinglePlyChrSelectGCFUi(lbl_805D7018);
        lbl_805D7018 = 0U;
    }
}
void TBGMulti__ct(void) {
    s32 sp8[4];
    if (get_camera_id__11TCameraCtrlFv() == 3) {
        sp8[0] = TLobby__sub_8001EEFC(lbl_8047AD08);
        draw_string__9TLanguageFPvPvi(lbl_8047AD14, sp8, 0x4D);
        TLobby__sub_8001EE48(lbl_8047AD08);
        (*(s32 *)&lbl_805D7018) = load_gvm_texture_file(lbl_8047AD20);
        set_global_param__8TObjFishFi();
        TLanguage__sub_803DAF70(0, 0x4D);
    }
    lbl_805D701C = 0x384;
}

}
