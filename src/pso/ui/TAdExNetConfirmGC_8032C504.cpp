#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
struct Base_8032C504 { char pad[0x18]; };
struct VObj_8032C504 : Base_8032C504 {
    virtual void m0();
    virtual void m1();
    virtual void m2();
    virtual void m3();
    virtual void m4();
    virtual void m5();
    virtual void m6();
    virtual void m7();
};
struct Base_8032C594_8032C504 { char pad[0x18]; };
struct VObj_8032C594_8032C504 : Base_8032C594_8032C504 {
    virtual void m0();
    virtual void m1();
    virtual void m2();
    virtual void m3();
    virtual void m4();
    virtual void m5();
    virtual void m6();
};

#define M2C_BITWISE(type, expr) ((type)(expr))

struct RecoveredGlobal_8032C618___vt__17TAdExNetConfirmGC { M2C_UNK value; u8 remaining[0x24]; };
typedef char RecoveredGlobal_8032C618___vt__17TAdExNetConfirmGC_size[sizeof(RecoveredGlobal_8032C618___vt__17TAdExNetConfirmGC) == 0x28 ? 1 : -1];

extern "C" {
M2C_UNK TAdSinglePlyChrSelectGC__sub_80132F2C(int, int);
s32 is_confirmed__17TAdExNetConfirmGCFv();
void TKeyBoardControl__sub_8000F9CC(s32);
void queue_destruction__7TObjectFv(void *);
s32 TLobby__sub_80145A94(void);
s32 TLobby__sub_80145DB4(s32);
void TLobby__sub_8014797C(void);
void set_game_mode__21TAdMultiChgGameModeGCFv(void);
u8 * TAdWarningBaseGC__ct(void *);
extern M2C_UNK __vt__17TAdExNetConfirmGC[];
extern s32 lbl_805D4200;
u8 *TAdExNetConfirmGC__ct(u8 *arg0);
}

extern "C" {

int TAdExNetConfirmGC__vt4(void* p);
void *__dt__17TAdExNetConfirmGCFv(void *arg0, s16 arg1);
void render__17TAdExNetConfirmGCFv(void *arg0);
void run_task__17TAdExNetConfirmGCFv(void *arg0);
void TAdWarningBaseGC__vt0(void *, int);
void __dl__7TObjectFPv(void *);
int request_scene_change__21TAdMultiChgGameModeGCFv(void*);

void render__17TAdExNetConfirmGCFv(void *arg0) {
    struct VObj_8032C504 *o = (struct VObj_8032C504 *)arg0;
    o->m7();
}

void TAdExNetConfirmGC__vt5(void) {
    if (is_confirmed__17TAdExNetConfirmGCFv() != 0) {
        TAdSinglePlyChrSelectGC__sub_80132F2C((int) (0x22), (int) (1));
        return;
    }
    TAdSinglePlyChrSelectGC__sub_80132F2C((int) (0x22), (int) (0));
}

int TAdExNetConfirmGC__vt4(void* p) { return request_scene_change__21TAdMultiChgGameModeGCFv(p); }

void run_task__17TAdExNetConfirmGCFv(void *arg0) {
    struct VObj_8032C594_8032C504 *o = (struct VObj_8032C594_8032C504 *)arg0;
    o->m6();
}

extern M2C_UNK __vt__17TAdExNetConfirmGC[];

void *__dt__17TAdExNetConfirmGCFv(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = __vt__17TAdExNetConfirmGC;
        TAdWarningBaseGC__vt0(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}
u8 *TAdExNetConfirmGC__ct(u8 *arg0) {
    TAdWarningBaseGC__ct(arg0);
    M2C_FIELD(arg0, M2C_UNK **, 0x18) = &(*(RecoveredGlobal_8032C618___vt__17TAdExNetConfirmGC *)&__vt__17TAdExNetConfirmGC).value;
    M2C_FIELD(arg0, s32 *, 0) = (s32) lbl_805D4200;
    if ((TLobby__sub_80145DB4(1) != 0) || (TLobby__sub_80145DB4(4) != 0)) {
        if (TLobby__sub_80145A94() != 0) {
            TLobby__sub_8014797C();
        } else {
            TKeyBoardControl__sub_8000F9CC(0x13);
        }
        queue_destruction__7TObjectFv(arg0);
        set_game_mode__21TAdMultiChgGameModeGCFv();
        return arg0;
    }
    return arg0;
}

}
