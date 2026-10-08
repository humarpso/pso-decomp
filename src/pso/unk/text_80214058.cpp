#include "types.h"
struct VBase_18_80214058 { char pad[0x18]; };

struct VObj_80214058 : VBase_18_80214058 {
    virtual void m0();
    virtual void m1();
    virtual void m2();
    virtual void m3();
    virtual void m4();
    virtual void m5();
    virtual void m6();
    virtual void m7(s32, s32);
};

struct Seq_80214058 : VObj_80214058 {
    u8 pad1c[8];
    s32 f24;
};

struct List_80214058 { u8 pad[0x28]; void *f28; void *f2c; void *f30; void *f34; };

extern "C" {
void set_field_20__12TQuestListVMFPvi(void *, int);
void *TQuestListOnline__ct(void *, void *, void *, void *);
void *__nw__7TObjectFUl(u32);
void THunterGuildSeqOffline__sub_80213E64(void);
void THunterGuildSeqOffline__sub_80213EBC(void);
void reset_quest_list_vm__22THunterGuildSeqOfflineFv(void);
void THunterGuildSeqOffline__sub_80213F78(void);
extern s32 tl_05;
void fn_80214058(Seq_80214058 *arg0);
}

extern "C" {

void fn_80214058(Seq_80214058 *arg0) {
    List_80214058 *l;
    void *e;
    l = (List_80214058 *)__nw__7TObjectFUl(0x70);
    if (l != 0) {
        l = (List_80214058 *)TQuestListOnline__ct(l, (void *)tl_05, arg0, (void *)arg0->f24);
    }
    if (l != 0) {
        arg0->m7(4, 1);
        l->f28 = (void *)THunterGuildSeqOffline__sub_80213F78;
        l->f2c = (void *)THunterGuildSeqOffline__sub_80213EBC;
        l->f30 = (void *)THunterGuildSeqOffline__sub_80213E64;
        l->f34 = (void *)reset_quest_list_vm__22THunterGuildSeqOfflineFv;
        set_field_20__12TQuestListVMFPvi(arg0, 0xE);
    }
}

}
