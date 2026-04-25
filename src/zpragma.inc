// OUTPUT TERMINAL STDOUT
#pragma redirect CRT_OTERM_FONT_8X8 = _font_8x8_zx_system  // font is included in nex-file

// INPUT TERMINAL STDIN
#pragma output CRT_ITERM_INKEY_DEBOUNCE = 7          // 1 at 3.5 MHz
#pragma output CRT_ITERM_INKEY_REPEAT_START = 3500   // 500 at 3.5 MHz
#pragma output CRT_ITERM_INKEY_REPEAT_RATE = 210     // 15 at 3.5 MHz
