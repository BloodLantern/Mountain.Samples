#include "mzm/data/menus/internal_erase_sram_data.h"
#include "mzm/macros.h"
#include "mzm/data/menus/erase_sram_data.h"
#include "mzm/constants/game_state.h"

const u32* const sEraseSramTextGfxPointers[7][2] = {
    [LANGUAGE_JAPANESE] = {
        sEraseSramMenuQuestionJapaneseGfx,
        sEraseSramMenuConfirmJapanseGfx
    },
    [LANGUAGE_HIRAGANA] = {
        sEraseSramMenuQuestionJapaneseGfx,
        sEraseSramMenuConfirmJapanseGfx
    },
    [LANGUAGE_ENGLISH] = {
        sEraseSramMenuQuestionEnglishGfx,
        sEraseSramMenuConfirmEnglishGfx
    },
    [LANGUAGE_GERMAN] = {
        sEraseSramMenuQuestionEnglishGfx,
        sEraseSramMenuConfirmEnglishGfx
    },
    [LANGUAGE_FRENCH] = {
        sEraseSramMenuQuestionEnglishGfx,
        sEraseSramMenuConfirmEnglishGfx
    },
    [LANGUAGE_ITALIAN] = {
        sEraseSramMenuQuestionEnglishGfx,
        sEraseSramMenuConfirmEnglishGfx
    },
    [LANGUAGE_SPANISH] = {
        sEraseSramMenuQuestionEnglishGfx,
        sEraseSramMenuConfirmEnglishGfx
    },
};
