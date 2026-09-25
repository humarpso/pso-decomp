#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_BITWISE(type, expr) ((type)(expr))

struct Obj_8019601C { u8 pad[0x6]; u16 id; };

extern "C" {
int run_tasks__7TObjectFv(void*);
void run_task__13TQuestColCtrlFv(void);
M2C_UNK TQuestColCtrl__sub_80196EC0();
extern u32 lbl_805D5C50;
extern u32 lbl_805D5C50;
int run_tasks__7TObjectFv(void*);
void run_task__13TQuestColCtrlFv(void);
void *__nw__7TObjectFUl(int);
void *TObjQuestColApcINW__ct(void *self, void *parent, void *arg);
extern u32 lbl_805D5C50;
Obj_8019601C *TLobby__sub_8019601C(void *arg, s32 *out_id);
}

extern "C" {

void *TQuestColCtrl__ct(void *arg0);
void render__13TQuestColCtrlFv(void);
void __ct__7TObjectFP7TObject(void *);

void render__13TQuestColCtrlFv(void) {  }

extern M2C_UNK __vt__13TQuestColCtrl[];
extern void *lbl_805D3404;

void run_task__13TQuestColCtrlFv(void) {
    TQuestColCtrl__sub_80196EC0();
    if ((u32) lbl_805D5C50 != 0U) {
        run_tasks__7TObjectFv((void*)((void*)lbl_805D5C50));
    }
}

void *TQuestColCtrl__ct(void *arg0) {
    __ct__7TObjectFP7TObject(arg0);
    M2C_FIELD(arg0, M2C_UNK **, 0x18) = __vt__13TQuestColCtrl;
    M2C_FIELD(arg0, void **, 0x0) = lbl_805D3404;
    return arg0;
}
Obj_8019601C *TLobby__sub_8019601C(void *arg, s32 *out_id) {
    Obj_8019601C *o = (Obj_8019601C *)__nw__7TObjectFUl(0xcc);
    if (o != 0) {
        o = (Obj_8019601C *)TObjQuestColApcINW__ct(o, (void *)lbl_805D5C50, arg);
    }
    if (o != 0) {
        *out_id = o->id;
        return o;
    } else {
        *out_id = -1;
        return 0;
    }
}

}
