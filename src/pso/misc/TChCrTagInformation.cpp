#include "types.h"
#include "pso/misc/TChCrTagInformation.h"

struct Tag_802A1E8C {
    u8 pad[0x24];
    f32 f24;
};

extern "C" {
s32 get_char_select_class_id();
s32 get_selected_index__15TChCrCharSelectFv();
s32 get_selected_char__15TChCrCharSelectFv();
void get_instance__15TChCrCharSelectFv();
void fn_80309890(void *, s32);
extern const f32 lbl_805DDE1C;
}

extern "C" {

int TChCrTagInformation__vt4(void);
void *__dt__19TChCrTagInformationFv(void *arg0, s16 arg1);
int update_fade__8TChCrTagFPv(void*);
int draw_char_info_sprites__16TObjCMAssignMenuFv(void*);
void __dl__7TObjectFPv(void *);
void __dt__8TChCrTagFv(void *, int);
void fn_803098DC(void);

int TChCrTagInformation::render() { return draw_char_info_sprites__16TObjCMAssignMenuFv(this); }

void TChCrTagInformation::update_selected_char() {
    Tag_802A1E8C *arg0 = (Tag_802A1E8C *)this;
    s32 c;
    if (arg0->f24 < lbl_805DDE1C) {
        fn_80309890(arg0, -1);
        return;
    }
    switch (get_selected_index__15TChCrCharSelectFv()) {
    case 0:
        c = get_selected_char__15TChCrCharSelectFv();
        if (c >= 0) {
            fn_80309890(arg0, c);
        }
        break;
    default:
        get_instance__15TChCrCharSelectFv();
        fn_80309890(arg0, get_char_select_class_id() + 3);
        break;
    }
}

void TChCrTagInformation::run_task() { update_fade__8TChCrTagFPv(this); update_selected_char(); }
int TChCrTagInformation__vt4(void) { return 0; }

extern s32 __vt__19TChCrTagInformation[];

void *__dt__19TChCrTagInformationFv(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        *(s32 **)((s8 *)arg0 + 0x18) = __vt__19TChCrTagInformation;
        fn_803098DC();
        __dt__8TChCrTagFv(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

}
