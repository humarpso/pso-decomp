#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

struct RecoveredGlobal_803EE2E4_lbl_8058DC98 {
    s8 value;
    u8 remaining[0x4F];
};

struct RecoveredGlobal_803E6ACC_lbl_805A0470 {
    M2C_UNK value;
    u8 remaining[0x24];
};

struct RecoveredGlobal_803E6ACC_lbl_805A0498 {
    M2C_UNK value;
    u8 remaining[0x134];
};

struct RecoveredGlobal_803E6ACC_lbl_805A05D0 {
    M2C_UNK value;
    u8 remaining[0xC4];
};

struct RecoveredGlobal_803E8710_lbl_8058DE08 {
    M2C_UNK value;
    u8 remaining[0x40];
};

struct RecoveredGlobal_803E875C_lbl_8058DE08 {
    M2C_UNK value;
    u8 remaining[0x40];
};

struct RecoveredGlobal_803E9764_lbl_80591EC8 {
    M2C_UNK value;
    u8 remaining[0x1FFC];
};

struct RecoveredGlobal_803E9F20_lbl_80595998 {
    M2C_UNK value;
    u8 remaining[0x8BC];
};

struct RecoveredGlobal_803EDB20_lbl_8047F8B8 {
    M2C_UNK value;
    u8 remaining[0xFC];
};

struct RecoveredGlobal_803EDB3C_lbl_8047F8B8 {
    M2C_UNK value;
    u8 remaining[0xFC];
};

struct RecoveredGlobal_803EDB58_lbl_8047F8B8 {
    M2C_UNK value;
    u8 remaining[0xFC];
};

struct RecoveredGlobal_803EDB74_lbl_8047F8B8 {
    M2C_UNK value;
    u8 remaining[0xFC];
};

struct RecoveredGlobal_803E6ED0_lbl_805A0470 {
    M2C_UNK value;
    u8 remaining[0x24];
};

struct RecoveredGlobal_803E6ED0_lbl_805A0498 {
    M2C_UNK value;
    u8 remaining[0x134];
};

struct RecoveredGlobal_803E6ED0_lbl_805A05D0 {
    M2C_UNK value;
    u8 remaining[0xC4];
};

struct RecoveredGlobal_803E721C_lbl_8047E698 {
    M2C_UNK value;
    u8 remaining[0x1FC];
};

struct RecoveredGlobal_803E9594_lbl_80591EC8 {
    M2C_UNK value;
    u8 remaining[0x1FFC];
};

extern "C" {
extern RecoveredGlobal_803EE2E4_lbl_8058DC98 lbl_8058DC98;
void TQuestVmDownLoadServer__sub_803EE2E4(void);
void TQuestVmDownLoadServer__sub_803EAE84(s32, s32, s32);
void TQuestVmDownLoadServer__sub_803EAEF0(void);
void TQuestVmDownLoadServer__sub_803ECFE4(void);
void TQuestVmDownLoadServer__sub_803EE2E4(void);
s32 get_download_state__22TQuestVmDownLoadServerFv(void);
extern RecoveredGlobal_803E6ACC_lbl_805A0470 lbl_805A0470;
extern RecoveredGlobal_803E6ACC_lbl_805A0498 lbl_805A0498;
extern RecoveredGlobal_803E6ACC_lbl_805A05D0 lbl_805A05D0;
extern s32 lbl_805D7848;
extern M2C_UNK *lbl_805D78B8;
extern M2C_UNK *lbl_805D78BC;
extern s32 lbl_805D78C0;
extern M2C_UNK *lbl_805D78C4;
extern M2C_UNK *lbl_805D78C8;
extern M2C_UNK *lbl_805D78CC;
extern M2C_UNK *lbl_805D78D0;
extern M2C_UNK *lbl_805D78D4;
extern M2C_UNK *lbl_805D78D8;
extern s32 lbl_805D78DC;
extern s32 lbl_805D78F4;
void TQuestVmDownLoadServer__sub_803E6ACC(s32 arg0);
s32 TQuestVmDownLoadServer__sub_803F0BD8(void *);
extern s32 lbl_805D7904;
s32 TQuestVmDownLoadServer__sub_803E86C8(void);
s32 TQuestVmDownLoadServer__sub_803F0BE0(void *, void *);
extern RecoveredGlobal_803E8710_lbl_8058DE08 lbl_8058DE08;
extern s32 lbl_805D78F8;
extern s32 lbl_805D7904;
s32 TQuestVmDownLoadServer__sub_803E8710(void);
s32 TAdSinglePlyChrSelectGC__sub_8039DCE0(void *, void *);
extern RecoveredGlobal_803E8710_lbl_8058DE08 lbl_8058DE08;
u32 TQuestVmDownLoadServer__sub_803F0AB8(s32, u32);
void TQuestVmDownLoadServer__sub_803E8790(s32 arg0, u32 arg1);
s32 TQuestVmDownLoadServer__sub_803E8624(int);
s32 TQuestVmDownLoadServer__sub_803E8788(int, void *, int);
extern RecoveredGlobal_803E9764_lbl_80591EC8 lbl_80591EC8;
extern s8 lbl_805D7868;
extern s32 lbl_805D7904;
void TQuestVmDownLoadServer__sub_803E9764(void);
extern RecoveredGlobal_803E9F20_lbl_80595998 lbl_80595998;
void TQuestVmDownLoadServer__sub_803E9F20(s32 arg0);
s32 TQuestVmDownLoadServer__sub_803EC838(u16 arg0);
s32 TQuestVmDownLoadServer__sub_803EC884(u16 arg0);
s32 TQuestVmDownLoadServer__sub_803E6F48();
s32 TQuestVmDownLoadServer__sub_803EC8D8(u16 arg0);
u16 TQuestVmDownLoadServer__sub_803ED0B4(u8 *arg0, u16 arg1);
extern RecoveredGlobal_803EDB20_lbl_8047F8B8 lbl_8047F8B8;
s32 TQuestVmDownLoadServer__sub_803EDB20(u8 arg0);
extern RecoveredGlobal_803EDB20_lbl_8047F8B8 lbl_8047F8B8;
s32 TQuestVmDownLoadServer__sub_803EDB3C(u8 arg0);
extern RecoveredGlobal_803EDB20_lbl_8047F8B8 lbl_8047F8B8;
s32 TQuestVmDownLoadServer__sub_803EDB58(u8 arg0);
extern RecoveredGlobal_803EDB20_lbl_8047F8B8 lbl_8047F8B8;
s32 TQuestVmDownLoadServer__sub_803EDB74(u8 arg0);
void TQuestVmDownLoadServer__sub_803E7ACC(void);
s32 TQuestVmDownLoadServer__sub_803E8150(void);
s32 TQuestVmDownLoadServer__sub_803E86C8(void);
void TQuestVmDownLoadServer__sub_803E9764(void);
extern s32 lbl_805D7904;
s32 TQuestVmDownLoadServer__sub_803F0890(void);
void TQuestVmDownLoadServer__sub_803EAE84(s32, s32, s32);
void TQuestVmDownLoadServer__sub_803EE2E4(void);
extern RecoveredGlobal_803E6ACC_lbl_805A0470 lbl_805A0470;
extern RecoveredGlobal_803E6ACC_lbl_805A0498 lbl_805A0498;
extern RecoveredGlobal_803E6ACC_lbl_805A05D0 lbl_805A05D0;
extern M2C_UNK *lbl_805D78B8;
extern M2C_UNK *lbl_805D78BC;
extern s32 lbl_805D78C0;
extern M2C_UNK *lbl_805D78C4;
extern M2C_UNK *lbl_805D78C8;
extern M2C_UNK *lbl_805D78CC;
extern M2C_UNK *lbl_805D78D0;
extern M2C_UNK *lbl_805D78D4;
extern M2C_UNK *lbl_805D78D8;
void TQuestVmDownLoadServer__sub_803E6ED0(void);
extern RecoveredGlobal_803E721C_lbl_8047E698 lbl_8047E698;
u16 TQuestVmDownLoadServer__sub_803E721C(u16 arg0);
s32 strcpy(void *, void *);
extern RecoveredGlobal_803E8710_lbl_8058DE08 lbl_8058DE08;
void TQuestVmDownLoadServer__sub_803E875C(s32 arg0);
extern RecoveredGlobal_803E9764_lbl_80591EC8 lbl_80591EC8;
u8 *TQuestVmDownLoadServer__sub_803E9594(s32 arg0);
s32 TWindowKeyBoardSoft__sub_803E6808(void *, void *);
s32 TWindowKeyBoardSoft__sub_803E683C();
extern s32 lbl_805D782C;
extern s32 lbl_805D7834;
extern s32 lbl_805D7908;
extern s32 lbl_805D790C;
extern M2C_UNK lbl_805E10D8;
extern M2C_UNK lbl_805E10E0;
s32 TQuestVmDownLoadServer__sub_803F09A4(void);
}

extern "C" {

s32 TQuestVmDownLoadServer__sub_803E719C(u8 arg0, s32 arg1);
void TQuestVmDownLoadServer__sub_803E8918(void);
void TQuestVmDownLoadServer__sub_803F0BE8(u8 *arg0);
s32 get_buffer_size__22TQuestVmDownLoadServerFv(void);
s32 get_download_state__22TQuestVmDownLoadServerFv(void);
s32 is_download_command__22TQuestVmDownLoadServerFUsi(u16 arg0, s32 arg1);
s32 is_sjis_lead_byte__22TQuestVmDownLoadServerFUc(u8 arg0);
void push_download_entry__22TQuestVmDownLoadServerFPv(M2C_UNK *arg0);
void set_active__22TQuestVmDownLoadServerFv(void);

typedef char RecoveredGlobal_803E6ACC_lbl_805A0470_size[sizeof(RecoveredGlobal_803E6ACC_lbl_805A0470) == 0x28 ? 1 : -1];
typedef char RecoveredGlobal_803E6ACC_lbl_805A0498_size[sizeof(RecoveredGlobal_803E6ACC_lbl_805A0498) == 0x138 ? 1 : -1];
typedef char RecoveredGlobal_803E6ACC_lbl_805A05D0_size[sizeof(RecoveredGlobal_803E6ACC_lbl_805A05D0) == 0xC8 ? 1 : -1];
void TQuestVmDownLoadServer__sub_803E6ACC(s32 arg0) {
    lbl_805D78F4 = get_download_state__22TQuestVmDownLoadServerFv();
    TQuestVmDownLoadServer__sub_803ECFE4();
    TQuestVmDownLoadServer__sub_803EAEF0();
    lbl_805D78CC = &lbl_805A05D0.value;
    lbl_805D78D0 = &lbl_805A05D0.value;
    lbl_805D78D4 = &lbl_805A05D0.value;
    lbl_805D78D8 = &lbl_805A05D0.value;
    lbl_805D78C4 = &lbl_805A0498.value;
    lbl_805D78C8 = &lbl_805A0498.value;
    lbl_805D78B8 = &lbl_805A0470.value;
    lbl_805D78BC = &lbl_805A0470.value;
    lbl_805D78C0 = 0;
    TQuestVmDownLoadServer__sub_803EAE84(0, 0x50, 0);
    TQuestVmDownLoadServer__sub_803EE2E4();
    if (arg0 == 1) {
        lbl_805D78DC = 0x23;
        lbl_805D7848 = 1;
    }
}

#pragma push
#pragma opt_common_subs off
typedef char RecoveredGlobal_803E6ED0_lbl_805A0470_size[sizeof(RecoveredGlobal_803E6ED0_lbl_805A0470) == 0x28 ? 1 : -1];
typedef char RecoveredGlobal_803E6ED0_lbl_805A0498_size[sizeof(RecoveredGlobal_803E6ED0_lbl_805A0498) == 0x138 ? 1 : -1];
typedef char RecoveredGlobal_803E6ED0_lbl_805A05D0_size[sizeof(RecoveredGlobal_803E6ED0_lbl_805A05D0) == 0xC8 ? 1 : -1];
void TQuestVmDownLoadServer__sub_803E6ED0(void) {
    lbl_805D78CC = &(*(RecoveredGlobal_803E6ED0_lbl_805A05D0 *)&lbl_805A05D0).value;
    lbl_805D78D0 = &(*(RecoveredGlobal_803E6ED0_lbl_805A05D0 *)&lbl_805A05D0).value;
    lbl_805D78D4 = &(*(RecoveredGlobal_803E6ED0_lbl_805A05D0 *)&lbl_805A05D0).value;
    lbl_805D78D8 = &(*(RecoveredGlobal_803E6ED0_lbl_805A05D0 *)&lbl_805A05D0).value;
    lbl_805D78C4 = &(*(RecoveredGlobal_803E6ED0_lbl_805A0498 *)&lbl_805A0498).value;
    lbl_805D78C8 = &(*(RecoveredGlobal_803E6ED0_lbl_805A0498 *)&lbl_805A0498).value;
    lbl_805D78B8 = &(*(RecoveredGlobal_803E6ED0_lbl_805A0470 *)&lbl_805A0470).value;
    lbl_805D78BC = &(*(RecoveredGlobal_803E6ED0_lbl_805A0470 *)&lbl_805A0470).value;
    lbl_805D78C0 = 0;
    TQuestVmDownLoadServer__sub_803EAE84((s32)((int) (0)), (s32)((int) (0x50)), (s32)((int) (0)));
    TQuestVmDownLoadServer__sub_803EE2E4();
}
#pragma pop

s32 get_buffer_size__22TQuestVmDownLoadServerFv(void) {
    return 0x48;
}

s32 TQuestVmDownLoadServer__sub_803E719C(u8 arg0, s32 arg1) {
    return arg0 | ((arg1 & 0x100) + 0x2400);
}

extern u8 *lbl_805D7858;

typedef char RecoveredGlobal_803E721C_lbl_8047E698_size[sizeof(RecoveredGlobal_803E721C_lbl_8047E698) == 0x200 ? 1 : -1];
u16 TQuestVmDownLoadServer__sub_803E721C(u16 arg0) {
    u16 temp_r3;
    temp_r3 = M2C_FIELD(((u8 *)(&lbl_8047E698.value) + ((arg0 * 2) & 0x1FE)), u16 *, 0);
    if (((s32) (temp_r3 & 0xFF00) == 0x2500) && !(arg0 & 0x100)) {
        return (u8) temp_r3 | 0x2400;
    }
    return temp_r3;
}

void set_active__22TQuestVmDownLoadServerFv(void) {
    M2C_FIELD(lbl_805D7858, s32 *, 4) = 1;
}

s32 TQuestVmDownLoadServer__sub_803E86C8(void) {
    if (TQuestVmDownLoadServer__sub_803F0BD8((void *)((void *) (lbl_805D7904))) == -1) {
        lbl_805D7904 = -1;
        return -1;
    }
    lbl_805D7904 = -1;
    return 0;
}

typedef char RecoveredGlobal_803E8710_lbl_8058DE08_size[sizeof(RecoveredGlobal_803E8710_lbl_8058DE08) == 0x44 ? 1 : -1];
s32 TQuestVmDownLoadServer__sub_803E8710(void) {
    s32 temp_r3;
    temp_r3 = TQuestVmDownLoadServer__sub_803F0BE0((void *)((void *) (&lbl_8058DE08.value)), (void *)((void *) (lbl_805D78F8)));
    if (temp_r3 == -1) {
        lbl_805D7904 = -1;
        return -1;
    }
    lbl_805D7904 = temp_r3;
    return 0;
}

typedef char RecoveredGlobal_803E875C_lbl_8058DE08_size[sizeof(RecoveredGlobal_803E875C_lbl_8058DE08) == 0x44 ? 1 : -1];

#pragma push
#pragma opt_common_subs off
void TQuestVmDownLoadServer__sub_803E875C(s32 arg0) {
    strcpy((void *) (&(*(RecoveredGlobal_803E875C_lbl_8058DE08 *)&lbl_8058DE08).value), (void *) (arg0));
}
#pragma pop

s32 TQuestVmDownLoadServer__sub_803E8788(int _w0, void * _w1, int _w2) {
    return -1;
}

extern s8 lbl_805D7868;

void TQuestVmDownLoadServer__sub_803E8790(s32 arg0, u32 arg1) {
    TQuestVmDownLoadServer__sub_803F0AB8(arg0, arg1);
}

void TQuestVmDownLoadServer__sub_803E8918(void) {
    lbl_805D7868 = 1;
}

typedef char RecoveredGlobal_803E9764_lbl_80591EC8_size[sizeof(RecoveredGlobal_803E9764_lbl_80591EC8) == 0x2000 ? 1 : -1];

typedef char RecoveredGlobal_803E9594_lbl_80591EC8_size[sizeof(RecoveredGlobal_803E9594_lbl_80591EC8) == 0x2000 ? 1 : -1];
u8 *TQuestVmDownLoadServer__sub_803E9594(s32 arg0) {
    return (u8 *)&(*(RecoveredGlobal_803E9594_lbl_80591EC8 *)&lbl_80591EC8).value + ((s16) (arg0 >> 0xC) << 0xA) + (s16) (arg0 & 0xFFF);
}

void TQuestVmDownLoadServer__sub_803E9764(void) {
    M2C_UNK *var_r4;
    s32 var_r3;
    s32 var_r5;
    if ((u8) (*(u8 *)&lbl_805D7868) != 0) {
        var_r3 = 0x1400;
        if (TQuestVmDownLoadServer__sub_803E8624((int) (0x1400)) != -1) {
            var_r4 = (M2C_UNK *)(&lbl_80591EC8.value);
            var_r3 = lbl_805D7904;
            var_r4 = (M2C_UNK *)(&lbl_80591EC8.value);
            var_r5 = 0x2000;
            TQuestVmDownLoadServer__sub_803E8788((int)((int) (var_r3)), (void *)((void *) (&lbl_80591EC8.value)), (int)((int) (0x2000)));
        }
    }
}

typedef char RecoveredGlobal_803E9F20_lbl_80595998_size[sizeof(RecoveredGlobal_803E9F20_lbl_80595998) == 0x8C0 ? 1 : -1];
void TQuestVmDownLoadServer__sub_803E9F20(s32 arg0) {
    struct Fields_temp_r3 { u8 pad_0[20]; u8 field_14; u8 field_15; u8 field_16; };
    u8 *temp_r3;
    temp_r3 = (u8 *)&lbl_80595998.value + (arg0 * 0x1C);
    if (((s8) ((Fields_temp_r3*)temp_r3)->field_16 == 0) && ((s8) ((Fields_temp_r3*)temp_r3)->field_14 != 0)) {
        ((Fields_temp_r3*)temp_r3)->field_16 = (u8) ((Fields_temp_r3*)temp_r3)->field_15;
    }
}

s32 TQuestVmDownLoadServer__sub_803EC838(u16 arg0) {
    s32 var_r0;
    if ((arg0 >= 0x2120U) && (arg0 < 0x3020U)) {
        if ((s32) (arg0 & 0xFF00) == 0x2500) {
            var_r0 = 1;
        } else {
            var_r0 = 0;
        }
        if (var_r0 != 0) {
            return 0;
        }
        return 1;
    }
    return 0;
}

s32 TQuestVmDownLoadServer__sub_803EC884(u16 arg0) {
    if (arg0 >= 0x3020U) {
        return 1;
    }
    return 0;
}

s32 is_download_command__22TQuestVmDownLoadServerFUsi(u16 arg0, s32 arg1) {
    if ((arg1 != 0) && (arg0 == 0x213C)) {
        return 1;
    }
    if ((s32) (arg0 & 0xFF00) == 0x2500) {
        return 1;
    }
    return 0;
}

s32 TQuestVmDownLoadServer__sub_803EC8D8(u16 arg0) {
    s32 temp_r0;
    s32 var_r3;
    u16 var_r4;
    if ((arg0 > 0x20U) && (arg0 < 0x7FU)) {
        var_r3 = 0;
        return 0;
    }
    var_r4 = arg0;
    temp_r0 = arg0 & 0xFF00;
    switch (temp_r0) {
    case 0x2300:
        var_r3 = var_r4 & 0x7F;
        return var_r3;
    case 0x2400:
        var_r3 = (var_r4 & 0x7F) | 0x80;
        return var_r3;
    case 0x2500:
        var_r3 = 0;
        return 0;
    default:
        return TQuestVmDownLoadServer__sub_803E6F48();
    }
}

s32 is_sjis_lead_byte__22TQuestVmDownLoadServerFUc(u8 arg0) {
    if ((arg0 < 0x81U) || (arg0 > 0xFCU) || ((arg0 >= 0xA0U) && (arg0 < 0xE0U))) {
        return 0;
    }
    return 1;
}

extern s32 lbl_805D78AC;
extern M2C_UNK *lbl_805D78B0;

void push_download_entry__22TQuestVmDownLoadServerFPv(M2C_UNK *arg0) {
    if (arg0 != NULL) {
        *arg0 = (long) (lbl_805D78B0);
        lbl_805D78B0 = arg0;
        lbl_805D78AC += 1;
    }
}

extern s32 lbl_805D7900;

typedef char RecoveredGlobal_803EE2E4_lbl_8058DC98_size[sizeof(RecoveredGlobal_803EE2E4_lbl_8058DC98) == 0x50 ? 1 : -1];

u16 TQuestVmDownLoadServer__sub_803ED0B4(u8 *arg0, u16 arg1) {
    struct Fields_arg0 { u8 pad_0[8]; u16 field_8; };
    if (arg1 != 0) {
        return arg1 + 0x3E8;
    }
    return ((Fields_arg0*)arg0)->field_8;
}

typedef char RecoveredGlobal_803EDB20_lbl_8047F8B8_size[sizeof(RecoveredGlobal_803EDB20_lbl_8047F8B8) == 0x100 ? 1 : -1];
s32 TQuestVmDownLoadServer__sub_803EDB20(u8 arg0) {
    return M2C_FIELD(((u8 *)(&lbl_8047F8B8.value) + arg0), u8 *, 0) & 0x20;
}

typedef char RecoveredGlobal_803EDB3C_lbl_8047F8B8_size[sizeof(RecoveredGlobal_803EDB3C_lbl_8047F8B8) == 0x100 ? 1 : -1];
s32 TQuestVmDownLoadServer__sub_803EDB3C(u8 arg0) {
    return M2C_FIELD(((u8 *)(&(*(RecoveredGlobal_803EDB3C_lbl_8047F8B8 *)&lbl_8047F8B8).value) + arg0), u8 *, 0) & 0x40;
}

typedef char RecoveredGlobal_803EDB58_lbl_8047F8B8_size[sizeof(RecoveredGlobal_803EDB58_lbl_8047F8B8) == 0x100 ? 1 : -1];
s32 TQuestVmDownLoadServer__sub_803EDB58(u8 arg0) {
    return M2C_FIELD(((u8 *)(&(*(RecoveredGlobal_803EDB58_lbl_8047F8B8 *)&lbl_8047F8B8).value) + arg0), u8 *, 0) & 0x80;
}

typedef char RecoveredGlobal_803EDB74_lbl_8047F8B8_size[sizeof(RecoveredGlobal_803EDB74_lbl_8047F8B8) == 0x100 ? 1 : -1];
s32 TQuestVmDownLoadServer__sub_803EDB74(u8 arg0) {
    return M2C_FIELD(((u8 *)(&(*(RecoveredGlobal_803EDB74_lbl_8047F8B8 *)&lbl_8047F8B8).value) + arg0), u8 *, 0) & 0xC0;
}

void TQuestVmDownLoadServer__sub_803EE2E4(void) {
    lbl_8058DC98.value = 0;
}

s32 get_download_state__22TQuestVmDownLoadServerFv(void) {
    return lbl_805D7900;
}

s32 TQuestVmDownLoadServer__sub_803F0890(void) {
    if ((s32) lbl_805D7904 == -1) {
        return -3;
    }
    TQuestVmDownLoadServer__sub_803E8150();
    TQuestVmDownLoadServer__sub_803E9764();
    TQuestVmDownLoadServer__sub_803E7ACC();
    if (TQuestVmDownLoadServer__sub_803E86C8() == -1) {
        return -2;
    }
    return 3;
}

s32 TQuestVmDownLoadServer__sub_803F09A4(void) {
    s32 var_r3;
    lbl_805D7834 = 0;
    lbl_805D782C = 1;
    lbl_805D7908 = 0;
    lbl_805D790C = 0;
    var_r3 = TWindowKeyBoardSoft__sub_803E6808((void *) (&lbl_805E10D8), (void *) (&lbl_805E10E0));
    if (var_r3 == 0) {
        var_r3 = TWindowKeyBoardSoft__sub_803E683C();
    }
    if (var_r3 > 0) {
        var_r3 = -1;
    }
    return var_r3;
}

s32 TQuestVmDownLoadServer__sub_803F0BD8(void * _w0) {
    return 0;
}

s32 TQuestVmDownLoadServer__sub_803F0BE0(void * _w0, void * _w1) {
    return 1;
}

extern u32 lbl_805D7924;
extern s32 lbl_805D7928;

void TQuestVmDownLoadServer__sub_803F0BE8(u8 *arg0) {
    if ((u32) M2C_FIELD(arg0, u32 *, 4) == (u32) lbl_805D7924) {
        lbl_805D7928 = 0;
    }
}

}
