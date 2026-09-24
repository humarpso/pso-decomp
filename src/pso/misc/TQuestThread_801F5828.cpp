#include "pso/TQuestThread.h"

TQuestThread::~TQuestThread() {}

#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

struct RecoveredGlobal_801F5B5C_TQuestThread__data_80512AD0 { M2C_UNK value; u8 remaining[0x44]; };
typedef char RecoveredGlobal_801F5B5C_TQuestThread__data_80512AD0_size[sizeof(RecoveredGlobal_801F5B5C_TQuestThread__data_80512AD0) == 0x48 ? 1 : -1];

struct RecoveredGlobal_801F5E7C_lbl_805129F8 {
    M2C_UNK value;
    u8 remaining[0xD4];
};

struct RecoveredGlobal_801F5CB0___vt__12TQuestThread {
    M2C_UNK value;
    u8 remaining[0x14];
};

struct Inner_801F5E58 { u8 pad[0x14]; char name[1]; };

struct Obj_801F5E58 { u8 pad[0x198]; Inner_801F5E58 *inner; };

extern "C" {
s32 TQuestThread__sub_801F5EAC(u8 *arg0, s32 arg1);
u32 __nw__7TObjectFUl(M2C_UNK);
extern u32 lbl_805D5EE8;
u8 *TQuestThread__sub_801F5C50(s32 arg0);
M2C_UNK bswap_header__6TLobbyFPv();
extern u32 lbl_805D5EE8;
void handle_6x77_sync_quest_register(u8 *arg0);
s32 TObjPlayer__sub_800196EC(void);
u32 __nw__7TObjectFUl(M2C_UNK);
extern RecoveredGlobal_801F5B5C_TQuestThread__data_80512AD0 TQuestThread__data_80512AD0;
extern u32 lbl_805D5EE8;
u8 *TQuestThread__sub_801F5B5C(void);
int memset(void*, void*, void*);
extern RecoveredGlobal_801F5E7C_lbl_805129F8 lbl_805129F8;
void TQuestThread__sub_801F5E7C(void);
s32 queue_destruction__7TObjectFv(void *);
s32 fn_801F56A8(void *, void *);
s32 __ct__7TObjectFP7TObject(void *, void *);
extern RecoveredGlobal_801F5CB0___vt__12TQuestThread __vt__12TQuestThread;
extern s32 lbl_805D35D0;
u8 *__ct__12TQuestThreadFv(u8 *arg0, s32 arg1, s32 arg2);
extern u32 lbl_805D5EE8;
extern char lbl_8044A5D0[];
char *TQuestThread__sub_801F5E58(void);
extern RecoveredGlobal_801F5B5C_TQuestThread__data_80512AD0 TQuestThread__data_80512AD0;
void TQuestThread__sub_801F5D60(s32 i, s32 v);
extern RecoveredGlobal_801F5B5C_TQuestThread__data_80512AD0 TQuestThread__data_80512AD0;
void TQuestThread__sub_801F5D34(s32 i);
extern RecoveredGlobal_801F5B5C_TQuestThread__data_80512AD0 TQuestThread__data_80512AD0;
void TQuestThread__sub_801F5DA8(void* _w0);
}

extern "C" {

void TQuestThread__sub_801F5D88(void* p);
void clear_buffer__12TQuestThreadFPv(void* p);
u32 create__12TQuestThreadFi(s32 arg0);
void TQuestThread__sub_801F5ECC(void);
u32 __nw__7TObjectFUl(M2C_UNK);
int memset(void*, void*, void*);
M2C_UNK set_parent__7TObjectFP7TObject(u32, s32);

extern u32 lbl_805D5EE8;
extern s32 tl_00;

u8 *TQuestThread__sub_801F5B5C(void) {
    s32 temp_r30;
    u8 *temp_r3;
    u8 *var_r0;
    temp_r30 = TObjPlayer__sub_800196EC() * 4;
    if (((s32) M2C_FIELD(&TQuestThread__data_80512AD0.value, M2C_UNK *, temp_r30) != -1) && ((u32) lbl_805D5EE8 != 0U)) {
        temp_r3 = (u8 *)(((u8 *)__nw__7TObjectFUl(0x194)));
        var_r0 = (u8 *)(temp_r3);
        if (var_r0 != NULL) {
            var_r0 = (u8 *)(((u8 *)((u32)__ct__12TQuestThreadFv((u8 *)((u32)(temp_r3)), (s32)((u32)((s32) lbl_805D5EE8)), (s32)((s32)(M2C_FIELD(&TQuestThread__data_80512AD0.value, M2C_UNK *, temp_r30)))))));
        }
        return var_r0;
    }
    return NULL;
}

u32 create__12TQuestThreadFi(s32 arg0) {
    u32 var_r31;

    if ((u32) lbl_805D5EE8 != 0U) {
        var_r31 = __nw__7TObjectFUl(0x194);
        if (var_r31 != 0U) {
            var_r31 = ((u32)__ct__12TQuestThreadFv((u8 *)(var_r31), (s32)(lbl_805D5EE8), (s32)(arg0)));
        }
        if (var_r31 != 0U) {
            set_parent__7TObjectFP7TObject(var_r31, tl_00);
            return var_r31;
        }
        return 0U;
    }
    return 0U;
}

u8 *TQuestThread__sub_801F5C50(s32 arg0) {
    u8 *temp_r3;
    u8 *var_r0;
    if ((u32) lbl_805D5EE8 != 0U) {
        temp_r3 = (u8 *)(((u8 *)__nw__7TObjectFUl(0x194)));
        var_r0 = (u8 *)(temp_r3);
        if (var_r0 != NULL) {
            var_r0 = (u8 *)(((u8 *)((u32)__ct__12TQuestThreadFv((u8 *)((u32)(temp_r3)), (s32)((u32)((s32) lbl_805D5EE8)), (s32)((s32)(arg0))))));
        }
        return var_r0;
    }
    return NULL;
}

typedef char RecoveredGlobal_801F5CB0___vt__12TQuestThread_size[sizeof(RecoveredGlobal_801F5CB0___vt__12TQuestThread) == 0x18 ? 1 : -1];
u8 *__ct__12TQuestThreadFv(u8 *arg0, s32 arg1, s32 arg2) {
    __ct__7TObjectFP7TObject((void *) (arg0), (void *) (arg1));
    M2C_FIELD(arg0, M2C_UNK **, 0x18) = &__vt__12TQuestThread.value;
    M2C_FIELD(arg0, s32 *, 0) = lbl_805D35D0;
    fn_801F56A8((void *) ((u8 *)(arg0) + 0x1C), (void *) (arg1 + 0x24));
    M2C_FIELD(arg0, s32 *, 0x3C) = M2C_FIELD((M2C_FIELD(arg0, s32 *, 0x20) + (arg2 * 4)), s32 *, 0);
    M2C_FIELD(arg0, s32 *, 0x190) = 0;
    if (M2C_FIELD(arg0, s32 *, 0x3C) == -1) {
        queue_destruction__7TObjectFv((void *) (arg0));
    }
    return arg0;
}

void TQuestThread__sub_801F5D34(s32 i) {
    if (i < 0 || i > 0x11) {
        return;
    }
    ((s32 *)&TQuestThread__data_80512AD0)[i] = -1;
}

void TQuestThread__sub_801F5D60(s32 i, s32 v) {
    if (i < 0 || i > 0x11) {
        return;
    }
    ((s32 *)&TQuestThread__data_80512AD0)[i] = v;
}

void TQuestThread__sub_801F5D88(void* p) { TQuestThread__sub_801F5DA8((void*)(p)); }

void TQuestThread__sub_801F5DA8(void* _w0) {
    s32 i;
    for (i = 0; i < 0x12; i++) {
        ((s32 *)&TQuestThread__data_80512AD0)[i] = -1;
    }
}

void clear_buffer__12TQuestThreadFPv(void* p) { if (*(unsigned int*)((char*)p + 0x2c) != 0) { memset(*(void**)((char*)p + 0x2c), (void*)0, (void*)1024); } }

void handle_6x77_sync_quest_register(u8 *arg0) {
    s32 var_r4;
    u16 temp_r0;
    u8 *var_r31;
    u8 *var_r3;
    var_r31 = (u8 *)(arg0);
    bswap_header__6TLobbyFPv();
    var_r3 = (u8 *)((*(u8 * *)&lbl_805D5EE8));
    if (var_r3 != NULL) {
        temp_r0 = M2C_FIELD(var_r31, u16 *, 4);
        var_r4 = M2C_FIELD(var_r3, s32 *, 0x2C);
        if (temp_r0 <= 0xFFU) {
            var_r3 = (u8 *)(M2C_FIELD(var_r31, u8 **, 8));
            M2C_FIELD(var_r4, M2C_UNK *, ((temp_r0 * 4) & 0x3FFFC)) = (long) (var_r3);
        }
    }
}

typedef char RecoveredGlobal_801F5E7C_lbl_805129F8_size[sizeof(RecoveredGlobal_801F5E7C_lbl_805129F8) == 0xD8 ? 1 : -1];

char *TQuestThread__sub_801F5E58(void) {
    if ((*(Obj_801F5E58 * *)&lbl_805D5EE8) != 0) {
        return (*(Obj_801F5E58 * *)&lbl_805D5EE8)->inner->name;
    }
    return lbl_8044A5D0;
}

void TQuestThread__sub_801F5E7C(void) {
    memset((void*)((void *) (&lbl_805129F8.value)), (void*)((int) (0)), (void*)((int) (0xD8)));
}

s32 TQuestThread__sub_801F5EAC(u8 *arg0, s32 arg1) {
    if (arg0 != NULL) {
        return M2C_FIELD(M2C_FIELD(arg0, s32 *, 0x2C), M2C_UNK *, (arg1 * 4));
    }
    return 0;
}

}
