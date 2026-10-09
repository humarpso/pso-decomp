#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
struct Inner_80132A5C { char pad8[0x8]; u32 f8; };
struct Outer_80132A5C { struct Inner_80132A5C *f0; };

struct Outer_80132A5C;
extern "C" {
u8 *load_text_resource_pair(M2C_UNK *);
extern M2C_UNK lbl_8043ECD4[];
extern M2C_UNK lbl_8043ECE4[];
extern M2C_UNK lbl_8043ECF0[];
extern M2C_UNK lbl_8043ECFC[];
extern M2C_UNK lbl_8043ED08[];
extern int TWindowKeyBoardSoft__text_resource;
extern int text_language_group_table;
extern int TWindowKeyBoardSoft__language_text_resources;
void select_language_text_resources(s32 arg0);
M2C_UNK tmp_buf_release__6TLobbyFi(void *);
s32 tmp_buf_use_req__6TLobbyFPv(void *);
M2C_UNK begin_render__20TWindowSubStatusDispFv();
M2C_UNK decode_font_data__9TLanguageFPvPvii(void *, void *, int, int);
M2C_UNK draw_string__9TLanguageFPvPvi(void *, void *, int);
struct Outer_80132A5C *load_gvm_texture_file(void *);
M2C_UNK set_entry_index__9TLanguageFii(int, int);
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
extern struct Outer_80132A5C *localized_alphabet_list;
void TLanguage__ct(s32 arg0);
}

extern "C" {

void free_instance__19TWindowKeyBoardSoftFv(void);
void free_resources__19TWindowKeyBoardSoftFv(void);
int free_nodes_with_id__6TLobbyFUi(void*);
M2C_UNK TLobby__sub_803DA16C(void *);
M2C_UNK safe_free__23TAdSinglePlyChrSelectGCFUi(void *);

extern struct Outer_80132A5C *localized_alphabet_list;

void free_instance__19TWindowKeyBoardSoftFv(void) {
    if (localized_alphabet_list != NULL) {
        struct Inner_80132A5C *inner = localized_alphabet_list->f0;
        if (inner->f8 != 0U) {
            TLobby__sub_803DA16C(localized_alphabet_list);
        }
        safe_free__23TAdSinglePlyChrSelectGCFUi(localized_alphabet_list);
        localized_alphabet_list = NULL;
    }
}

    extern int TWindowKeyBoardSoft__text_resource;
    extern int text_language_group_table;
    extern int TWindowKeyBoardSoft__language_text_resources;
void free_resources__19TWindowKeyBoardSoftFv(void) { free_nodes_with_id__6TLobbyFUi((void*)(TWindowKeyBoardSoft__text_resource)); TWindowKeyBoardSoft__language_text_resources = 0; text_language_group_table = 0; TWindowKeyBoardSoft__text_resource = 0; }

void TLanguage__ct(s32 arg0) {
    s32 sp8;
    sp8 = tmp_buf_use_req__6TLobbyFPv((void *) (lbl_8043EAE8));
    draw_string__9TLanguageFPvPvi((void *) (lbl_8043EAF4), (void *) (&sp8), (int) (0x48));
    tmp_buf_release__6TLobbyFi((void *) (lbl_8043EAE8));
    switch (arg0) {
    case 0:
        draw_string__9TLanguageFPvPvi((void *) (lbl_8043EB08), (void *) (&sp8), (int) (0x49));
        draw_string__9TLanguageFPvPvi((void *) (lbl_8043EB24), (void *) (&sp8), (int) (2));
        draw_string__9TLanguageFPvPvi((void *) (lbl_8043EB34), (void *) (&sp8), (int) (3));
        decode_font_data__9TLanguageFPvPvii((void *) (lbl_8043EB50), (void *) (&sp8), (int) (0x4B), (int) (0x4C));
        localized_alphabet_list = load_gvm_texture_file((void *) (lbl_8043EB68));
        break;
    case 2:
        draw_string__9TLanguageFPvPvi((void *) (lbl_8043EB7C), (void *) (&sp8), (int) (0x49));
        draw_string__9TLanguageFPvPvi((void *) (lbl_8043EB98), (void *) (&sp8), (int) (2));
        draw_string__9TLanguageFPvPvi((void *) (lbl_8043EBA8), (void *) (&sp8), (int) (3));
        decode_font_data__9TLanguageFPvPvii((void *) (lbl_8043EBC4), (void *) (&sp8), (int) (0x4B), (int) (0x4C));
        localized_alphabet_list = load_gvm_texture_file((void *) (lbl_8043EBDC));
        break;
    case 3:
        draw_string__9TLanguageFPvPvi((void *) (lbl_8043EBF0), (void *) (&sp8), (int) (0x49));
        draw_string__9TLanguageFPvPvi((void *) (lbl_8043EB98), (void *) (&sp8), (int) (2));
        draw_string__9TLanguageFPvPvi((void *) (lbl_8043EC0C), (void *) (&sp8), (int) (3));
        decode_font_data__9TLanguageFPvPvii((void *) (lbl_8043EBC4), (void *) (&sp8), (int) (0x4B), (int) (0x4C));
        localized_alphabet_list = load_gvm_texture_file((void *) (lbl_8043EC28));
        break;
    case 4:
        draw_string__9TLanguageFPvPvi((void *) (lbl_8043EC3C), (void *) (&sp8), (int) (0x49));
        draw_string__9TLanguageFPvPvi((void *) (lbl_8043EB98), (void *) (&sp8), (int) (2));
        draw_string__9TLanguageFPvPvi((void *) (lbl_8043EC58), (void *) (&sp8), (int) (3));
        decode_font_data__9TLanguageFPvPvii((void *) (lbl_8043EBC4), (void *) (&sp8), (int) (0x4B), (int) (0x4C));
        localized_alphabet_list = load_gvm_texture_file((void *) (lbl_8043EC74));
        break;
    default:
        draw_string__9TLanguageFPvPvi((void *) (lbl_8043EC88), (void *) (&sp8), (int) (0x49));
        draw_string__9TLanguageFPvPvi((void *) (lbl_8043EB98), (void *) (&sp8), (int) (2));
        draw_string__9TLanguageFPvPvi((void *) (lbl_8043ECA4), (void *) (&sp8), (int) (3));
        decode_font_data__9TLanguageFPvPvii((void *) (lbl_8043EBC4), (void *) (&sp8), (int) (0x4B), (int) (0x4C));
        localized_alphabet_list = load_gvm_texture_file((void *) (lbl_8043ECC0));
        break;
    }
    begin_render__20TWindowSubStatusDispFv();
    set_entry_index__9TLanguageFii((int) (0), (int) (0x48));
    set_entry_index__9TLanguageFii((int) (2), (int) (0x4B));
    set_entry_index__9TLanguageFii((int) (1), (int) (0x49));
    set_entry_index__9TLanguageFii((int) (3), (int) (2));
    set_entry_index__9TLanguageFii((int) (4), (int) (3));
}

void select_language_text_resources(s32 arg0) {
    switch (arg0) {
    case 0:
        (*(u8 * *)&TWindowKeyBoardSoft__text_resource) = load_text_resource_pair(lbl_8043ECD4);
        break;
    case 2:
        (*(u8 * *)&TWindowKeyBoardSoft__text_resource) = load_text_resource_pair(lbl_8043ECE4);
        break;
    case 3:
        (*(u8 * *)&TWindowKeyBoardSoft__text_resource) = load_text_resource_pair(lbl_8043ECF0);
        break;
    case 4:
        (*(u8 * *)&TWindowKeyBoardSoft__text_resource) = load_text_resource_pair(lbl_8043ECFC);
        break;
    default:
        (*(u8 * *)&TWindowKeyBoardSoft__text_resource) = load_text_resource_pair(lbl_8043ED08);
        break;
    }
    (*(s32 *)&TWindowKeyBoardSoft__language_text_resources) = M2C_FIELD((*(u8 * *)&TWindowKeyBoardSoft__text_resource), s32 *, 0);
    (*(s32 *)&text_language_group_table) = M2C_FIELD((*(u8 * *)&TWindowKeyBoardSoft__text_resource), s32 *, 4);
}

}

#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

int TLobby__sub_80132EC8(void);
s32 set_language__19TWindowKeyBoardSoftFc(s8 arg0);
void *get_global_state__23TAdSinglePlyChrSelectGCFv();

extern s32 current_language;

s32 set_language__19TWindowKeyBoardSoftFc(s8 arg0) {
    void *temp_r3;

    if ((s32) current_language == arg0) {
        return 0;
    }
    free_instance__19TWindowKeyBoardSoftFv();
    free_resources__19TWindowKeyBoardSoftFv();
    temp_r3 = get_global_state__23TAdSinglePlyChrSelectGCFv();
    if (temp_r3 != NULL) {
        M2C_FIELD(temp_r3, s8 *, 7) = arg0;
    }
    current_language = (s32)(s8) arg0;
    select_language_text_resources((s8) current_language);
    TLanguage__ct(current_language);
    return 1;
}

int TLobby__sub_80132EC8(void) { return 1; }

}
