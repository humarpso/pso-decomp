#include "pso/TObject.h"
#include "types.h"

extern "C" void*    item_pmt;
extern "C" void*    item_pmt_tbl;
extern "C" TObject* item_mgr;

extern "C" char* const lbl_805D2C78;

extern "C" void*    fn_8007EB94(int size);
extern "C" void*    fn_8010FE6C(void* obj, const char* file, int flags);
extern "C" void     fn_8010FE20(void* obj, int flag);
extern "C" void*    TItemMag__sub_8001A468(void* pmt);
extern "C" TObject* fn_80107A68(int arg);

extern "C" {

void free_item_pmt() {
    fn_8010FE20(item_pmt, 1);
    item_pmt = NULL;
    item_pmt_tbl = NULL;
}

void unload_items() {
    delete item_mgr;
    item_mgr = NULL;
    free_item_pmt();
}

void load_item_pmt() {
    void* p = fn_8007EB94(8);
    if (p != NULL) {
        p = fn_8010FE6C(p, lbl_805D2C78, 0x10000);
    }
    item_pmt = p;
    if (p != NULL) {
        item_pmt_tbl = TItemMag__sub_8001A468(p);
    }
}

void load_items() {
    load_item_pmt();
    item_mgr = fn_80107A68(0);
}

}
