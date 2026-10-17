#include "types.h"
#include "pso/misc/TQuestColCtrl.h"
#include "pso/TObject.h"

struct Obj_8019601C { u8 pad[0x6]; u16 id; };

struct Base_80195F50 { u8 pad[0x18]; };

struct Obj_80195F50 : Base_80195F50 { virtual ~Obj_80195F50(); };

extern "C" {
s32 TQuestColCtrl__sub_80196EC0();
extern u32 quest_collision_task_root;
void *__nw__7TObjectFUl(int);
void *TObjQuestColApcINW__ct(void *self, void *parent, void *arg);
Obj_8019601C *create_quest_col_apc_inw__6TLobbyFPvPv(void *arg, s32 *out_id);
void __dt__7TObjectFv(void *, s32);
void __dl__7TObjectFPv(void *);
extern s32 __vt__13TQuestColCtrl[];
void *__dt__13TQuestColCtrlFv(void *arg0, s16 arg1);
void *TQuestColCtrl__ct(void *arg0);
void __ct__7TObjectFP7TObject(void *);

void TQuestColCtrl::render() {  }

extern void *lbl_805D3404;

void TQuestColCtrl::run_task() {
    TQuestColCtrl__sub_80196EC0();
    if ((u32) quest_collision_task_root != 0U) {
        ((TObject *)quest_collision_task_root)->run_tasks();
    }
}

void *__dt__13TQuestColCtrlFv(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        *(void **)((u8 *)arg0 + 0x18) = ((s32 *)&__vt__13TQuestColCtrl);
        if (quest_collision_task_root != 0U) {
            delete (Obj_80195F50 *)quest_collision_task_root;
            quest_collision_task_root = 0;
        }
        __dt__7TObjectFv(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

void *TQuestColCtrl__ct(void *arg0) {
    __ct__7TObjectFP7TObject(arg0);
    *(s32 **)((s8 *)arg0 + 0x18) = __vt__13TQuestColCtrl;
    *(void * *)&((TQuestColCtrl *)arg0)->m_name = lbl_805D3404;
    return arg0;
}
Obj_8019601C *create_quest_col_apc_inw__6TLobbyFPvPv(void *arg, s32 *out_id) {
    Obj_8019601C *o = (Obj_8019601C *)__nw__7TObjectFUl(0xcc);
    if (o != 0) {
        o = (Obj_8019601C *)TObjQuestColApcINW__ct(o, (void *)quest_collision_task_root, arg);
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
