#include "pso/TChCrLoadAfs.h"
extern "C" {
int TLobby__sub_803CC4C0(int);
int TLobby__sub_803CC980(int);
int TLobby__sub_803CCE9C(int);
int safe_free__23TAdSinglePlyChrSelectGCFUi(int);
int release_load_slot__12TChCrLoadAfsFPv(void *);
}

#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void *TChCrLoadAfs__ct(void *arg0, void *arg1, void *arg2, void *arg3);
void * create__12TChCrLoadAfsFPvPvPv(void *arg0, void *arg1, void *arg2);
void start_download__12TChCrLoadAfsFPv(void *arg0);
void TChCrLoadAfs__sub_8028B940(void);
void TChCrLoadAfs__sub_8028B944(void);
s32 TLobby__sub_803CC53C(u32);
s32 TLobby__sub_803CCB5C(u32, s32, u32);
u32 TLobby__sub_803CD16C(s32, s32);
void __ct__7TObjectFP7TObject(void *);
void *__nw__7TObjectFUl(int);
u32 alloc__22TQuestVmDownLoadServerFPv(s32);
s32 try_begin_load__12TChCrLoadAfsFPv();

void start_download__12TChCrLoadAfsFPv(void *arg0) {
    s32 temp_r3_2;
    u32 temp_r3;
    u32 temp_r3_3;

    if (try_begin_load__12TChCrLoadAfsFPv() != 0) {
        temp_r3 = TLobby__sub_803CD16C(M2C_FIELD(arg0, s32 *, 0x20), M2C_FIELD(arg0, s32 *, 0x24));
        M2C_FIELD(arg0, u32 *, 0x1C) = temp_r3;
        if (temp_r3 == 0U) {
            M2C_FIELD(arg0, s32 *, 0x2C) = 3;
            return;
        }
        temp_r3_2 = TLobby__sub_803CC53C(M2C_FIELD(arg0, u32 *, 0x1C));
        temp_r3_3 = alloc__22TQuestVmDownLoadServerFPv(temp_r3_2 << 0xB);
        M2C_FIELD(arg0, u32 *, 0x28) = temp_r3_3;
        if (temp_r3_3 == 0U) {
            M2C_FIELD(arg0, s32 *, 0x2C) = 3;
            return;
        }
        TLobby__sub_803CCB5C(M2C_FIELD(arg0, u32 *, 0x1C), temp_r3_2, M2C_FIELD(arg0, u32 *, 0x28));
        M2C_FIELD(arg0, s32 *, 0x2C) = 1;
    }
}
}

void TChCrLoadAfs::run_task() {}

TChCrLoadAfs::~TChCrLoadAfs() {
    u32 handle = load_handle;
    if (handle != 0) {
        if (TLobby__sub_803CC4C0((int)handle) == 2) TLobby__sub_803CC980((int)load_handle);
        TLobby__sub_803CCE9C((int)load_handle);
        load_handle = 0;
    }
    u32 buffer = buffer_address;
    if (buffer != 0) {
        safe_free__23TAdSinglePlyChrSelectGCFUi((int)buffer);
        buffer_address = 0;
    }
    release_load_slot__12TChCrLoadAfsFPv(this);
}

extern "C" {

extern M2C_UNK __vt__12TChCrLoadAfs[];
extern void *lbl_805D3B48;

void *TChCrLoadAfs__ct(void *arg0, void *arg1, void *arg2, void *arg3) {
    __ct__7TObjectFP7TObject(arg0);
    M2C_FIELD(arg0, M2C_UNK **, 0x18) = __vt__12TChCrLoadAfs;
    M2C_FIELD(arg0, void **, 0x0) = lbl_805D3B48;
    M2C_FIELD(arg0, u32 *, 0x1C) = 0;
    M2C_FIELD(arg0, void **, 0x20) = arg2;
    M2C_FIELD(arg0, void **, 0x24) = arg3;
    M2C_FIELD(arg0, u32 *, 0x28) = 0;
    M2C_FIELD(arg0, u32 *, 0x2C) = 0;
    M2C_FIELD(arg0, u32 *, 0x30) = 0;
    M2C_FIELD(arg0, u32 *, 0x34) = 900;
    return arg0;
}

void * create__12TChCrLoadAfsFPvPvPv(void *arg0, void *arg1, void *arg2) {
    void *o;
    o = __nw__7TObjectFUl(0x38);
    if (o != NULL) {
        o = TChCrLoadAfs__ct((void *)(o), (void *)(arg0), (void *)(arg1), (void *)(arg2));
    }
    return o;
}

}
