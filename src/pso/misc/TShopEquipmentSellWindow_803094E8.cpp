#include "types.h"

extern "C" {

int get_item_count__24TShopEquipmentSellWindowFPv(void* p);
void run_task__11TWindowCostFv(void* p);
f32 get_health__14TBoss7CrawfishFPv(void* p);
void set_anim_timer__14TBoss7CrawfishFPvs(void* p, s16 v);
void TBoss7Crawfish__vt42(void);
void TBoss7Crawfish__vt43(void);
void TBoss7Crawfish__vt44(void);
void TBoss7Crawfish__vt45(void);
void TBoss7Crawfish__vt46(void);
void TBoss7Crawfish__vt47(void);
void TBoss7Crawfish__vt48(void);
int initialize_subwindow__9TWindowDDFPv(void*);
int update_window_entry_list(void*, void*);
int fn_80269078(void*);

int get_item_count__24TShopEquipmentSellWindowFPv(void* p) { return fn_80269078(p); }
void run_task__11TWindowCostFv(void* p) { initialize_subwindow__9TWindowDDFPv(p); update_window_entry_list(p, (char*)p + 0x24); }

}
