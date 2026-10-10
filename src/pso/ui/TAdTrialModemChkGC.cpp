#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
struct Base_80335508_803354A4 { char pad[0x18]; };
struct VObj_80335508_803354A4 : Base_80335508_803354A4 {
    virtual void m0();
    virtual void m1();
    virtual void m2();
    virtual void m3();
    virtual void m4();
    virtual void m5();
    virtual void m6();
    virtual void m7();
};
struct Base_80335580_803354A4 { char pad[0x18]; };
struct VObj_80335580_803354A4 : Base_80335580_803354A4 {
    virtual void m0();
    virtual void m1();
    virtual void m2();
    virtual void m3();
    virtual void m4();
    virtual void m5();
    virtual void m6();
};

extern "C" {

void *TAdTrialModemChkGC__ct(void *arg0);
void TAdTrialModemChkGC__sub_803354A4(void);
int TAdTrialModemChkGC__sub_803354E8(void* p);
int TAdTrialModemChkGC__vt4(void);
void TAdTrialModemChkGC__vt5(void);
void *__dt__18TAdTrialModemChkGCFv(void *arg0, s16 arg1);
void check_modem_result__18TAdTrialModemChkGCFv(void);
void render__18TAdTrialModemChkGCFv(void *arg0);
void run_task__18TAdTrialModemChkGCFv(void *arg0);
int get_localized_text_entry(void*, void*);
s32 TAdTrialModemChkGC__sub_8007FA24(s32);
void TAdWarningBaseGC__ct(void *);
void TAdWarningBaseGC__vt0(void *, int);
int TKeyBoardControl__sub_8000F9CC(void*);
s32 TLobby__sub_80145A94();
s32 init_account_entries__6TLobbyFv();
int stop_audio_streams__6TLobbyFv(void*);
void __dl__7TObjectFPv(void *);

void TAdTrialModemChkGC__sub_803354A4(void) {  }
void check_modem_result__18TAdTrialModemChkGCFv(void) {
    if (TLobby__sub_80145A94() != 0) {
        init_account_entries__6TLobbyFv();
        TAdTrialModemChkGC__sub_8007FA24(0);
        return;
    }
    TAdTrialModemChkGC__sub_8007FA24(1);
}
int TAdTrialModemChkGC__sub_803354E8(void* p) { return stop_audio_streams__6TLobbyFv(p); }

void render__18TAdTrialModemChkGCFv(void *arg0) {
    struct VObj_80335508_803354A4 *o = (struct VObj_80335508_803354A4 *)arg0;
    o->m7();
}

void TAdTrialModemChkGC__vt5(void) { get_localized_text_entry((void*)35, (void*)0); }
int TAdTrialModemChkGC__vt4(void) { return TKeyBoardControl__sub_8000F9CC((void*)(0)); }

void run_task__18TAdTrialModemChkGCFv(void *arg0) {
    struct VObj_80335580_803354A4 *o = (struct VObj_80335580_803354A4 *)arg0;
    o->m6();
}

extern M2C_UNK __vt__18TAdTrialModemChkGC[];

void *__dt__18TAdTrialModemChkGCFv(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = __vt__18TAdTrialModemChkGC;
        TAdWarningBaseGC__vt0(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

extern M2C_UNK __vt__18TAdTrialModemChkGC[];
extern void *TAdTrialModemChkGC__name;

void *TAdTrialModemChkGC__ct(void *arg0) {
    TAdWarningBaseGC__ct(arg0);
    M2C_FIELD(arg0, M2C_UNK **, 0x18) = __vt__18TAdTrialModemChkGC;
    M2C_FIELD(arg0, void **, 0x0) = TAdTrialModemChkGC__name;
    return arg0;
}

}
