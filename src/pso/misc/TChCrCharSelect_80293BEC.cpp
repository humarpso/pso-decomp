#include "types.h"
#include "pso/TChCrCharSelect.h"
#include "pso/TChCrTagOccupation.h"
#include "pso/TChCrTagPlBack.h"
#include "pso/TChCrTagPlGraphic.h"
#include "pso/misc/TChCrTagInformation.h"

extern "C" {

void create_all__12TChCrTagNameFv(void);
void create_all_ch_cr_tag_headers(void);

void TChCrCharSelect::init_widgets() { TChCrTagOccupation::create_all(); create_all__12TChCrTagNameFv(); create_all_ch_cr_tag_headers(); TChCrTagPlBack::create_default(); TChCrTagPlGraphic::create_matching_tags(); TChCrTagInformation::create_default(); }

}
