// Define the "KC_*cust" used below
enum custom_keycodes {
  QWERTY = SAFE_RANGE, // guarantees unique keycodes
  LOWER,
  RAISE,
  ADJUST,
  RGBRST
};

//      custom     default keycode/
//      keycode    macro
#define KC_*cust   KC_*default
#define KC_*cust2  CLT_T(KC_*default)

