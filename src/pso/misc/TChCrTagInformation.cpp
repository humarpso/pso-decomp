#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

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
void TChCrTagInformation__sub_802A1E8C(Tag_802A1E8C *arg0);
}

extern "C" {

int TChCrTagInformation__vt4(void);
void *__dt__19TChCrTagInformationFv(void *arg0, s16 arg1);
int render__19TChCrTagInformationFv(void* p);
void run_task__19TChCrTagInformationFv(void* p);
int update_fade__8TChCrTagFPv(void*);
int TObjCMAssignMenu__sub_802A1C04(void*);
void __dl__7TObjectFPv(void *);
void __dt__8TChCrTagFv(void *, int);
void fn_803098DC(void);

int render__19TChCrTagInformationFv(void* p) { return TObjCMAssignMenu__sub_802A1C04(p); }

void TChCrTagInformation__sub_802A1E8C(Tag_802A1E8C *arg0) {
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

void run_task__19TChCrTagInformationFv(void* p) { update_fade__8TChCrTagFPv(p); TChCrTagInformation__sub_802A1E8C((Tag_802A1E8C *)(p)); }
int TChCrTagInformation__vt4(void) { return 0; }

extern M2C_UNK __vt__19TChCrTagInformation[];

void *__dt__19TChCrTagInformationFv(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = __vt__19TChCrTagInformation;
        fn_803098DC();
        __dt__8TChCrTagFv(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

}
