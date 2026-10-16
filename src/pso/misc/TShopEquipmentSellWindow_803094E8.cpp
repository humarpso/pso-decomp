#include "types.h"
#include "pso/misc/TShopEquipmentSellWindow.h"
#include "pso/misc/TWindowCost.h"
#include "pso/boss/TBoss7Crawfish.h"

extern "C" {

void vfunc_44__14TBoss7CrawfishFv(void);
void vfunc_45__14TBoss7CrawfishFv(void);
void vfunc_46__14TBoss7CrawfishFv(void);
void vfunc_47__14TBoss7CrawfishFv(void);
void vfunc_48__14TBoss7CrawfishFl(void);
void vfunc_49__14TBoss7CrawfishFv(void);
void vfunc_50__14TBoss7CrawfishFv(void);
int initialize_subwindow__9TWindowDDFv(void*);
int update_window_entry_list(void*, void*);
int fn_80269078(void*);

int TShopEquipmentSellWindow::get_item_count() { return fn_80269078(this); }
void TWindowCost::run_task() { initialize_subwindow__9TWindowDDFv(this); update_window_entry_list(this, (char*)this + 0x24); }

}
