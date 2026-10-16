#include "types.h"
#include "pso/ui/TAdExNetConfirmGC.h"
#include "pso/TAdMultiChgGameModeGC.h"
#include "pso/misc/TLobby.h"

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

struct RecoveredGlobal_8032C618___vt__17TAdExNetConfirmGC { s32 value; u8 remaining[0x24]; };
typedef char RecoveredGlobal_8032C618___vt__17TAdExNetConfirmGC_size[sizeof(RecoveredGlobal_8032C618___vt__17TAdExNetConfirmGC) == 0x28 ? 1 : -1];

extern "C" {
s32 get_localized_text_entry(int, int);
void TKeyBoardControl__sub_8000F9CC(s32);
void queue_destruction__7TObjectFv(void *);
s32 TLobby__sub_80145A94(void);
s32 TLobby__sub_80145DB4(s32);
u8 * TAdWarningBaseGC__ct(void *);
extern s32 __vt__17TAdExNetConfirmGC[];
extern s32 lbl_805D4200;
u8 *TAdExNetConfirmGC__ct(u8 *arg0);
}

extern "C" {

int vfunc_6__17TAdExNetConfirmGCFv(void* p);
void *__dt__17TAdExNetConfirmGCFv(void *arg0, s16 arg1);
void TAdWarningBaseGC__vt0(void *, int);
void __dl__7TObjectFPv(void *);
int request_scene_change__21TAdMultiChgGameModeGCFv(void*);

void TAdExNetConfirmGC::render() {
    struct VObj_8032C504 *o = (struct VObj_8032C504 *)this;
    o->m7();
}

void TAdExNetConfirmGC::vfunc_7() {
    if (TAdExNetConfirmGC::is_confirmed() != 0) {
        get_localized_text_entry((int) (0x22), (int) (1));
        return;
    }
    get_localized_text_entry((int) (0x22), (int) (0));
}

int TAdExNetConfirmGC::vfunc_6() { return request_scene_change__21TAdMultiChgGameModeGCFv(this); }

void TAdExNetConfirmGC::run_task() {
    struct VObj_8032C594_8032C504 *o = (struct VObj_8032C594_8032C504 *)this;
    o->m6();
}

extern s32 __vt__17TAdExNetConfirmGC[];

void *__dt__17TAdExNetConfirmGCFv(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        *(s32 **)((s8 *)arg0 + 0x18) = __vt__17TAdExNetConfirmGC;
        TAdWarningBaseGC__vt0(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}
u8 *TAdExNetConfirmGC__ct(u8 *arg0) {
    TAdWarningBaseGC__ct(arg0);
    *(s32 **)((s8 *)arg0 + 0x18) = &(*(RecoveredGlobal_8032C618___vt__17TAdExNetConfirmGC *)&__vt__17TAdExNetConfirmGC).value;
    *(s32 *)((s8 *)arg0 + 0) = (s32) lbl_805D4200;
    if ((TLobby__sub_80145DB4(1) != 0) || (TLobby__sub_80145DB4(4) != 0)) {
        if (TLobby__sub_80145A94() != 0) {
            TLobby::init_account_entries();
        } else {
            TKeyBoardControl__sub_8000F9CC(0x13);
        }
        queue_destruction__7TObjectFv(arg0);
        TAdMultiChgGameModeGC::set_game_mode();
        return arg0;
    }
    return arg0;
}

}
