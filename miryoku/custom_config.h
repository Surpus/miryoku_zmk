// Gallium v2 Matrix for Miryoku Corne
// GASC Home Row Mods (Gui, Alt, Shift, Ctrl)

#if defined (MIRYOKU_KEYBOARD_CORNE)

#define MIRYOKU_LAYER_BASE \
&kp Q,          &kp W,          &kp E,          &kp R,          &kp B,             &kp J,          &kp Y,          &kp O,          &kp U,          &kp SQT,         \
&U_MT(LGUI, S), &U_MT(LALT, L), &U_MT(LSHFT, D), &U_MT(LCTRL, C), &kp V,             &kp Z,          &U_MT(RCTRL, N), &U_MT(RSHFT, R), &U_MT(RALT, T), &U_MT(RGUI, P), \
&kp F,          &kp X,          &kp M,          &kp G,          &kp W,             &kp K,          &kp H,          &kp COMMA,      &kp DOT,        &kp SLASH,       \
U_NP, U_NP, U_LT(U_MEDIA, ESC), U_LT(U_NAV, SPACE), U_LT(U_MOUSE, TAB),            U_LT(U_SYM, RET), U_LT(U_NUM, BSPC), U_LT(U_FUN, DEL), U_NP, U_NP

#define XXX &none

#undef MIRYOKU_MAPPING
#define MIRYOKU_MAPPING( \
    K00, K01, K02, K03, K04,      K05, K06, K07, K08, K09, \
    K10, K11, K12, K13, K14,      K15, K16, K17, K18, K19, \
    K20, K21, K22, K23, K24,      K25, K26, K27, K28, K29, \
    N30, N31, K32, K33, K34,      K35, K36, K37, N38, N39  \
) \
XXX  K00  K01  K02  K03  K04       K05  K06  K07  K08  K09  XXX \
XXX  K10  K11  K12  K13  K14       K15  K16  K17  K18  K19  XXX \
XXX  K20  K21  K22  K23  K24       K25  K26  K27  K28  K29  XXX \
               K32  K33  K34       K35  K36  K37

#endif
