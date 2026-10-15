#include "types.h"

typedef s32 (*RecoveredCallback_4873a87e26d6)(s32, s32 *, s32);

struct Ent_803CF958 { u32 a; char name[12]; };
struct Drv_803CFD2C {
    u8 pad[0x14];
    void (*close)(s32);
};
struct Slot_803CFD2C {
    Drv_803CFD2C *drv;
    s32 handle;
};
struct Rec_803CFD2C {
    u8 pad0[4];
    s8 used;
    u8 pad5[0xB];
};

struct V_803CEF60 { void (*fn)(); };

extern "C" {
extern s32 lbl_8047D7AC[];
extern s32 lbl_8047D7C8[];
extern RecoveredCallback_4873a87e26d6 cvfs_completion_callback;
extern s32 lbl_805D75FC;
s32 cv_fs_get_stat__6TLobbyFPv(u8 *arg0);
extern s32 lbl_8047D7E4[];
extern s32 lbl_8047D800[];
extern RecoveredCallback_4873a87e26d6 cvfs_completion_callback;
extern s32 lbl_805D75FC;
void cvfs_stop_tr__6TLobbyFPv(u8 *arg0);
extern s32 lbl_8047D8B8[];
extern s32 lbl_8047D8D4[];
extern RecoveredCallback_4873a87e26d6 cvfs_completion_callback;
extern s32 lbl_805D75FC;
s32 cv_fs_tell__6TLobbyFPv(u8 *arg0);
extern s32 lbl_8047D8EC[];
extern s32 lbl_8047D908[];
extern RecoveredCallback_4873a87e26d6 cvfs_completion_callback;
extern s32 lbl_805D75FC;
void cv_fs_close__6TLobbyFPv(u8 *arg0);
extern s32 lbl_8047D850[];
extern s32 lbl_8047D86C[];
extern RecoveredCallback_4873a87e26d6 cvfs_completion_callback;
extern s32 lbl_805D75FC;
s32 cv_fs_req_rd__6TLobbyFPvii(u8 *arg0, s32 arg1, s32 arg2);
extern s32 lbl_8047D884[];
extern s32 lbl_8047D8A0[];
extern RecoveredCallback_4873a87e26d6 cvfs_completion_callback;
extern s32 lbl_805D75FC;
s32 cv_fs_seek__6TLobbyFPvii(u8 *arg0, s32 arg1, s32 arg2);
s32 strncmp(void *, void *, int);
void *memcpy(void *, void *, u32);
u32 strlen(void *);
extern s32 lbl_8047D9D4[];
extern s32 lbl_8047D9FC[];
extern s8 fs_default_device_name[];
extern Ent_803CF958 cvfs_entry_table[];
extern RecoveredCallback_4873a87e26d6 cvfs_completion_callback;
extern s32 lbl_805D75FC;
void cvFsSetDefDev__6TLobbyFPv(char *arg0);
void *memset(void *, s32, u32);
extern s32 lbl_805D7600;
void SIGetTypeAsync(void);
extern Ent_803CF958 cvfs_entry_table[];
void TLobby__sub_803CEF60(void);
}

extern "C" {

s32 cv_fs_get_stat__6TLobbyFPv(u8 *arg0) {
    s32 (*temp_r12)(s32);
    s32 var_r31;
    var_r31 = 3;
    if (arg0 == NULL) {
        if (((s32 (*)(s32, s32 *, s32)) cvfs_completion_callback) != NULL) {
            cvfs_completion_callback(lbl_805D75FC, lbl_8047D7AC, 0);
        }
        return 3;
    }
    temp_r12 = *(s32 (**)(s32))((s8 *)(*(u8 **)((s8 *)arg0 + 0)) + 0x2C);
    if (temp_r12 != NULL) {
        var_r31 = temp_r12(*(s32 *)((s8 *)arg0 + 4));
    } else if (((s32 (*)(s32, s32 *, s32)) cvfs_completion_callback) != NULL) {
        cvfs_completion_callback(lbl_805D75FC, lbl_8047D7C8, 0);
    }
    return var_r31;
}

void TLobby__sub_803CEF60(void) {
    s32 i;
    Ent_803CF958 *p;
    for (i = 0; i < 0x20; i++) {
        p = &cvfs_entry_table[i];
        if ((V_803CEF60 *)p->a != 0 && ((V_803CEF60 *)p->a)->fn != 0) {
            ((V_803CEF60 *)p->a)->fn();
        }
    }
}

void cvfs_stop_tr__6TLobbyFPv(u8 *arg0) {
    s32 (*temp_r12)(s32);
    if (arg0 == NULL) {
        if (((s32 (*)(s32, s32 *, s32)) cvfs_completion_callback) != NULL) {
            cvfs_completion_callback(lbl_805D75FC, lbl_8047D7E4, 0);
        }
    } else {
        temp_r12 = *(s32 (**)(s32))((s8 *)(*(u8 **)((s8 *)arg0 + 0)) + 0x28);
        if (temp_r12 != NULL) {
            temp_r12(*(s32 *)((s8 *)arg0 + 4));
            return;
        }
        if (((s32 (*)(s32, s32 *, s32)) cvfs_completion_callback) != NULL) {
            cvfs_completion_callback(lbl_805D75FC, lbl_8047D800, 0);
        }
    }
}

s32 cv_fs_req_rd__6TLobbyFPvii(u8 *arg0, s32 arg1, s32 arg2) {
    s32 (*temp_r12)(s32, s32, s32);
    s32 var_r31;
    if (arg0 == NULL) {
        if (((s32 (*)(s32, s32 *, s32)) cvfs_completion_callback) != NULL) {
            cvfs_completion_callback(lbl_805D75FC, lbl_8047D850, 0);
        }
        return 0;
    }
    temp_r12 = *(s32 (**)(s32, s32, s32))((s8 *)(*(u8 **)((s8 *)arg0 + 0)) + 0x20);
    if (temp_r12 != NULL) {
        var_r31 = temp_r12(*(s32 *)((s8 *)arg0 + 4), arg1, arg2);
    } else {
        var_r31 = 0;
        if (((s32 (*)(s32, s32 *, s32)) cvfs_completion_callback) != NULL) {
            cvfs_completion_callback(lbl_805D75FC, lbl_8047D86C, 0);
        }
    }
    return var_r31;
}

s32 cv_fs_seek__6TLobbyFPvii(u8 *arg0, s32 arg1, s32 arg2) {
    s32 (*temp_r12)(s32, s32, s32);
    s32 var_r31;
    if (arg0 == NULL) {
        if (((s32 (*)(s32, s32 *, s32)) cvfs_completion_callback) != NULL) {
            cvfs_completion_callback(lbl_805D75FC, lbl_8047D884, 0);
        }
        return 0;
    }
    temp_r12 = *(s32 (**)(s32, s32, s32))((s8 *)(*(u8 **)((s8 *)arg0 + 0)) + 0x18);
    if (temp_r12 != NULL) {
        var_r31 = temp_r12(*(s32 *)((s8 *)arg0 + 4), arg1, arg2);
    } else {
        var_r31 = 0;
        if (((s32 (*)(s32, s32 *, s32)) cvfs_completion_callback) != NULL) {
            cvfs_completion_callback(lbl_805D75FC, lbl_8047D8A0, 0);
        }
    }
    return var_r31;
}

s32 cv_fs_tell__6TLobbyFPv(u8 *arg0) {
    s32 (*temp_r12)(s32);
    s32 var_r31;
    if (arg0 == NULL) {
        if (((s32 (*)(s32, s32 *, s32)) cvfs_completion_callback) != NULL) {
            cvfs_completion_callback(lbl_805D75FC, lbl_8047D8B8, 0);
        }
        return 0;
    }
    temp_r12 = *(s32 (**)(s32))((s8 *)(*(u8 **)((s8 *)arg0 + 0)) + 0x1C);
    if (temp_r12 != NULL) {
        var_r31 = temp_r12(*(s32 *)((s8 *)arg0 + 4));
    } else {
        var_r31 = 0;
        if (((s32 (*)(s32, s32 *, s32)) cvfs_completion_callback) != NULL) {
            cvfs_completion_callback(lbl_805D75FC, lbl_8047D8D4, 0);
        }
    }
    return var_r31;
}
void cv_fs_close__6TLobbyFPv(u8 *arg0) {
    s32 (*temp_r12)(s32);
    if (arg0 == NULL) {
        if (((s32 (*)(s32, s32 *, s32)) cvfs_completion_callback) != NULL) {
            cvfs_completion_callback(lbl_805D75FC, lbl_8047D8EC, 0);
        }
    } else {
        temp_r12 = *(s32 (**)(s32))((s8 *)(*(u8 **)((s8 *)arg0 + 0)) + 0x14);
        if (temp_r12 != NULL) {
            temp_r12(*(s32 *)((s8 *)arg0 + 4));
            *(s32 *)((s8 *)arg0 + 4) = 0;
            *(u8 **)((s8 *)arg0 + 0) = NULL;
            return;
        }
        if (((s32 (*)(s32, s32 *, s32)) cvfs_completion_callback) != NULL) {
            cvfs_completion_callback(lbl_805D75FC, lbl_8047D908, 0);
        }
    }
}
typedef s32 (*RecoveredCallback_4873a87e26d6)(s32, s32 *, s32);
#pragma dont_inline off
#pragma inline_depth(4)
inline s32 find_803CF958(char *s, s32 len) {
    Ent_803CF958 *p;
    s32 i;
    for (p = cvfs_entry_table, i = 0; i < 32; i++, p++) {
        if (strncmp(s, p->name, len) == 0) {
            return 1;
        }
    }
    return 0;
}
void cvFsSetDefDev__6TLobbyFPv(char *arg0) {
    s32 len;
    u32 j;
    u32 n;
    if (arg0 == NULL) {
        if (cvfs_completion_callback != NULL) {
            cvfs_completion_callback(lbl_805D75FC, lbl_8047D9D4, 0);
        }
        return;
    }
    len = strlen(arg0);
    if (len == 0) {
        fs_default_device_name[0] = 0;
        return;
    }
    n = strlen(arg0) + 1;
    for (j = 0; j < n; j++) {
        if (arg0[j] >= 'a' && arg0[j] <= 'z') {
            arg0[j] -= 0x20;
        }
    }
    if (find_803CF958(arg0, len) == 1) {
        memcpy(fs_default_device_name, arg0, len + 1);
        return;
    }
    if (cvfs_completion_callback != NULL) {
        cvfs_completion_callback(lbl_805D75FC, lbl_8047D9FC, 0);
    }
}

u32 lbl_80581A30[75];
s8 fs_default_device_name[12];
Ent_803CF958 cvfs_entry_table[32];
u32 si_type_info_table[80];

void SIGetTypeAsync(void) {
    Slot_803CFD2C *s;
    Rec_803CFD2C *r;
    s32 i;

    if (--lbl_805D7600 == 0) {
        for (s = (Slot_803CFD2C *)si_type_info_table, i = 0; i < 40; i++, s++) {
            if (s->drv != NULL) {
                s->drv->close(s->handle);
            }
            s->drv = NULL;
            s->handle = 0;
        }
        for (i = 0; i < 32; i++) {
            ((Rec_803CFD2C *)cvfs_entry_table)[i].used = 0;
        }
        memset(fs_default_device_name, 0, 9);
        ((s8 *)fs_default_device_name)[0] = 0;
    }
}

}
