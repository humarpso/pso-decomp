#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

struct RecoveredGlobal_804217E4_lbl_805C1C50 {
    s32 value;
    u8 remaining[0xF4];
};

struct RecoveredGlobal_80421814_lbl_805C1C50 {
    s32 value;
    u8 remaining[0xF4];
};

struct RecoveredGlobal_80421844_lbl_805C1C50 {
    s32 value;
    u8 remaining[0xF4];
};

#include <stddef.h>
struct Stack_80421AD8 {
    s16 sp1C;
    s16 sp1E;
    s32 sp20;
    s32 sp24;
    s32 sp28;
};

struct RecoveredGlobal_804218AC_lbl_805C1C50 {
    s32 value;
    u8 remaining[0xF4];
};

struct RecoveredGlobal_804219D0_lbl_805C1C50 {
    s32 value;
    u8 remaining[0xF4];
};

struct RecoveredGlobal_80421A50_lbl_805C1C50 {
    s32 value;
    u8 remaining[0xF4];
};

struct RecoveredGlobal_80422DE4_lbl_805C1C50 {
    s32 value;
    u8 remaining[0xF4];
};

extern "C" {
s32 TLobby__sub_80406AE4(void);
s32 TLobby__sub_80409AA8(void);
s32 TLobby__sub_8040DD68(void);
s32 TLobby__sub_8040ED28(void);
s32 TLobby__sub_8040FF0C(void);
s32 TLobby__sub_8041112C(void);
s32 TLobby__sub_80415650(void);
void TLobby__sub_80415AEC(void);
s32 TLobby__sub_80418A7C(void);
void TLobby__sub_80419A00(void);
s32 TLobby__sub_80419A7C(void);
s32 TLobby__sub_8041A1D8(void);
s32 TLobby__sub_80420C5C(void);
s32 TLobby__sub_80421620(void);
M2C_UNK TUdpSocket__sub_803F95A4(void *);
extern RecoveredGlobal_804217E4_lbl_805C1C50 lbl_805C1C50;
s32 TLobby__sub_804217E4(void);
M2C_UNK TLobby__sub_803F95C4(void *);
extern RecoveredGlobal_804217E4_lbl_805C1C50 lbl_805C1C50;
s32 TLobby__sub_80421814(void);
M2C_UNK TUdpSocket__sub_803F95A4(void *);
M2C_UNK TLobby__sub_803F95C4(void *);
s32 TLobby__sub_80419DDC(void *);
extern RecoveredGlobal_804217E4_lbl_805C1C50 lbl_805C1C50;
s32 TLobby__sub_80421844(s32 arg0);
M2C_UNK TLobby__sub_80421FB8(void *, void *, void *);
s32 TLobby__sub_80421AD8(u8 *arg0, s32 arg1, s32 arg2, u32 arg3, s32 arg4);
M2C_UNK TUdpSocket__sub_803F95A4(void *);
M2C_UNK TLobby__sub_803F95C4(void *);
s32 TUdpSocket__sub_80419E64(void *, int, void *);
extern RecoveredGlobal_804217E4_lbl_805C1C50 lbl_805C1C50;
s32 TLobby__sub_804218AC(s32 arg0, s32 arg1);
M2C_UNK TUdpSocket__sub_803F95A4(void *);
M2C_UNK TLobby__sub_803F95C4(void *);
s32 TLobby__sub_8040F9CC(void *, void *, void *, int);
extern RecoveredGlobal_804217E4_lbl_805C1C50 lbl_805C1C50;
s32 TLobby__sub_804219D0(s32 arg0, s32 arg1, s32 arg2);
M2C_UNK TUdpSocket__sub_803F95A4(void *);
M2C_UNK TLobby__sub_803F95C4(void *);
s32 TRKValidMemory32(void *, void *, void *, int, int, int);
extern RecoveredGlobal_804217E4_lbl_805C1C50 lbl_805C1C50;
s32 TLobby__sub_80421A50(s32 arg0, s32 arg1, s32 arg2);
M2C_UNK TUdpSocket__sub_803F95A4(void *);
M2C_UNK TLobby__sub_803F95C4(void *);
s32 TLobby__sub_8041E780();
extern RecoveredGlobal_804217E4_lbl_805C1C50 lbl_805C1C50;
s32 tcp_create__Fv(void);
}

extern "C" {

s32 TLobby__sub_80421620(void) {
    TLobby__sub_80419A7C();
    TLobby__sub_80409AA8();
    TLobby__sub_80415AEC();
    TLobby__sub_8041112C();
    TLobby__sub_8040ED28();
    TLobby__sub_8040FF0C();
    TLobby__sub_8040DD68();
    TLobby__sub_80418A7C();
    TLobby__sub_80420C5C();
    TLobby__sub_8041A1D8();
    TLobby__sub_80406AE4();
    TLobby__sub_80415650();
    TLobby__sub_80419A00();
    return 0;
}
typedef char RecoveredGlobal_804217E4_lbl_805C1C50_size[sizeof(RecoveredGlobal_804217E4_lbl_805C1C50) == 0xF8 ? 1 : -1];
s32 TLobby__sub_804217E4(void) {
    TUdpSocket__sub_803F95A4((void *) (lbl_805C1C50.value));
    return 0;
}
typedef char RecoveredGlobal_80421814_lbl_805C1C50_size[sizeof(RecoveredGlobal_80421814_lbl_805C1C50) == 0xF8 ? 1 : -1];
s32 TLobby__sub_80421814(void) {
    TLobby__sub_803F95C4((void *) ((*(RecoveredGlobal_80421814_lbl_805C1C50 *)&lbl_805C1C50).value));
    return 0;
}
typedef char RecoveredGlobal_80421844_lbl_805C1C50_size[sizeof(RecoveredGlobal_80421844_lbl_805C1C50) == 0xF8 ? 1 : -1];
s32 TLobby__sub_80421844(s32 arg0) {
    s32 temp_r31;
    if (arg0 == 0) {
        return -2;
    }
    TLobby__sub_803F95C4((void *) ((*(RecoveredGlobal_80421844_lbl_805C1C50 *)&lbl_805C1C50).value));
    temp_r31 = TLobby__sub_80419DDC((void *) (arg0));
    TUdpSocket__sub_803F95A4((void *) ((*(RecoveredGlobal_80421844_lbl_805C1C50 *)&lbl_805C1C50).value));
    return temp_r31;
}

typedef char RecoveredGlobal_804218AC_lbl_805C1C50_size[sizeof(RecoveredGlobal_804218AC_lbl_805C1C50) == 0xF8 ? 1 : -1];
s32 TLobby__sub_804218AC(s32 arg0, s32 arg1) {
    s32 temp_r31;
    if (arg0 == 0) {
        return -2;
    }
    if (arg1 <= 0) {
        return -2;
    }
    TLobby__sub_803F95C4((void *) ((*(RecoveredGlobal_804218AC_lbl_805C1C50 *)&lbl_805C1C50).value));
    temp_r31 = TUdpSocket__sub_80419E64((void *) (arg1), (int) (0), (void *) (arg0));
    TUdpSocket__sub_803F95A4((void *) ((*(RecoveredGlobal_804218AC_lbl_805C1C50 *)&lbl_805C1C50).value));
    return temp_r31;
}

#pragma push
#pragma opt_common_subs off
typedef char RecoveredGlobal_804219D0_lbl_805C1C50_size[sizeof(RecoveredGlobal_804219D0_lbl_805C1C50) == 0xF8 ? 1 : -1];
s32 TLobby__sub_804219D0(s32 arg0, s32 arg1, s32 arg2) {
    s32 temp_r31;
    TLobby__sub_803F95C4((void *) ((*(RecoveredGlobal_804219D0_lbl_805C1C50 *)&lbl_805C1C50).value));
    temp_r31 = TLobby__sub_8040F9CC((void *) (arg0), (void *) (arg1), (void *) (arg2), (int) (0));
    TUdpSocket__sub_803F95A4((void *) ((*(RecoveredGlobal_804219D0_lbl_805C1C50 *)&lbl_805C1C50).value));
    return temp_r31;
}
#pragma pop

typedef char RecoveredGlobal_80421A50_lbl_805C1C50_size[sizeof(RecoveredGlobal_80421A50_lbl_805C1C50) == 0xF8 ? 1 : -1];
s32 TLobby__sub_80421A50(s32 arg0, s32 arg1, s32 arg2) {
    s32 temp_r31;
    TLobby__sub_803F95C4((void *) ((*(RecoveredGlobal_80421A50_lbl_805C1C50 *)&lbl_805C1C50).value));
    temp_r31 = TRKValidMemory32((void *) (arg0), (void *) (arg1), (void *) (arg2), (int) (1), (int) (0U), (int) (0U));
    TUdpSocket__sub_803F95A4((void *) ((*(RecoveredGlobal_80421A50_lbl_805C1C50 *)&lbl_805C1C50).value));
    return temp_r31;
}

s32 TLobby__sub_80421AD8(u8 *arg0, s32 arg1, s32 arg2, u32 arg3, s32 arg4) {
    struct Fields_arg0 { u8 pad_0[8]; s32 field_8; s16 field_C; };
    typedef char sp1C_offset[(offsetof(Stack_80421AD8, sp1C) == 0x0) ? 1 : -1];
    typedef char sp1E_offset[(offsetof(Stack_80421AD8, sp1E) == 0x2) ? 1 : -1];
    typedef char sp20_offset[(offsetof(Stack_80421AD8, sp20) == 0x4) ? 1 : -1];
    typedef char sp24_offset[(offsetof(Stack_80421AD8, sp24) == 0x8) ? 1 : -1];
    typedef char sp28_offset[(offsetof(Stack_80421AD8, sp28) == 0xC) ? 1 : -1];
    Stack_80421AD8 stack;
    stack.sp1C = arg4 | 0x800;
    stack.sp1E = ((Fields_arg0*)arg0)->field_8 - ((Fields_arg0*)arg0)->field_C;
    stack.sp20 = 0;
    stack.sp24 = arg1;
    stack.sp28 = arg2;
    if (arg3 != 0U) {
        TLobby__sub_80421FB8((void *) (arg3), (void *) (&stack.sp1C), (void *) (arg0));
    }
    return 0;
}
typedef char RecoveredGlobal_80422DE4_lbl_805C1C50_size[sizeof(RecoveredGlobal_80422DE4_lbl_805C1C50) == 0xF8 ? 1 : -1];
s32 tcp_create__Fv(void) {
    s32 temp_r31;
    TLobby__sub_803F95C4((void *) ((*(RecoveredGlobal_80422DE4_lbl_805C1C50 *)&lbl_805C1C50).value));
    temp_r31 = TLobby__sub_8041E780();
    TUdpSocket__sub_803F95A4((void *) ((*(RecoveredGlobal_80422DE4_lbl_805C1C50 *)&lbl_805C1C50).value));
    return temp_r31;
}

}
