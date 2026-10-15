#include "pso/TObject.h"
#include "types.h"

extern "C" void*    item_pmt;
extern "C" void*    item_pmt_tbl;
extern "C" TObject* item_mgr;

extern "C" char* const item_pmt_filename_descriptor;

extern "C" void*    alloc__23TAdSinglePlyChrSelectGCFv(int size);
extern "C" void*    load_buffer__9TItemLoadFUll(void* obj, const char* file, int flags);
extern "C" void     __dt__9TItemLoadFPvs(void* obj, int flag);
extern "C" void*    get_type__8TItemMagFPv(void* pmt);
extern "C" TObject* create_drop__9TItemDropFi(int arg);

extern "C" {

void free_item_pmt() {
    __dt__9TItemLoadFPvs(item_pmt, 1);
    item_pmt = NULL;
    item_pmt_tbl = NULL;
}

void unload_items() {
    delete item_mgr;
    item_mgr = NULL;
    free_item_pmt();
}

void load_item_pmt() {
    void* p = alloc__23TAdSinglePlyChrSelectGCFv(8);
    if (p != NULL) {
        p = load_buffer__9TItemLoadFUll(p, item_pmt_filename_descriptor, 0x10000);
    }
    item_pmt = p;
    if (p != NULL) {
        item_pmt_tbl = get_type__8TItemMagFPv(p);
    }
}

void load_items() {
    load_item_pmt();
    item_mgr = create_drop__9TItemDropFi(0);
}

}
