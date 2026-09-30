#include "types.h"

struct Names_8017E1E4 { const char *name[2]; };

extern "C" {
s32 get_global_state__14TOKeyMachine01Fv();
void TObjBgmColCtrl__sub_802274B8(const char *);
extern Names_8017E1E4 lbl_80443898[];
extern char lbl_804438A0[];
extern char lbl_804438B0[];
extern char lbl_804438C0[];
extern char lbl_804438D0[];
extern char lbl_804438DC[];
extern char lbl_804438EC[];
extern char lbl_804438F8[];
extern char lbl_80443904[];
extern u32 lbl_805D55A0;
extern u32 TObjBgmColCtrl__data_805D5B0C;
void TObjBgmColCtrl__sub_8017E1E4(void);
}

extern "C" {

void render__14TObjBgmColCtrlFv(void);

void TObjBgmColCtrl__sub_8017E1E4(void) {
    Names_8017E1E4 names = lbl_80443898[0];
    const char *name;
    if (get_global_state__14TOKeyMachine01Fv() == 0xF) {
        name = names.name[1];
        TObjBgmColCtrl__data_805D5B0C = lbl_805D55A0;
    } else {
        name = names.name[0];
        TObjBgmColCtrl__data_805D5B0C = 0;
    }
    switch (TObjBgmColCtrl__data_805D5B0C) {
    case 1:
        TObjBgmColCtrl__sub_802274B8(lbl_804438A0);
        break;
    case 7:
        TObjBgmColCtrl__sub_802274B8(lbl_804438B0);
        break;
    case 3:
    case 9:
        TObjBgmColCtrl__sub_802274B8(lbl_804438C0);
        break;
    case 4:
        TObjBgmColCtrl__sub_802274B8(lbl_804438D0);
        break;
    case 5:
        TObjBgmColCtrl__sub_802274B8(lbl_804438DC);
        break;
    case 6:
        TObjBgmColCtrl__sub_802274B8(lbl_804438EC);
        break;
    case 12:
    case 14:
        TObjBgmColCtrl__sub_802274B8(lbl_804438F8);
        break;
    case 10:
        TObjBgmColCtrl__sub_802274B8(lbl_80443904);
        break;
    default:
        TObjBgmColCtrl__sub_802274B8(name);
        break;
    }
}

void render__14TObjBgmColCtrlFv(void) {  }

}
