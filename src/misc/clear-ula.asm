SECTION code_user

PUBLIC _clear_ula

_clear_ula:
    ld hl, 0x4000
    ld de, 0x4001
    ld bc, 6144
    ldir
    ret