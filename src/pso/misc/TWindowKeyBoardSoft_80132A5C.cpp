#include "types.h"
#include "pso/misc/TLobby_800F9690.h"
#include "pso/misc/TWindowKeyBoardSoft_80132A5C.h"
#include "pso/misc/TWindowKeyBoardSoft.h"
#include "pso/misc/TLanguage.h"
#include "pso/misc/TLobby.h"
#include "pso/ui/TAdSinglePlyChrSelectGC.h"

struct Inner_80132A5C { char pad8[0x8]; u32 f8; };
struct Outer_80132A5C { struct Inner_80132A5C *f0; };

struct Outer_80132A5C;
extern s32 lbl_8043ECD4[];
extern s32 lbl_8043ECE4[];
extern s32 lbl_8043ECF0[];
extern s32 lbl_8043ECFC[];
extern s32 lbl_8043ED08[];
extern int TWindowKeyBoardSoft__text_resource;
extern int text_language_group_table;
extern int TWindowKeyBoardSoft__language_text_resources;
extern "C" {
s32 begin_render__20TWindowSubStatusDispFl();
u8 *load_gvm_texture_file(s32 arg0);
extern s32 lbl_8043EAE8[];
extern s32 lbl_8043EAF4[];
extern s32 lbl_8043EB08[];
extern s32 lbl_8043EB24[];
extern s32 lbl_8043EB34[];
extern s32 lbl_8043EB50[];
extern s32 lbl_8043EB68[];
extern s32 lbl_8043EB7C[];
extern s32 lbl_8043EB98[];
extern s32 lbl_8043EBA8[];
extern s32 lbl_8043EBC4[];
extern s32 lbl_8043EBDC[];
extern s32 lbl_8043EBF0[];
extern s32 lbl_8043EC0C[];
extern s32 lbl_8043EC28[];
extern s32 lbl_8043EC3C[];
extern s32 lbl_8043EC58[];
extern s32 lbl_8043EC74[];
extern s32 lbl_8043EC88[];
extern s32 lbl_8043ECA4[];
extern s32 lbl_8043ECC0[];
extern struct Outer_80132A5C *localized_alphabet_list;
s32 TLobby__sub_803DA16C(void *);

void TWindowKeyBoardSoft::free_instance() {
    if (localized_alphabet_list != NULL) {
        struct Inner_80132A5C *inner = localized_alphabet_list->f0;
        if (inner->f8 != 0U) {
            TLobby__sub_803DA16C(localized_alphabet_list);
        }
        TAdSinglePlyChrSelectGC::safe_free((u32)localized_alphabet_list);
        localized_alphabet_list = NULL;
    }
}

void TWindowKeyBoardSoft::free_resources() { TLobby::free_nodes_with_id(TWindowKeyBoardSoft__text_resource); TWindowKeyBoardSoft__language_text_resources = 0; text_language_group_table = 0; TWindowKeyBoardSoft__text_resource = 0; }

void TLanguage__ct(s32 arg0) {
    s32 sp8;
    sp8 = TLobby::tmp_buf_use_req((const char *)lbl_8043EAE8);
    TLanguage::draw_string(lbl_8043EAF4, &sp8, 0x48);
    ((TLobby *)lbl_8043EAE8)->tmp_buf_release();
    switch (arg0) {
    case 0:
        TLanguage::draw_string(lbl_8043EB08, &sp8, 0x49);
        TLanguage::draw_string(lbl_8043EB24, &sp8, 2);
        TLanguage::draw_string(lbl_8043EB34, &sp8, 3);
        TLanguage::decode_font_data(lbl_8043EB50, &sp8, 0x4B, 0x4C);
        localized_alphabet_list = (Outer_80132A5C *)load_gvm_texture_file((s32)lbl_8043EB68);
        break;
    case 2:
        TLanguage::draw_string(lbl_8043EB7C, &sp8, 0x49);
        TLanguage::draw_string(lbl_8043EB98, &sp8, 2);
        TLanguage::draw_string(lbl_8043EBA8, &sp8, 3);
        TLanguage::decode_font_data(lbl_8043EBC4, &sp8, 0x4B, 0x4C);
        localized_alphabet_list = (Outer_80132A5C *)load_gvm_texture_file((s32)lbl_8043EBDC);
        break;
    case 3:
        TLanguage::draw_string(lbl_8043EBF0, &sp8, 0x49);
        TLanguage::draw_string(lbl_8043EB98, &sp8, 2);
        TLanguage::draw_string(lbl_8043EC0C, &sp8, 3);
        TLanguage::decode_font_data(lbl_8043EBC4, &sp8, 0x4B, 0x4C);
        localized_alphabet_list = (Outer_80132A5C *)load_gvm_texture_file((s32)lbl_8043EC28);
        break;
    case 4:
        TLanguage::draw_string(lbl_8043EC3C, &sp8, 0x49);
        TLanguage::draw_string(lbl_8043EB98, &sp8, 2);
        TLanguage::draw_string(lbl_8043EC58, &sp8, 3);
        TLanguage::decode_font_data(lbl_8043EBC4, &sp8, 0x4B, 0x4C);
        localized_alphabet_list = (Outer_80132A5C *)load_gvm_texture_file((s32)lbl_8043EC74);
        break;
    default:
        TLanguage::draw_string(lbl_8043EC88, &sp8, 0x49);
        TLanguage::draw_string(lbl_8043EB98, &sp8, 2);
        TLanguage::draw_string(lbl_8043ECA4, &sp8, 3);
        TLanguage::decode_font_data(lbl_8043EBC4, &sp8, 0x4B, 0x4C);
        localized_alphabet_list = (Outer_80132A5C *)load_gvm_texture_file((s32)lbl_8043ECC0);
        break;
    }
    begin_render__20TWindowSubStatusDispFl();
    TLanguage::set_entry_index(0, 0x48);
    TLanguage::set_entry_index(2, 0x4B);
    TLanguage::set_entry_index(1, 0x49);
    TLanguage::set_entry_index(3, 2);
    TLanguage::set_entry_index(4, 3);
}
}

void select_language_text_resources(s32 arg0) {
    switch (arg0) {
    case 0:
        (*(u8 * *)&TWindowKeyBoardSoft__text_resource) = (u8 *)load_text_resource_pair((s32)lbl_8043ECD4);
        break;
    case 2:
        (*(u8 * *)&TWindowKeyBoardSoft__text_resource) = (u8 *)load_text_resource_pair((s32)lbl_8043ECE4);
        break;
    case 3:
        (*(u8 * *)&TWindowKeyBoardSoft__text_resource) = (u8 *)load_text_resource_pair((s32)lbl_8043ECF0);
        break;
    case 4:
        (*(u8 * *)&TWindowKeyBoardSoft__text_resource) = (u8 *)load_text_resource_pair((s32)lbl_8043ECFC);
        break;
    default:
        (*(u8 * *)&TWindowKeyBoardSoft__text_resource) = (u8 *)load_text_resource_pair((s32)lbl_8043ED08);
        break;
    }
    (*(s32 *)&TWindowKeyBoardSoft__language_text_resources) = *(s32 *)((s8 *)(*(u8 * *)&TWindowKeyBoardSoft__text_resource) + 0);
    (*(s32 *)&text_language_group_table) = *(s32 *)((s8 *)(*(u8 * *)&TWindowKeyBoardSoft__text_resource) + 4);
}
extern "C" {

void *get_global_state__23TAdSinglePlyChrSelectGCFv();

extern s32 current_language;

s32 TWindowKeyBoardSoft::set_language(s8 arg0) {
    void *temp_r3;

    if ((s32) current_language == arg0) {
        return 0;
    }
    TWindowKeyBoardSoft::free_instance();
    TWindowKeyBoardSoft::free_resources();
    temp_r3 = get_global_state__23TAdSinglePlyChrSelectGCFv();
    if (temp_r3 != NULL) {
        *(s8 *)((s8 *)temp_r3 + 7) = arg0;
    }
    current_language = (s32)(s8) arg0;
    select_language_text_resources((s8) current_language);
    TLanguage__ct(current_language);
    return 1;
}

int TLobby__sub_80132EC8(void) { return 1; }
}
