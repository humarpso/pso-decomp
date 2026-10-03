#include "types.h"

extern "C" {

void reset_proportions__15TChCrCharSelectFv(void);

int update_creation_direction_repeat(void);
int poll_pad_buttons__16TObjCMProportionFv(void);

void reset_proportions__15TChCrCharSelectFv(void) { poll_pad_buttons__16TObjCMProportionFv(); update_creation_direction_repeat(); }

}
