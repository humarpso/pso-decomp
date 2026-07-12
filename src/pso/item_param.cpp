#include "types.h"

extern "C" void* item_pmt_tbl;

struct PmtSub {
    s32   count;
    char* records;
};

extern "C" {

void* get_pmt_record__10TObjPlayerFi(int i) {
    PmtSub* c = *(PmtSub**)((char*)item_pmt_tbl + 0x10);
    if (i < c->count) {
        return &c->records[i * 24];
    }
    return &c->records[c->count * 24];
}

void* get_item_pmt_record__10TObjPlayerFii(int type, int id) {
    if (type > 0) {
        char* cat = *(char**)((char*)item_pmt_tbl + 0x00);
        if (type < 170) {
            PmtSub* s = (PmtSub*)(cat + type * 8);
            if (id < s->count) {
                return &s->records[id * 40];
            }
        }
        return *(void**)(cat + 1364);
    }
    return NULL;
}

void* TObjPlayer__sub_8011CCD8(int type, int id) {
    char* cat = *(char**)((char*)item_pmt_tbl + 0x0C);
    if (type < 24) {
        PmtSub* s = (PmtSub*)(cat + type * 8);
        if (id < s->count) {
            return &s->records[id * 20];
        }
    }
    return *(void**)(cat + 196);
}

void* TObjPlayer__sub_8011CD14(int i) {
    PmtSub* c = *(PmtSub**)((char*)item_pmt_tbl + 0x08);
    if (i < c->count) {
        return &c->records[i * 0x10];
    }
    return &c->records[c->count * 0x10];
}

void* TObjPlayer__sub_8011CD48(int type, int id) {
    if (type > 0 && type < 3) {
        PmtSub* s = (PmtSub*)(*(char**)((char*)item_pmt_tbl + 0x04) + (type - 1) * 8);
        if (id < s->count) {
            return &s->records[id * 28];
        }
        return &s->records[s->count * 28];
    }
    return NULL;
}

void* TObjPlayer__sub_8011CDA0(int i) {
    if (i < 32) {
        return *(char**)((char*)item_pmt_tbl + 0x18) + i * 36;
    }
    return NULL;
}

}
