/**
 * USB HID Keyboard scan codes to decimal
 *
 * Created by TheCodingPlace, 2021
 * Public domain
 *
 * Original post:
 * https://gist.github.com/MightyPork/6da26e382a7ad91b5496ee55fdc73db2
 */

 /**
 * Scan codes - last N slots in the HID report (usually 6).
 * 0 if no key pressed.
 *
 * If more than N keys are pressed, the HID reports
 * KEY_ERR_OVF in all slots to indicate this condition.
 */

#define KEY_NONE  0 // No key pressed
#define KEY_ERR_OVF  1 //  Keyboard Error Roll Over - used for all slots if too many keys are pressed ("Phantom key")
//  2 //  Keyboard POST Fail
//  3 //  Keyboard Error Undefined
#define KEY_A 4 // Keyboard a and A
#define KEY_B  5 // Keyboard b and B
#define KEY_C  6 // Keyboard c and C
#define KEY_D  7 // Keyboard d and D
#define KEY_E  8 // Keyboard e and E
#define KEY_F  9 // Keyboard f and F
#define KEY_G  10 // Keyboard g and G
#define KEY_H  11 // Keyboard h and H
#define KEY_I  12 // Keyboard i and I
#define KEY_J  13 // Keyboard j and J
#define KEY_K  14 // Keyboard k and K
#define KEY_L  15 // Keyboard l and L
#define KEY_M  16 // Keyboard m and M
#define KEY_N  17 // Keyboard n and N
#define KEY_O  18 // Keyboard o and O
#define KEY_P  19 // Keyboard p and P
#define KEY_Q  20 // Keyboard q and Q
#define KEY_R  21 // Keyboard r and R
#define KEY_S  22 // Keyboard s and S
#define KEY_T  23 // Keyboard t and T
#define KEY_U  24 // Keyboard u and U
#define KEY_V  25 // Keyboard v and V
#define KEY_W  26 // Keyboard w and W
#define KEY_X  27 // Keyboard x and X
#define KEY_Y  28 // Keyboard y and Y
#define KEY_Z  29 // Keyboard z and Z

#define KEY_1  30 // Keyboard 1 and !
#define KEY_2  31 // Keyboard 2 and @
#define KEY_3  32 // Keyboard 3 and #
#define KEY_4  33 // Keyboard 4 and $
#define KEY_5  34 // Keyboard 5 and %
#define KEY_6  35 // Keyboard 6 and ^
#define KEY_7  36 // Keyboard 7 and &
#define KEY_8  37 // Keyboard 8 and *
#define KEY_9  38 // Keyboard 9 and (
#define KEY_0  39 // Keyboard 0 and )

#define KEY_ENTER  40 // Keyboard Return (ENTER)
#define KEY_ESC  41 // Keyboard ESCAPE
#define KEY_BACKSPACE  42 // Keyboard DELETE (Backspace)
#define KEY_TAB  43 // Keyboard Tab
#define KEY_SPACE  44 // Keyboard Spacebar
#define KEY_MINUS  45 // Keyboard - and _
#define KEY_EQUAL  46 // Keyboard = and +
#define KEY_LEFTBRACE  47 // Keyboard [ and {
#define KEY_RIGHTBRACE  48 // Keyboard ] and }
#define KEY_BACKSLASH  49 // Keyboard \ and |
#define KEY_HASHTILDE  50 // Keyboard Non-US # and ~
#define KEY_SEMICOLON  51 // Keyboard ; and :
#define KEY_APOSTROPHE  52 // Keyboard ' and "
#define KEY_GRAVE  53 // Keyboard ` and ~
#define KEY_COMMA  54 // Keyboard , and <
#define KEY_DOT  55 // Keyboard . and >
#define KEY_SLASH  56 // Keyboard / and ?
#define KEY_CAPSLOCK  57 // Keyboard Caps Lock

#define KEY_F1  58 // Keyboard F1
#define KEY_F2  59 // Keyboard F2
#define KEY_F3  60 // Keyboard F3
#define KEY_F4  61 // Keyboard F4
#define KEY_F5  62 // Keyboard F5
#define KEY_F6  63 // Keyboard F6
#define KEY_F7  64 // Keyboard F7
#define KEY_F8  65 // Keyboard F8
#define KEY_F9  66 // Keyboard F9
#define KEY_F10  67 // Keyboard F10
#define KEY_F11  68 // Keyboard F11
#define KEY_F12  69 // Keyboard F12

#define KEY_SYSRQ  70 // Keyboard Print Screen
#define KEY_SCROLLLOCK  71 // Keyboard Scroll Lock
#define KEY_PAUSE  72 // Keyboard Pause
#define KEY_INSERT  73 // Keyboard Insert
#define KEY_HOME  74 // Keyboard Home
#define KEY_PAGEUP  75 // Keyboard Page Up
#define KEY_DELETE 76 // Keyboard Delete Forward
#define KEY_END  77 // Keyboard End
#define KEY_PAGEDOWN  78 // Keyboard Page Down
#define KEY_RIGHT  79 // Keyboard Right Arrow
#define KEY_LEFT  80 // Keyboard Left Arrow
#define KEY_DOWN  81 // Keyboard Down Arrow
#define KEY_UP  82 // Keyboard Up Arrow

#define KEY_NUMLOCK  83 // Keyboard Num Lock and Clear
#define KEY_KPSLASH  84 // Keypad /
#define KEY_KPASTERISK  85 // Keypad *
#define KEY_KPMINUS  86 // Keypad -
#define KEY_KPPLUS  87 // Keypad +
#define KEY_KPENTER  88 // Keypad ENTER
#define KEY_KP1  89 // Keypad 1 and End
#define KEY_KP2  90 // Keypad 2 and Down Arrow
#define KEY_KP3  91 // Keypad 3 and PageDn
#define KEY_KP4  92 // Keypad 4 and Left Arrow
#define KEY_KP5  93 // Keypad 5
#define KEY_KP6  94 // Keypad 6 and Right Arrow
#define KEY_KP7  95 // Keypad 7 and Home
#define KEY_KP8  96 // Keypad 8 and Up Arrow
#define KEY_KP9  97 // Keypad 9 and Page Up
#define KEY_KP0  98 // Keypad 0 and Insert
#define KEY_KPDOT  99 // Keypad . and Delete
