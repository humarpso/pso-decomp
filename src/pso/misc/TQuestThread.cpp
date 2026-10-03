#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

struct QThread_801F6418 {
    u8 pad0[0x18];
    void *vt;
    u8 pad1[0x198 - 0x1C];
    s32 f198;
    u8 pad2[4];
    s32 f1A0;
};

struct TObj_801F62E0;
extern "C" {
s32 get_instance__12TQuestListVMFv();
M2C_UNK reset__12TQuestListVMFv();
s32 TQuestListVM__sub_801F6530();
s32 get_quest_count__16TQuestListOnlineFv();
s32 TQuestListOnline__sub_801F6540();
s32 TQuestThread__sub_801F6548();
s32 __nw__7TObjectFUl(M2C_UNK);
extern s32 evt2_random_enemies_mode;
extern s32 tl_su;
s32 TQuestThread__sub_801F60DC(void);
int queue_destruction__7TObjectFv(void*);
s32 alloc__22TQuestVmDownLoadServerFPv(s32);
M2C_UNK init_quest_script_context(s32, void *);
M2C_UNK TQuestThread__sub_801F5E7C();
M2C_UNK __ct__7TObjectFP7TObject();
M2C_UNK memcpy(s32, s32, s32);
extern M2C_UNK TQuestThread__data_804C8678[];
extern u8 *lbl_805D5EE8;
u8 *TQuestThread__sub_801F624C(u8 *arg0, s32 arg1, s32 arg2, s32 arg3);
int queue_destruction__7TObjectFv(void*);
s32 alloc__22TQuestVmDownLoadServerFPv(s32);
void copy_name(void *);
s32 update_lobby_scene__6TSceneFPv(void *);
void read_disc_file(void *, s32);
M2C_UNK init_quest_script_context(s32, void *);
M2C_UNK TQuestThread__sub_801F5E7C();
M2C_UNK __ct__7TObjectFP7TObject();
extern u8 lbl_8044A640[];
extern M2C_UNK TQuestThread__data_804C8678[];
extern u8 *lbl_805D5EE8;
extern u8 lbl_805DC50C;
QThread_801F6418 *TQuestThread__sub_801F6418(QThread_801F6418 *self, void *unused, void *scene);
int queue_destruction__7TObjectFv(void*);
s32 alloc__22TQuestVmDownLoadServerFPv(s32);
void copy_name(void *);
s32 update_lobby_scene__6TSceneFPv(void *);
void read_disc_file(void *, s32);
M2C_UNK init_quest_script_context(s32, void *);
M2C_UNK TQuestThread__sub_801F5E7C();
M2C_UNK __ct__7TObjectFP7TObject();
M2C_UNK __ct__12TQuestThreadFv(void *, void *, M2C_UNK);
s32 __nw__7TObjectFUl(M2C_UNK);
extern u8 lbl_8044A640[];
extern M2C_UNK TQuestThread__data_804C8678[];
extern u8 *lbl_805D5EE8;
extern u32 lbl_805D5EEC;
extern u8 lbl_805DC50C;
u8 *TQuestThread__sub_801F62E0(u8 *arg0, void *parent, void *arg2, s32 arg3);
}

extern "C" {

void TQuestThread__sub_801F64CC(int a0);
void destroy_quest_obj__12TQuestThreadFv(void);
void fn_801F6520(void* p);
void free_menu_object(void* p);
int queue_destruction__12TQuestThreadFPv(void* p);
void set_status_flag_80__12TQuestThreadFPv(void* p);
int queue_destruction__7TObjectFv(void*);

extern u32 lbl_805D5EEC;

void destroy_quest_obj__12TQuestThreadFv(void) {
    if ((u32) lbl_805D5EEC != 0U) {
        queue_destruction__7TObjectFv((void*)((void*)lbl_805D5EEC));
        lbl_805D5EEC = 0U;
    }
}

s32 TQuestThread__sub_801F60DC(void) {
    s32 temp_r31;
    s32 temp_r31_2;
    s32 temp_r31_3;
    s32 var_r30;
    s32 var_r30_2;
    s32 var_r30_3;
    s32 var_r30_4;
    s32 var_r31;
    switch ((s32) evt2_random_enemies_mode) {
    case 1:
        temp_r31 = __nw__7TObjectFUl(0x1A4);
        if (temp_r31 != 0) {
            temp_r31 = ((s32)TQuestThread__sub_801F6418((QThread_801F6418 *)(temp_r31), (void *)(tl_su), (void *)(TQuestThread__sub_801F6548())));
        }
        return temp_r31;
    case 2:
        var_r30 = __nw__7TObjectFUl(0x1A4);
        if (var_r30 != 0) {
            temp_r31 = get_quest_count__16TQuestListOnlineFv();
            var_r30 = (s32)TQuestThread__sub_801F624C((u8 *)(var_r30), (s32)(tl_su), (s32)(TQuestListOnline__sub_801F6540()), (s32)(temp_r31));
        }
        return var_r30;
    case 3:
        var_r30_2 = __nw__7TObjectFUl(0x1A4);
        if (var_r30_2 != 0) {
            temp_r31_2 = TQuestListVM__sub_801F6530();
            var_r30_2 = (s32)TQuestThread__sub_801F624C((u8 *)(var_r30_2), (s32)(tl_su), (s32)(get_instance__12TQuestListVMFv()), (s32)(temp_r31_2));
        }
        reset__12TQuestListVMFv();
        return var_r30_2;
    case 4:
        var_r30_3 = __nw__7TObjectFUl(0x1A4);
        if (var_r30_3 != 0) {
            temp_r31_3 = get_quest_count__16TQuestListOnlineFv();
            var_r30_3 = (s32)TQuestThread__sub_801F624C((u8 *)(var_r30_3), (s32)(tl_su), (s32)(TQuestListOnline__sub_801F6540()), (s32)(temp_r31_3));
        }
        return var_r30_3;
    case 5:
        var_r30_4 = __nw__7TObjectFUl(0x1A4);
        if (var_r30_4 != 0) {
            var_r30_4 = ((s32)TQuestThread__sub_801F6418((QThread_801F6418 *)(var_r30_4), (void *)(tl_su), (void *)(TQuestThread__sub_801F6548())));
        }
        return var_r30_4;
    default:
        return 0;
    }
}

#pragma push
#pragma fp_contract on
u8 *TQuestThread__sub_801F624C(u8 *arg0, s32 arg1, s32 arg2, s32 arg3) {
    s32 temp_r31;
    __ct__7TObjectFP7TObject();
    M2C_FIELD(arg0, M2C_UNK **, 0x18) = TQuestThread__data_804C8678;
    if (arg3 < 0) {
        queue_destruction__7TObjectFv((void*)(arg0));
    } else {
        temp_r31 = arg3 + 0x400;
        M2C_FIELD(arg0, s32 *, 0x198) = alloc__22TQuestVmDownLoadServerFPv(temp_r31);
        memcpy(M2C_FIELD(arg0, s32 *, 0x198), arg2, temp_r31);
        lbl_805D5EE8 = arg0;
        init_quest_script_context(M2C_FIELD(arg0, s32 *, 0x198), arg0 + 0x24);
        M2C_FIELD(arg0, s32 *, 0x1A0) = 0;
    }
    TQuestThread__sub_801F5E7C();
    return arg0;
}
#pragma pop

u8 *TQuestThread__sub_801F62E0(u8 *arg0, void *parent, void *arg2, s32 arg3) {
    s32 size;
    void *mem;
    TObj_801F62E0 *obj;
    ((void (*)(void *, void *))__ct__7TObjectFP7TObject)(arg0, parent);
    M2C_FIELD(arg0, M2C_UNK **, 0x18) = TQuestThread__data_804C8678;
    M2C_FIELD(arg0, s32 *, 0x1A0) = arg3;
    M2C_FIELD(arg0, s32 *, 0x198) = 0;
    obj = (TObj_801F62E0 *)arg0;
    switch (M2C_FIELD(arg0, s32 *, 0x1A0)) {
    case 0:
        copy_name(lbl_8044A640);
        size = update_lobby_scene__6TSceneFPv(arg2);
        if (size < 0) {
            queue_destruction__7TObjectFv(arg0);
        } else {
            M2C_FIELD(arg0, s32 *, 0x198) = alloc__22TQuestVmDownLoadServerFPv(size + 0x400);
            read_disc_file(arg2, M2C_FIELD(arg0, s32 *, 0x198));
            copy_name(&lbl_805DC50C);
            lbl_805D5EE8 = arg0;
            init_quest_script_context(M2C_FIELD(arg0, s32 *, 0x198), arg0 + 0x24);
            mem = (void *)__nw__7TObjectFUl(0x194);
            if (mem != NULL) {
                __ct__12TQuestThreadFv(mem, arg0, 0);
            }
        }
        TQuestThread__sub_801F5E7C();
        break;
    case 1:
        size = update_lobby_scene__6TSceneFPv(arg2);
        if (size < 0) {
            queue_destruction__7TObjectFv(arg0);
        } else {
            M2C_FIELD(arg0, s32 *, 0x198) = alloc__22TQuestVmDownLoadServerFPv(size + 0x400);
            read_disc_file(arg2, M2C_FIELD(arg0, s32 *, 0x198));
            lbl_805D5EEC = (u32)arg0;
            init_quest_script_context(M2C_FIELD(arg0, s32 *, 0x198), arg0 + 0x24);
        }
        break;
    default:
        queue_destruction__7TObjectFv(obj);
        break;
    }
    return arg0;
}

QThread_801F6418 *TQuestThread__sub_801F6418(QThread_801F6418 *self, void *unused, void *scene) {
    s32 r;
    __ct__7TObjectFP7TObject();
    self->vt = ((u8 *)&TQuestThread__data_804C8678);
    copy_name(lbl_8044A640);
    r = update_lobby_scene__6TSceneFPv(scene);
    if (r < 0) {
        queue_destruction__7TObjectFv((void*)(self));
    } else {
        self->f198 = alloc__22TQuestVmDownLoadServerFPv(r + 0x400);
        read_disc_file(scene, self->f198);
        copy_name(&lbl_805DC50C);
        (*(QThread_801F6418 * *)&lbl_805D5EE8) = self;
        init_quest_script_context(self->f198, (u8 *)self + 0x24);
        self->f1A0 = 0;
    }
    TQuestThread__sub_801F5E7C();
    return self;
}

void set_status_flag_80__12TQuestThreadFPv(void* p) { *(u16*)((char*)p + 0x70) |= 0x80; }

    extern int lbl_805D5EF4;
void TQuestThread__sub_801F64CC(int a0) { lbl_805D5EF4 = a0; }

int queue_destruction__12TQuestThreadFPv(void* p) { return queue_destruction__7TObjectFv((void*)(p)); }
void free_menu_object(void* p) { void* m = *(void**)((char*)p + 0x20); if (m) fn_801F6520((void*)(m)); }
void fn_801F6520(void* p) { *(u16*)((char*)p + 0x60) &= 0xfffe; }

}
