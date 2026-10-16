#include "types.h"
#include "pso/misc/TLobby.h"
#include "pso/misc/TWindowKeyBoardBase.h"
#include "pso/misc/TWindowDD.h"
#include "pso/ui/TAdSinglePlyChrSelectGC.h"

struct RecoveredGlobal_8025E9E4_lbl_804CFA70 { s32 value; u8 remaining[0x10]; };
typedef char RecoveredGlobal_8025E9E4_lbl_804CFA70_size[sizeof(RecoveredGlobal_8025E9E4_lbl_804CFA70) == 0x14 ? 1 : -1];

struct RecoveredGlobal_8025E9E4___vt__19TWindowKeyBoardBase { s32 value; u8 remaining[0x14]; };
typedef char RecoveredGlobal_8025E9E4___vt__19TWindowKeyBoardBase_size[sizeof(RecoveredGlobal_8025E9E4___vt__19TWindowKeyBoardBase) == 0x18 ? 1 : -1];

extern "C" {
int mem_alloc(void *);
u8 * get_window_layout_position(s32);
s32 init_keyboard_text_buffer(void *, int, int);
s32 construct_base__9TWindowDDFPvPvsPv(void *, void *, int, int);
s32 init_keyboard_text_field(void *, int, int);
extern RecoveredGlobal_8025E9E4_lbl_804CFA70 TWindowKeyBoardBase__window_descriptor;
extern s32 __vt__19TWindowKeyBoardBase[];
extern s32 keyboard_base_type_name_pointer;
extern s32 current_language;
u8 *TWindowKeyBoardBase__ct(u8 *arg0);
s32 set_stream_and_load_file__6TLobbyFi(s32 *);
s32 Dolphin_ARAlloc(s32);
s32 TQuestVmDownLoadServer__sub_803F09A4();
s32 TQuestVmDownLoadServer__sub_803F0C04(s32, s32, s32, s32, s32);
extern s32 lbl_8044F098[];
}

extern "C" {

void *__dt__19TWindowKeyBoardBaseFv(void *arg0, s16 arg1);
s32 TWindowChat__sub_8025CB10(void *);
s32 TWindowKeyBoardHard__sub_8025EB68();
s32 draw_window_frame(void *, s32);
s32 TWindowSubStatusDisp__sub_8025E6DC(void *, s32);
void __dl__7TObjectFPv(void *);
void destroy__19TWindowKeyBoardBaseFPvs(void *, int);
void mem_free(void *);
int initialize_subwindow__9TWindowDDFv(void*);
int update_fade__17TWindowSubComCardFv(void*);

void TWindowKeyBoardBase::render() {
    s32 temp_r31;

    if ((TWindowKeyBoardHard__sub_8025EB68() == 0) && ((TWindowChat__sub_8025CB10(this) != 0) || (*(u16 *)((s8 *)this + 0x62) & 2))) {
        temp_r31 = TWindowDD::draw_default_entry((s32)this);
        if (*(u16 *)((s8 *)this + 0x62) & 2) {
            draw_window_frame(this, temp_r31);
        }
        TWindowSubStatusDisp__sub_8025E6DC(this, temp_r31);
    }
}

void TWindowKeyBoardBase::run_task() { initialize_subwindow__9TWindowDDFv(this); update_fade__17TWindowSubComCardFv(this); }

extern s32 __vt__19TWindowKeyBoardBase[];

void *__dt__19TWindowKeyBoardBaseFv(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        *(s32 **)((s8 *)arg0 + 0x18) = __vt__19TWindowKeyBoardBase;
        mem_free(*(void **)((s8 *)arg0 + 0x9C));
        destroy__19TWindowKeyBoardBaseFPvs((s8 *)arg0 + 0x84, -1);
        destroy__19TWindowKeyBoardBaseFPvs((s8 *)arg0 + 0x6C, -1);
        ((TWindowDD *)arg0)->destroy_window_base(0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}
u8 *TWindowKeyBoardBase__ct(u8 *arg0) {
    s32 temp_r31;
    construct_base__9TWindowDDFPvPvsPv((void *) (arg0), (void *) (&TWindowKeyBoardBase__window_descriptor.value), (int) (4), (int) (get_window_layout_position(0xB7)));
    *(s32 **)((s8 *)arg0 + 0x18) = &(*(RecoveredGlobal_8025E9E4___vt__19TWindowKeyBoardBase *)&__vt__19TWindowKeyBoardBase).value;
    ((TWindowKeyBoardBase *)(arg0 + 0x6C))->init_text_buffer_holder();
    ((TWindowKeyBoardBase *)(arg0 + 0x84))->init_text_buffer_holder();
    *(s32 *)((s8 *)arg0 + 0) = (s32) keyboard_base_type_name_pointer;
    temp_r31 = current_language;
    init_keyboard_text_field((void *) (arg0), (int) (0), (int) (0));
    init_keyboard_text_buffer((void *) (arg0 + 0x84), (int) (0), (int) (0));
    *(u8 **)((s8 *)arg0 + 0x68) = (unsigned char *) ((void *) (arg0 + 0x6C));
    *(s32 *)((s8 *)arg0 + 0xB4) = 0;
    *(s16 *)((s8 *)arg0 + 0x62) = 0;
    *(s8 *)((s8 *)arg0 + 0x65) = -1;
    *(s32 *)((s8 *)arg0 + 0x9C) = 0;
    *(s32 *)((s8 *)arg0 + 0xA0) = 0;
    *(s32 *)((s8 *)arg0 + 0xA4) = 0;
    *(s32 *)((s8 *)arg0 + 0xA8) = 0;
    *(s32 *)((s8 *)arg0 + 0xAC) = 0;
    if (temp_r31 == 0) {
        init_keyboard_text_buffer((void *) (arg0 + 0x84), (int) (0x24), (int) (0));
        *(s32 *)((s8 *)arg0 + 0x9C) = mem_alloc((void *)0x194);
        *(s32 *)((s8 *)arg0 + 0xB0) = 0x94;
    }
    return arg0;
}
void TLobby::load_ask_dictionary() {
    s32 data;
    s32 size;
    s32 aligned;
    s32 aram;
    size = ((TLobby *)lbl_8044F098)->get_resource_file_size();
    aligned = (size + 0x1F) & ~0x1F;
    aram = Dolphin_ARAlloc(aligned);
    data = set_stream_and_load_file__6TLobbyFi(lbl_8044F098);
    TLobby::aram_transfer_sync(3, data, aram, aligned);
    TAdSinglePlyChrSelectGC::safe_free(data);
    TQuestVmDownLoadServer__sub_803F0C04(aram, size, 3, 1, 0x2710);
    TQuestVmDownLoadServer__sub_803F09A4();
}

}
