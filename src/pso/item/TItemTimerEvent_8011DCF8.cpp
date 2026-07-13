#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

extern "C" {

void *TItemTimerEvent__sub_8011DCF8(void *arg0, s16 arg1);
void *TItemTimerEvent__sub_8011DD50(void *arg0, s16 arg1);
void *TItemTimerEvent__sub_8011DDA8(void *arg0, s16 arg1);
void *TItemTimerEvent__sub_8011DE00(void *arg0, s16 arg1);
void *TItemTimerEvent__sub_8011DE58(void *arg0, s16 arg1);
void *TItemTimerEvent__sub_8011DEB0(void *arg0, s16 arg1);
void *TItemTimerEvent__sub_8011DF08(void *arg0, s16 arg1);
void *TItemTimerEvent__sub_8011DF60(void *arg0, s16 arg1);
void *TItemTimerEvent__sub_8011DFB8(void *arg0, s16 arg1);
void *TItemTimerEvent__sub_8011E010(void *arg0, s16 arg1);
void TItemTimerEvent__vt0(void *, int);
void free_to_heap__11TItemMagSubFPv(void *);

extern M2C_UNK lbl_804A0568[];

void *TItemTimerEvent__sub_8011DCF8(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = lbl_804A0568;
        TItemTimerEvent__vt0(arg0, 0);
        if (arg1 > 0) {
            free_to_heap__11TItemMagSubFPv(arg0);
        }
    }
    return arg0;
}

extern M2C_UNK lbl_804A0588[];

void *TItemTimerEvent__sub_8011DD50(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = lbl_804A0588;
        TItemTimerEvent__vt0(arg0, 0);
        if (arg1 > 0) {
            free_to_heap__11TItemMagSubFPv(arg0);
        }
    }
    return arg0;
}

extern M2C_UNK lbl_804A05A8[];

void *TItemTimerEvent__sub_8011DDA8(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = lbl_804A05A8;
        TItemTimerEvent__vt0(arg0, 0);
        if (arg1 > 0) {
            free_to_heap__11TItemMagSubFPv(arg0);
        }
    }
    return arg0;
}

extern M2C_UNK lbl_804A05C8[];

void *TItemTimerEvent__sub_8011DE00(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = lbl_804A05C8;
        TItemTimerEvent__vt0(arg0, 0);
        if (arg1 > 0) {
            free_to_heap__11TItemMagSubFPv(arg0);
        }
    }
    return arg0;
}

extern M2C_UNK lbl_804A05E8[];

void *TItemTimerEvent__sub_8011DE58(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = lbl_804A05E8;
        TItemTimerEvent__vt0(arg0, 0);
        if (arg1 > 0) {
            free_to_heap__11TItemMagSubFPv(arg0);
        }
    }
    return arg0;
}

extern M2C_UNK lbl_804A0608[];

void *TItemTimerEvent__sub_8011DEB0(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = lbl_804A0608;
        TItemTimerEvent__vt0(arg0, 0);
        if (arg1 > 0) {
            free_to_heap__11TItemMagSubFPv(arg0);
        }
    }
    return arg0;
}

extern M2C_UNK lbl_804A0628[];

void *TItemTimerEvent__sub_8011DF08(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = lbl_804A0628;
        TItemTimerEvent__vt0(arg0, 0);
        if (arg1 > 0) {
            free_to_heap__11TItemMagSubFPv(arg0);
        }
    }
    return arg0;
}

extern M2C_UNK lbl_804A0648[];

void *TItemTimerEvent__sub_8011DF60(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = lbl_804A0648;
        TItemTimerEvent__vt0(arg0, 0);
        if (arg1 > 0) {
            free_to_heap__11TItemMagSubFPv(arg0);
        }
    }
    return arg0;
}

extern M2C_UNK lbl_804A0668[];

void *TItemTimerEvent__sub_8011DFB8(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = lbl_804A0668;
        TItemTimerEvent__vt0(arg0, 0);
        if (arg1 > 0) {
            free_to_heap__11TItemMagSubFPv(arg0);
        }
    }
    return arg0;
}

extern M2C_UNK lbl_804A0688[];

void *TItemTimerEvent__sub_8011E010(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = lbl_804A0688;
        TItemTimerEvent__vt0(arg0, 0);
        if (arg1 > 0) {
            free_to_heap__11TItemMagSubFPv(arg0);
        }
    }
    return arg0;
}

}
