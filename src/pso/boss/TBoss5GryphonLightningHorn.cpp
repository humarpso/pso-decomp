#include "pso/TBoss5GryphonLightningHorn.h"

TBoss5GryphonLightningHorn::~TBoss5GryphonLightningHorn() {}

#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

extern "C" {

void *item_equip_variant_deleting_dtor_80326520(void *arg0, s16 arg1);
void render__26TBoss5GryphonLightningHornFv(void);
void run_task__26TBoss5GryphonLightningHornFv(void* p);
int fn_80324E10(void*);
int fn_80325F7C(void*);
int fn_80326074(void*);
void free_obj_heap__10TObjPlayerFPv(void *);
void item_equip_variant_deleting_dtor_80120CF8(void *, int);
void *item_equip_variant_deleting_dtor_80326520(void *arg0, s16 arg1);

void render__26TBoss5GryphonLightningHornFv(void) {  }
void run_task__26TBoss5GryphonLightningHornFv(void* p) { fn_80326074(p); fn_80325F7C(p); fn_80324E10(p); }

extern M2C_UNK lbl_804ECDC0[];

void *item_equip_variant_deleting_dtor_80326520(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = lbl_804ECDC0;
        item_equip_variant_deleting_dtor_80120CF8(arg0, 0);
        if (arg1 > 0) {
            free_obj_heap__10TObjPlayerFPv(arg0);
        }
    }
    return arg0;
}

}
