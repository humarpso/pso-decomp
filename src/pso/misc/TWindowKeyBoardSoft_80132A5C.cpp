#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
struct Inner_80132A5C { char pad8[0x8]; u32 f8; };
struct Outer_80132A5C { struct Inner_80132A5C *f0; };

struct Outer_80132A5C;
extern "C" {
u8 *TWindowKeyBoardSoft__sub_800F98F0(M2C_UNK *);
extern M2C_UNK lbl_8043ECD4[];
extern M2C_UNK lbl_8043ECE4[];
extern M2C_UNK lbl_8043ECF0[];
extern M2C_UNK lbl_8043ECFC[];
extern M2C_UNK lbl_8043ED08[];
extern int lbl_805D5538;
extern int lbl_805D553C;
extern int TWindowKeyBoardSoft__data_805D5548;
void select_language_text_resources(s32 arg0);
M2C_UNK TLobby__sub_8001EE48(void *);
s32 TLobby__sub_8001EEFC(void *);
M2C_UNK begin_render__20TWindowSubStatusDispFv();
M2C_UNK decode_font_data__9TLanguageFPvPvii(void *, void *, int, int);
M2C_UNK draw_string__9TLanguageFPvPvi(void *, void *, int);
struct Outer_80132A5C *load_gvm_texture_file(void *);
M2C_UNK TLanguage__sub_803DAF70(int, int);
extern M2C_UNK lbl_8043EAE8[];
extern M2C_UNK lbl_8043EAF4[];
extern M2C_UNK lbl_8043EB08[];
extern M2C_UNK lbl_8043EB24[];
extern M2C_UNK lbl_8043EB34[];
extern M2C_UNK lbl_8043EB50[];
extern M2C_UNK lbl_8043EB68[];
extern M2C_UNK lbl_8043EB7C[];
extern M2C_UNK lbl_8043EB98[];
extern M2C_UNK lbl_8043EBA8[];
extern M2C_UNK lbl_8043EBC4[];
extern M2C_UNK lbl_8043EBDC[];
extern M2C_UNK lbl_8043EBF0[];
extern M2C_UNK lbl_8043EC0C[];
extern M2C_UNK lbl_8043EC28[];
extern M2C_UNK lbl_8043EC3C[];
extern M2C_UNK lbl_8043EC58[];
extern M2C_UNK lbl_8043EC74[];
extern M2C_UNK lbl_8043EC88[];
extern M2C_UNK lbl_8043ECA4[];
extern M2C_UNK lbl_8043ECC0[];
extern struct Outer_80132A5C *lbl_805D5540;
void TLanguage__ct(s32 arg0);
}

extern "C" {

void free_instance__19TWindowKeyBoardSoftFv(void);
void free_resources__19TWindowKeyBoardSoftFv(void);
int TLobby__sub_800F957C(void*);
M2C_UNK TLobby__sub_803DA16C(void *);
M2C_UNK safe_free__23TAdSinglePlyChrSelectGCFUi(void *);

extern struct Outer_80132A5C *lbl_805D5540;

void free_instance__19TWindowKeyBoardSoftFv(void) {
    if (lbl_805D5540 != NULL) {
        struct Inner_80132A5C *inner = lbl_805D5540->f0;
        if (inner->f8 != 0U) {
            TLobby__sub_803DA16C(lbl_805D5540);
        }
        safe_free__23TAdSinglePlyChrSelectGCFUi(lbl_805D5540);
        lbl_805D5540 = NULL;
    }
}

    extern int lbl_805D5538;
    extern int lbl_805D553C;
    extern int TWindowKeyBoardSoft__data_805D5548;
void free_resources__19TWindowKeyBoardSoftFv(void) { TLobby__sub_800F957C((void*)(lbl_805D5538)); TWindowKeyBoardSoft__data_805D5548 = 0; lbl_805D553C = 0; lbl_805D5538 = 0; }

void TLanguage__ct(s32 arg0) {
    s32 sp8;
    sp8 = TLobby__sub_8001EEFC((void *) (lbl_8043EAE8));
    draw_string__9TLanguageFPvPvi((void *) (lbl_8043EAF4), (void *) (&sp8), (int) (0x48));
    TLobby__sub_8001EE48((void *) (lbl_8043EAE8));
    switch (arg0) {
    case 0:
        draw_string__9TLanguageFPvPvi((void *) (lbl_8043EB08), (void *) (&sp8), (int) (0x49));
        draw_string__9TLanguageFPvPvi((void *) (lbl_8043EB24), (void *) (&sp8), (int) (2));
        draw_string__9TLanguageFPvPvi((void *) (lbl_8043EB34), (void *) (&sp8), (int) (3));
        decode_font_data__9TLanguageFPvPvii((void *) (lbl_8043EB50), (void *) (&sp8), (int) (0x4B), (int) (0x4C));
        lbl_805D5540 = load_gvm_texture_file((void *) (lbl_8043EB68));
        break;
    case 2:
        draw_string__9TLanguageFPvPvi((void *) (lbl_8043EB7C), (void *) (&sp8), (int) (0x49));
        draw_string__9TLanguageFPvPvi((void *) (lbl_8043EB98), (void *) (&sp8), (int) (2));
        draw_string__9TLanguageFPvPvi((void *) (lbl_8043EBA8), (void *) (&sp8), (int) (3));
        decode_font_data__9TLanguageFPvPvii((void *) (lbl_8043EBC4), (void *) (&sp8), (int) (0x4B), (int) (0x4C));
        lbl_805D5540 = load_gvm_texture_file((void *) (lbl_8043EBDC));
        break;
    case 3:
        draw_string__9TLanguageFPvPvi((void *) (lbl_8043EBF0), (void *) (&sp8), (int) (0x49));
        draw_string__9TLanguageFPvPvi((void *) (lbl_8043EB98), (void *) (&sp8), (int) (2));
        draw_string__9TLanguageFPvPvi((void *) (lbl_8043EC0C), (void *) (&sp8), (int) (3));
        decode_font_data__9TLanguageFPvPvii((void *) (lbl_8043EBC4), (void *) (&sp8), (int) (0x4B), (int) (0x4C));
        lbl_805D5540 = load_gvm_texture_file((void *) (lbl_8043EC28));
        break;
    case 4:
        draw_string__9TLanguageFPvPvi((void *) (lbl_8043EC3C), (void *) (&sp8), (int) (0x49));
        draw_string__9TLanguageFPvPvi((void *) (lbl_8043EB98), (void *) (&sp8), (int) (2));
        draw_string__9TLanguageFPvPvi((void *) (lbl_8043EC58), (void *) (&sp8), (int) (3));
        decode_font_data__9TLanguageFPvPvii((void *) (lbl_8043EBC4), (void *) (&sp8), (int) (0x4B), (int) (0x4C));
        lbl_805D5540 = load_gvm_texture_file((void *) (lbl_8043EC74));
        break;
    default:
        draw_string__9TLanguageFPvPvi((void *) (lbl_8043EC88), (void *) (&sp8), (int) (0x49));
        draw_string__9TLanguageFPvPvi((void *) (lbl_8043EB98), (void *) (&sp8), (int) (2));
        draw_string__9TLanguageFPvPvi((void *) (lbl_8043ECA4), (void *) (&sp8), (int) (3));
        decode_font_data__9TLanguageFPvPvii((void *) (lbl_8043EBC4), (void *) (&sp8), (int) (0x4B), (int) (0x4C));
        lbl_805D5540 = load_gvm_texture_file((void *) (lbl_8043ECC0));
        break;
    }
    begin_render__20TWindowSubStatusDispFv();
    TLanguage__sub_803DAF70((int) (0), (int) (0x48));
    TLanguage__sub_803DAF70((int) (2), (int) (0x4B));
    TLanguage__sub_803DAF70((int) (1), (int) (0x49));
    TLanguage__sub_803DAF70((int) (3), (int) (2));
    TLanguage__sub_803DAF70((int) (4), (int) (3));
}

void select_language_text_resources(s32 arg0) {
    switch (arg0) {
    case 0:
        (*(u8 * *)&lbl_805D5538) = TWindowKeyBoardSoft__sub_800F98F0(lbl_8043ECD4);
        break;
    case 2:
        (*(u8 * *)&lbl_805D5538) = TWindowKeyBoardSoft__sub_800F98F0(lbl_8043ECE4);
        break;
    case 3:
        (*(u8 * *)&lbl_805D5538) = TWindowKeyBoardSoft__sub_800F98F0(lbl_8043ECF0);
        break;
    case 4:
        (*(u8 * *)&lbl_805D5538) = TWindowKeyBoardSoft__sub_800F98F0(lbl_8043ECFC);
        break;
    default:
        (*(u8 * *)&lbl_805D5538) = TWindowKeyBoardSoft__sub_800F98F0(lbl_8043ED08);
        break;
    }
    (*(s32 *)&TWindowKeyBoardSoft__data_805D5548) = M2C_FIELD((*(u8 * *)&lbl_805D5538), s32 *, 0);
    (*(s32 *)&lbl_805D553C) = M2C_FIELD((*(u8 * *)&lbl_805D5538), s32 *, 4);
}

}
