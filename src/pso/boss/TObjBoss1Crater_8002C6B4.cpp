#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

extern "C" {

void TObjBoss1Crater__sub_8002C7B4(void);
s32 TObjBoss1Crater__sub_8002C7E4(void* p);
void * create__15TObjBoss1CraterFPvPv(void *arg0, void *arg1);
int fn_8002C7EC(void);
int TBoss8Dragon__sub_8002D5F8(void);
void *TObjBoss1Crater__ct(void *, void *, void *, void *);
int TObjBoss1Crater__sub_8002C7B8(void);
int TObjBoss1Floor__sub_8002CB40(void);
int TObjBoss1Floor__sub_8002CB78(void);
int TObjBoss1Rock__sub_8002E3CC(void);
int TObjBoss1Rock__sub_8002E3D0(void);
void *__nw__7TObjectFUl(int);
int create_instance__14TObjBoss1FloorFv(void*);
int fn_8002C190(void);
int forward_floor_2CB44__6TLobbyFPv(void* p);
int free_char_select__6TLobbyFv(void);
int free_resources__12TBoss8DragonFv(void);
void *get_instance__12TBoss1DragonFv(void);
void init_bosses__6TLobbyFv(void);
int is_count_below_limit__15TObjBoss1CraterFv(void *, void *);
void update_boss1_objects__6TLobbyFv(void);

void * create__15TObjBoss1CraterFPvPv(void *arg0, void *arg1) {
    void *x1;
    void *o;
    if (is_count_below_limit__15TObjBoss1CraterFv(arg0, arg1) == 0) {
        return NULL;
    }
    x1 = get_instance__12TBoss1DragonFv();
    if (x1 == NULL) {
        return NULL;
    }
    o = __nw__7TObjectFUl(0xCC);
    if (o != NULL) {
        o = TObjBoss1Crater__ct(o, arg0, x1, arg1);
    }
    return o;
}

void TObjBoss1Crater__sub_8002C7B4(void) {  }

s32 TObjBoss1Crater__sub_8002C7E4(void* p) { return *(s32*)((char*)p + 0x8); }

int fn_8002C7EC(void) { return 0; }

}
