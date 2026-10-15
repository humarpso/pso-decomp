#include "types.h"
#include "pso/misc/TLobby.h"

extern "C" {

    extern int item_appraisal_score;
int TLobby::get_shop_value() {  return item_appraisal_score; }

}
