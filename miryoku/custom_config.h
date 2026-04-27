// miryoku/custom_config.h

#pragma once

#if defined (MIRYOKU_KEYBOARD_DACTYL)

// =============================================
//  Gallium v2 with Home Row Mods
// =============================================
#undef MIRYOKU_LAYER_BASE
#define MIRYOKU_LAYER_BASE \
&kp B,          &kp L,          &kp D,          &kp C,          &kp V,             &kp J,          &kp Y,          &kp O,          &kp U,          &kp COMMA,       \
&hml LGUI N,    &hml LALT R,    &hml LSHFT T,   &hml LCTRL S,   &kp G,             &kp P,          &hmr RCTRL H,   &hmr RSHFT A,   &hmr RALT E,    &hmr RGUI I,     \
&kp X,          &kp Q,          &kp M,          &kp W,          &kp Z,             &kp K,          &kp F,          &kp SQT,        &kp SEMI,       &kp DOT,         \
&none, &none, U_LT(U_MEDIA, ESC), U_LT(U_NAV, SPACE), U_LT(U_MOUSE, TAB),          U_LT(U_SYM, RET), U_LT(U_NUM, BSPC), U_LT(U_FUN, DEL), &none, &none

// =============================================
//  Physical mapping (5‑column Dactyl, correct thumb columns)
// =============================================
#define XXX &none
#undef MIRYOKU_MAPPING
#define MIRYOKU_MAPPING(K00, K01, K02, K03, K04,  K05, K06, K07, K08, K09, \
                        K10, K11, K12, K13, K14,  K15, K16, K17, K18, K19, \
                        K20, K21, K22, K23, K24,  K25, K26, K27, K28, K29, \
                        K30, K31, K32,            K33, K34, K35)            \
K00 K01 K02 K03 K04     K05 K06 K07 K08 K09 \
K10 K11 K12 K13 K14     K15 K16 K17 K18 K19 \
K20 K21 K22 K23 K24     K25 K26 K27 K28 K29 \
XXX XXX K30 K31 K32     K33 K34 K35 XXX XXX

#endif  // MIRYOKU_KEYBOARD_DACTYL
