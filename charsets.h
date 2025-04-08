#ifndef CHARSETS_H
#define CHARSETS_H

typedef struct {
  unsigned char bytes[4];
  int length;
} UTF8Char;

const UTF8Char cp1251_to_utf8[128] = {
  /* 0x80 */ {{0xD0, 0x82}, 2}, // U+0402 Ђ
  /* 0x81 */ {{0xD0, 0x83}, 2}, // U+0403 Ѓ
  /* 0x82 */ {{0xE2, 0x80, 0x9A}, 3}, // U+201A ‚
  /* 0x83 */ {{0xD1, 0x93}, 2}, // U+0453 ѓ
  /* 0x84 */ {{0xE2, 0x80, 0x9E}, 3}, // U+201E „
  /* 0x85 */ {{0xE2, 0x80, 0xA6}, 3}, // U+2026 …
  /* 0x86 */ {{0xE2, 0x80, 0xA0}, 3}, // U+2020 †
  /* 0x87 */ {{0xE2, 0x80, 0xA1}, 3}, // U+2021 ‡
  /* 0x88 */ {{0xE2, 0x82, 0xAC}, 3}, // U+20AC €
  /* 0x89 */ {{0xE2, 0x80, 0xB0}, 3}, // U+2030 ‰
  /* 0x8A */ {{0xD0, 0x89}, 2}, // U+0409 Љ
  /* 0x8B */ {{0xE2, 0x80, 0xB9}, 3}, // U+2039 ‹
  /* 0x8C */ {{0xD0, 0x8A}, 2}, // U+040A Њ
  /* 0x8D */ {{0xD0, 0x8C}, 2}, // U+040C Ќ
  /* 0x8E */ {{0xD0, 0x8B}, 2}, // U+040B Ћ
  /* 0x8F */ {{0xD0, 0x8F}, 2}, // U+040F Џ

  /* 0x90 */ {{0xD1, 0x92}, 2}, // U+0452 ђ
  /* 0x91 */ {{0xE2, 0x80, 0x98}, 3}, // U+2018 ‘
  /* 0x92 */ {{0xE2, 0x80, 0x99}, 3}, // U+2019 ’
  /* 0x93 */ {{0xE2, 0x80, 0x9C}, 3}, // U+201C “
  /* 0x94 */ {{0xE2, 0x80, 0x9D}, 3}, // U+201D ”
  /* 0x95 */ {{0xE2, 0x80, 0xA2}, 3}, // U+2022 •
  /* 0x96 */ {{0xE2, 0x80, 0x93}, 3}, // U+2013 –
  /* 0x97 */ {{0xE2, 0x80, 0x94}, 3}, // U+2014 —
  /* 0x98 */ {{0x00}, 0}, // Не определено
  /* 0x99 */ {{0xE2, 0x84, 0xA2}, 3}, // U+2122 ™
  /* 0x9A */ {{0xD1, 0x99}, 2}, // U+0459 љ
  /* 0x9B */ {{0xE2, 0x80, 0xBA}, 3}, // U+203A ›
  /* 0x9C */ {{0xD1, 0x9A}, 2}, // U+045A њ
  /* 0x9D */ {{0xD1, 0x9C}, 2}, // U+045C ќ
  /* 0x9E */ {{0xD1, 0x9B}, 2}, // U+045B ћ
  /* 0x9F */ {{0xD1, 0x9F}, 2}, // U+045F џ

  /* 0xA0 */ {{0xC2, 0xA0}, 2}, // U+00A0 Неразрывный пробел
  /* 0xA1 */ {{0xD0, 0x8E}, 2}, // U+040E Ў
  /* 0xA2 */ {{0xD1, 0x9E}, 2}, // U+045E ў
  /* 0xA3 */ {{0xD0, 0x88}, 2}, // U+0408 Ј
  /* 0xA4 */ {{0xC2, 0xA4}, 2}, // U+00A4 ¤
  /* 0xA5 */ {{0xD2, 0x90}, 2}, // U+0490 Ґ
  /* 0xA6 */ {{0xC2, 0xA6}, 2}, // U+00A6 ¦
  /* 0xA7 */ {{0xC2, 0xA7}, 2}, // U+00A7 §
  /* 0xA8 */ {{0xD0, 0x81}, 2}, // U+0401 Ё
  /* 0xA9 */ {{0xC2, 0xA9}, 2}, // U+00A9 ©
  /* 0xAA */ {{0xD0, 0x84}, 2}, // U+0404 Є
  /* 0xAB */ {{0xC2, 0xAB}, 2}, // U+00AB «
  /* 0xAC */ {{0xC2, 0xAC}, 2}, // U+00AC ¬
  /* 0xAD */ {{0xC2, 0xAD}, 2}, // U+00AD Мягкий перенос
  /* 0xAE */ {{0xC2, 0xAE}, 2}, // U+00AE ®
  /* 0xAF */ {{0xD0, 0x87}, 2}, // U+0407 Ї

  /* 0xB0 */ {{0xC2, 0xB0}, 2}, // U+00B0 °
  /* 0xB1 */ {{0xC2, 0xB1}, 2}, // U+00B1 ±
  /* 0xB2 */ {{0xD0, 0x86}, 2}, // U+0406 І
  /* 0xB3 */ {{0xD1, 0x96}, 2}, // U+0456 і
  /* 0xB4 */ {{0xD2, 0x91}, 2}, // U+0491 ґ
  /* 0xB5 */ {{0xC2, 0xB5}, 2}, // U+00B5 µ
  /* 0xB6 */ {{0xC2, 0xB6}, 2}, // U+00B6 ¶
  /* 0xB7 */ {{0xC2, 0xB7}, 2}, // U+00B7 ·
  /* 0xB8 */ {{0xD1, 0x91}, 2}, // U+0451 ё
  /* 0xB9 */ {{0xE2, 0x84, 0x96}, 3}, // U+2116 №
  /* 0xBA */ {{0xD1, 0x94}, 2}, // U+0454 є
  /* 0xBB */ {{0xC2, 0xBB}, 2}, // U+00BB »
  /* 0xBC */ {{0xD1, 0x98}, 2}, // U+0458 ј
  /* 0xBD */ {{0xD0, 0x85}, 2}, // U+0405 Ѕ
  /* 0xBE */ {{0xD1, 0x95}, 2}, // U+0455 ѕ
  /* 0xBF */ {{0xD1, 0x97}, 2}, // U+0457 ї

  /* 0xC0 */ {{0xD0, 0x90}, 2}, // А
  /* 0xC1 */ {{0xD0, 0x91}, 2}, // Б
  /* 0xC2 */ {{0xD0, 0x92}, 2}, // В
  /* 0xC3 */ {{0xD0, 0x93}, 2}, // Г
  /* 0xC4 */ {{0xD0, 0x94}, 2}, // Д
  /* 0xC5 */ {{0xD0, 0x95}, 2}, // Е
  /* 0xC6 */ {{0xD0, 0x96}, 2}, // Ж
  /* 0xC7 */ {{0xD0, 0x97}, 2}, // З
  /* 0xC8 */ {{0xD0, 0x98}, 2}, // И
  /* 0xC9 */ {{0xD0, 0x99}, 2}, // Й
  /* 0xCA */ {{0xD0, 0x9A}, 2}, // К
  /* 0xCB */ {{0xD0, 0x9B}, 2}, // Л
  /* 0xCC */ {{0xD0, 0x9C}, 2}, // М
  /* 0xCD */ {{0xD0, 0x9D}, 2}, // Н
  /* 0xCE */ {{0xD0, 0x9E}, 2}, // О
  /* 0xCF */ {{0xD0, 0x9F}, 2}, // П

  /* 0xD0 */ {{0xD0, 0xA0}, 2}, // Р
  /* 0xD1 */ {{0xD0, 0xA1}, 2}, // С
  /* 0xD2 */ {{0xD0, 0xA2}, 2}, // Т
  /* 0xD3 */ {{0xD0, 0xA3}, 2}, // У
  /* 0xD4 */ {{0xD0, 0xA4}, 2}, // Ф
  /* 0xD5 */ {{0xD0, 0xA5}, 2}, // Х
  /* 0xD6 */ {{0xD0, 0xA6}, 2}, // Ц
  /* 0xD7 */ {{0xD0, 0xA7}, 2}, // Ч
  /* 0xD8 */ {{0xD0, 0xA8}, 2}, // Ш
  /* 0xD9 */ {{0xD0, 0xA9}, 2}, // Щ
  /* 0xDA */ {{0xD0, 0xAA}, 2}, // Ъ
  /* 0xDB */ {{0xD0, 0xAB}, 2}, // Ы
  /* 0xDC */ {{0xD0, 0xAC}, 2}, // Ь
  /* 0xDD */ {{0xD0, 0xAD}, 2}, // Э
  /* 0xDE */ {{0xD0, 0xAE}, 2}, // Ю
  /* 0xDF */ {{0xD0, 0xAF}, 2}, // Я

  /* 0xE0 */ {{0xD0, 0xB0}, 2}, // а
  /* 0xE1 */ {{0xD0, 0xB1}, 2}, // б
  /* 0xE2 */ {{0xD0, 0xB2}, 2}, // в
  /* 0xE3 */ {{0xD0, 0xB3}, 2}, // г
  /* 0xE4 */ {{0xD0, 0xB4}, 2}, // д
  /* 0xE5 */ {{0xD0, 0xB5}, 2}, // е
  /* 0xE6 */ {{0xD0, 0xB6}, 2}, // ж
  /* 0xE7 */ {{0xD0, 0xB7}, 2}, // з
  /* 0xE8 */ {{0xD0, 0xB8}, 2}, // и
  /* 0xE9 */ {{0xD0, 0xB9}, 2}, // й
  /* 0xEA */ {{0xD0, 0xBA}, 2}, // к
  /* 0xEB */ {{0xD0, 0xBB}, 2}, // л
  /* 0xEC */ {{0xD0, 0xBC}, 2}, // м
  /* 0xED */ {{0xD0, 0xBD}, 2}, // н
  /* 0xEE */ {{0xD0, 0xBE}, 2}, // о
  /* 0xEF */ {{0xD0, 0xBF}, 2}, // п

  /* 0xF0 */ {{0xD1, 0x80}, 2}, // р
  /* 0xF1 */ {{0xD1, 0x81}, 2}, // с
  /* 0xF2 */ {{0xD1, 0x82}, 2}, // т
  /* 0xF3 */ {{0xD1, 0x83}, 2}, // у
  /* 0xF4 */ {{0xD1, 0x84}, 2}, // ф
  /* 0xF5 */ {{0xD1, 0x85}, 2}, // х
  /* 0xF6 */ {{0xD1, 0x86}, 2}, // ц
  /* 0xF7 */ {{0xD1, 0x87}, 2}, // ч
  /* 0xF8 */ {{0xD1, 0x88}, 2}, // ш
  /* 0xF9 */ {{0xD1, 0x89}, 2}, // щ
  /* 0xFA */ {{0xD1, 0x8A}, 2}, // ъ
  /* 0xFB */ {{0xD1, 0x8B}, 2}, // ы
  /* 0xFC */ {{0xD1, 0x8C}, 2}, // ь
  /* 0xFD */ {{0xD1, 0x8D}, 2}, // э
  /* 0xFE */ {{0xD1, 0x8E}, 2}, // ю
  /* 0xFF */ {{0xD1, 0x8F}, 2}  // я
};

const UTF8Char koi8r_to_utf8[128] = {
  /* 0x80 */ {{0xE2, 0x94, 0x80}, 3}, // ─ (U+2500)
  /* 0x81 */ {{0xE2, 0x94, 0x82}, 3}, // │ (U+2502)
  /* 0x82 */ {{0xE2, 0x94, 0x8C}, 3}, // ┌ (U+250C)
  /* 0x83 */ {{0xE2, 0x94, 0x90}, 3}, // ┐ (U+2510)
  /* 0x84 */ {{0xE2, 0x94, 0x94}, 3}, // └ (U+2514)
  /* 0x85 */ {{0xE2, 0x94, 0x98}, 3}, // ┘ (U+2518)
  /* 0x86 */ {{0xE2, 0x94, 0x9C}, 3}, // ├ (U+251C)
  /* 0x87 */ {{0xE2, 0x94, 0xA4}, 3}, // ┤ (U+2524)
  /* 0x88 */ {{0xE2, 0x94, 0xAC}, 3}, // ┬ (U+252C)
  /* 0x89 */ {{0xE2, 0x94, 0xB4}, 3}, // ┴ (U+2534)
  /* 0x8A */ {{0xE2, 0x94, 0xBC}, 3}, // ┼ (U+253C)
  /* 0x8B */ {{0xE2, 0x96, 0x80}, 3}, // ▀ (U+2580)
  /* 0x8C */ {{0xE2, 0x96, 0x84}, 3}, // ▄ (U+2584)
  /* 0x8D */ {{0xE2, 0x96, 0x88}, 3}, // █ (U+2588)
  /* 0x8E */ {{0xE2, 0x96, 0x8C}, 3}, // ▌ (U+258C)
  /* 0x8F */ {{0xE2, 0x96, 0x90}, 3}, // ▐ (U+2590)

  /* 0x90 */ {{0xE2, 0x96, 0x91}, 3}, // ░ (U+2591)
  /* 0x91 */ {{0xE2, 0x96, 0x92}, 3}, // ▒ (U+2592)
  /* 0x92 */ {{0xE2, 0x96, 0x93}, 3}, // ▓ (U+2593)
  /* 0x93 */ {{0xE2, 0x8C, 0xA0}, 3}, // ⌠ (U+2320)
  /* 0x94 */ {{0xE2, 0x96, 0xA0}, 3}, // ■ (U+25A0)
  /* 0x95 */ {{0xE2, 0x88, 0x99}, 3}, // ∙ (U+2219)
  /* 0x96 */ {{0xE2, 0x88, 0x9A}, 3}, // √ (U+221A)
  /* 0x97 */ {{0xE2, 0x89, 0x88}, 3}, // ≈ (U+2248)
  /* 0x98 */ {{0xE2, 0x89, 0xA4}, 3}, // ≤ (U+2264)
  /* 0x99 */ {{0xE2, 0x89, 0xA5}, 3}, // ≥ (U+2265)
  /* 0x9A */ {{0xC2, 0xA0}, 2}, //   (U+00A0)
  /* 0x9B */ {{0xE2, 0x8C, 0xA1}, 3}, // ⌡ (U+2321)
  /* 0x9C */ {{0xC2, 0xB0}, 2}, // ° (U+00B0)
  /* 0x9D */ {{0xC2, 0xB2}, 2}, // ² (U+00B2)
  /* 0x9E */ {{0xC2, 0xB7}, 2}, // · (U+00B7)
  /* 0x9F */ {{0xC3, 0xB7}, 2}, // ÷ (U+00F7)

  /* 0xA0 */ {{0xE2, 0x95, 0x90}, 3}, // ═ (U+2550)
  /* 0xA1 */ {{0xE2, 0x95, 0x91}, 3}, // ║ (U+2551)
  /* 0xA2 */ {{0xE2, 0x95, 0x92}, 3}, // ╒ (U+2552)
  /* 0xA3 */ {{0xD1, 0x91}, 2}, // ё (U+0451)
  /* 0xA4 */ {{0xE2, 0x95, 0x93}, 3}, // ╓ (U+2553)
  /* 0xA5 */ {{0xE2, 0x95, 0x94}, 3}, // ╔ (U+2554)
  /* 0xA6 */ {{0xE2, 0x95, 0x95}, 3}, // ╕ (U+2555)
  /* 0xA7 */ {{0xE2, 0x95, 0x96}, 3}, // ╖ (U+2556)
  /* 0xA8 */ {{0xE2, 0x95, 0x97}, 3}, // ╗ (U+2557)
  /* 0xA9 */ {{0xE2, 0x95, 0x98}, 3}, // ╘ (U+2558)
  /* 0xAA */ {{0xE2, 0x95, 0x99}, 3}, // ╙ (U+2559)
  /* 0xAB */ {{0xE2, 0x95, 0x9A}, 3}, // ╚ (U+255A)
  /* 0xAC */ {{0xE2, 0x95, 0x9B}, 3}, // ╛ (U+255B)
  /* 0xAD */ {{0xE2, 0x95, 0x9C}, 3}, // ╜ (U+255C)
  /* 0xAE */ {{0xE2, 0x95, 0x9D}, 3}, // ╝ (U+255D)
  /* 0xAF */ {{0xE2, 0x95, 0x9E}, 3}, // ╞ (U+255E)

  /* 0xB0 */ {{0xE2, 0x95, 0x9F}, 3}, // ╟ (U+255F)
  /* 0xB1 */ {{0xE2, 0x95, 0xA0}, 3}, // ╠ (U+2560)
  /* 0xB2 */ {{0xE2, 0x95, 0xA1}, 3}, // ╡ (U+2561)
  /* 0xB3 */ {{0xD0, 0x81}, 2}, // Ё (U+0401)
  /* 0xB4 */ {{0xE2, 0x95, 0xA2}, 3}, // ╢ (U+2562)
  /* 0xB5 */ {{0xE2, 0x95, 0xA3}, 3}, // ╣ (U+2563)
  /* 0xB6 */ {{0xE2, 0x95, 0xA4}, 3}, // ╤ (U+2564)
  /* 0xB7 */ {{0xE2, 0x95, 0xA5}, 3}, // ╥ (U+2565)
  /* 0xB8 */ {{0xE2, 0x95, 0xA6}, 3}, // ╦ (U+2566)
  /* 0xB9 */ {{0xE2, 0x95, 0xA7}, 3}, // ╧ (U+2567)
  /* 0xBA */ {{0xE2, 0x95, 0xA8}, 3}, // ╨ (U+2568)
  /* 0xBB */ {{0xE2, 0x95, 0xA9}, 3}, // ╩ (U+2569)
  /* 0xBC */ {{0xE2, 0x95, 0xAA}, 3}, // ╪ (U+256A)
  /* 0xBD */ {{0xE2, 0x95, 0xAB}, 3}, // ╫ (U+256B)
  /* 0xBE */ {{0xE2, 0x95, 0xAC}, 3}, // ╬ (U+256C)
  /* 0xBF */ {{0xC2, 0xA9}, 2}, // © (U+00A9)

  /* 0xC0 */ {{0xD1, 0x8E}, 2}, // ю (U+044E)
  /* 0xC1 */ {{0xD0, 0xB0}, 2}, // а (U+0430)
  /* 0xC2 */ {{0xD0, 0xB1}, 2}, // б (U+0431)
  /* 0xC3 */ {{0xD1, 0x86}, 2}, // ц (U+0446)
  /* 0xC4 */ {{0xD0, 0xB4}, 2}, // д (U+0434)
  /* 0xC5 */ {{0xD0, 0xB5}, 2}, // е (U+0435)
  /* 0xC6 */ {{0xD1, 0x84}, 2}, // ф (U+0444)
  /* 0xC7 */ {{0xD0, 0xB3}, 2}, // г (U+0433)
  /* 0xC8 */ {{0xD1, 0x85}, 2}, // х (U+0445)
  /* 0xC9 */ {{0xD0, 0xB8}, 2}, // и (U+0438)
  /* 0xCA */ {{0xD0, 0xB9}, 2}, // й (U+0439)
  /* 0xCB */ {{0xD0, 0xBA}, 2}, // к (U+043A)
  /* 0xCC */ {{0xD0, 0xBB}, 2}, // л (U+043B)
  /* 0xCD */ {{0xD0, 0xBC}, 2}, // м (U+043C)
  /* 0xCE */ {{0xD0, 0xBD}, 2}, // н (U+043D)
  /* 0xCF */ {{0xD0, 0xBE}, 2}, // о (U+043E)

  /* 0xD0 */ {{0xD0, 0xBF}, 2}, // п (U+043F)
  /* 0xD1 */ {{0xD1, 0x8F}, 2}, // я (U+044F)
  /* 0xD2 */ {{0xD1, 0x80}, 2}, // р (U+0440)
  /* 0xD3 */ {{0xD1, 0x81}, 2}, // с (U+0441)
  /* 0xD4 */ {{0xD1, 0x82}, 2}, // т (U+0442)
  /* 0xD5 */ {{0xD1, 0x83}, 2}, // у (U+0443)
  /* 0xD6 */ {{0xD0, 0xB6}, 2}, // ж (U+0436)
  /* 0xD7 */ {{0xD0, 0xB2}, 2}, // в (U+0432)
  /* 0xD8 */ {{0xD1, 0x8C}, 2}, // ь (U+044C)
  /* 0xD9 */ {{0xD1, 0x8B}, 2}, // ы (U+044B)
  /* 0xDA */ {{0xD0, 0xB7}, 2}, // з (U+0437)
  /* 0xDB */ {{0xD1, 0x88}, 2}, // ш (U+0448)
  /* 0xDC */ {{0xD1, 0x8D}, 2}, // э (U+044D)
  /* 0xDD */ {{0xD1, 0x89}, 2}, // щ (U+0449)
  /* 0xDE */ {{0xD1, 0x87}, 2}, // ч (U+0447)
  /* 0xDF */ {{0xD1, 0x8A}, 2}, // ъ (U+044A)

  /* 0xE0 */ {{0xD0, 0xAE}, 2}, // Ю (U+042E)
  /* 0xE1 */ {{0xD0, 0x90}, 2}, // А (U+0410)
  /* 0xE2 */ {{0xD0, 0x91}, 2}, // Б (U+0411)
  /* 0xE3 */ {{0xD0, 0xA6}, 2}, // Ц (U+0426)
  /* 0xE4 */ {{0xD0, 0x94}, 2}, // Д (U+0414)
  /* 0xE5 */ {{0xD0, 0x95}, 2}, // Е (U+0415)
  /* 0xE6 */ {{0xD0, 0xA4}, 2}, // Ф (U+0424)
  /* 0xE7 */ {{0xD0, 0x93}, 2}, // Г (U+0413)
  /* 0xE8 */ {{0xD0, 0xA5}, 2}, // Х (U+0425)
  /* 0xE9 */ {{0xD0, 0x98}, 2}, // И (U+0418)
  /* 0xEA */ {{0xD0, 0x99}, 2}, // Й (U+0419)
  /* 0xEB */ {{0xD0, 0x9A}, 2}, // К (U+041A)
  /* 0xEC */ {{0xD0, 0x9B}, 2}, // Л (U+041B)
  /* 0xED */ {{0xD0, 0x9C}, 2}, // М (U+041C)
  /* 0xEE */ {{0xD0, 0x9D}, 2}, // Н (U+041D)
  /* 0xEF */ {{0xD0, 0x9E}, 2}, // О (U+041E)

  /* 0xF0 */ {{0xD0, 0x9F}, 2}, // П (U+041F)
  /* 0xF1 */ {{0xD0, 0xAF}, 2}, // Я (U+042F)
  /* 0xF2 */ {{0xD0, 0xA0}, 2}, // Р (U+0420)
  /* 0xF3 */ {{0xD0, 0xA1}, 2}, // С (U+0421)
  /* 0xF4 */ {{0xD0, 0xA2}, 2}, // Т (U+0422)
  /* 0xF5 */ {{0xD0, 0xA3}, 2}, // У (U+0423)
  /* 0xF6 */ {{0xD0, 0x96}, 2}, // Ж (U+0416)
  /* 0xF7 */ {{0xD0, 0x92}, 2}, // В (U+0412)
  /* 0xF8 */ {{0xD0, 0xAC}, 2}, // Ь (U+042C)
  /* 0xF9 */ {{0xD0, 0xAB}, 2}, // Ы (U+042B)
  /* 0xFA */ {{0xD0, 0x97}, 2}, // З (U+0417)
  /* 0xFB */ {{0xD0, 0xA8}, 2}, // Ш (U+0428)
  /* 0xFC */ {{0xD0, 0xAD}, 2}, // Э (U+042D)
  /* 0xFD */ {{0xD0, 0xA9}, 2}, // Щ (U+0429)
  /* 0xFE */ {{0xD0, 0xA7}, 2}, // Ч (U+0427)
  /* 0xFF */ {{0xD0, 0xAA}, 2}  // Ъ (U+042A)
};

const UTF8Char iso88595_to_utf8[128] = {
  /* 0x80 - 0x83 */ {{0x00}, 0}, {{0x00}, 0}, {{0x00}, 0}, {{0x00}, 0}, // Не используется (зарезервировано)
  /* 0x84 - 0x87 */ {{0x00}, 0}, {{0x00}, 0}, {{0x00}, 0}, {{0x00}, 0}, // Не используется (зарезервировано)
  /* 0x88 - 0x8B */ {{0x00}, 0}, {{0x00}, 0}, {{0x00}, 0}, {{0x00}, 0}, // Не используется (зарезервировано)
  /* 0x8C - 0x8F */ {{0x00}, 0}, {{0x00}, 0}, {{0x00}, 0}, {{0x00}, 0}, // Не используется (зарезервировано)

  /* 0x90 - 0x93 */ {{0x00}, 0}, {{0x00}, 0}, {{0x00}, 0}, {{0x00}, 0}, // Не используется (зарезервировано)
  /* 0x94 - 0x97 */ {{0x00}, 0}, {{0x00}, 0}, {{0x00}, 0}, {{0x00}, 0}, // Не используется (зарезервировано)
  /* 0x98 - 0x9B */ {{0x00}, 0}, {{0x00}, 0}, {{0x00}, 0}, {{0x00}, 0}, // Не используется (зарезервировано)
  /* 0x9C - 0x9F */ {{0x00}, 0}, {{0x00}, 0}, {{0x00}, 0}, {{0x00}, 0}, // Не используется (зарезервировано)

  /* 0xA0 */ {{0xC2, 0xA0}, 2}, // Неразрывный пробел (U+00A0)
  /* 0xA1 */ {{0xD0, 0x81}, 2}, // Ё (U+0401)
  /* 0xA2 */ {{0xD0, 0x82}, 2}, // Ђ (U+0402)
  /* 0xA3 */ {{0xD0, 0x83}, 2}, // Ѓ (U+0403)
  /* 0xA4 */ {{0xD0, 0x84}, 2}, // Є (U+0404)
  /* 0xA5 */ {{0xD0, 0x85}, 2}, // Ѕ (U+0405)
  /* 0xA6 */ {{0xD0, 0x86}, 2}, // І (U+0406)
  /* 0xA7 */ {{0xD0, 0x87}, 2}, // Ї (U+0407)
  /* 0xA8 */ {{0xD0, 0x88}, 2}, // Ј (U+0408)
  /* 0xA9 */ {{0xD0, 0x89}, 2}, // Љ (U+0409)
  /* 0xAA */ {{0xD0, 0x8A}, 2}, // Њ (U+040A)
  /* 0xAB */ {{0xD0, 0x8B}, 2}, // Ћ (U+040B)
  /* 0xAC */ {{0xD0, 0x8C}, 2}, // Ќ (U+040C)
  /* 0xAD */ {{0xC2, 0xAD}, 2}, // Мягкий перенос (U+00AD)
  /* 0xAE */ {{0xD0, 0x8E}, 2}, // Ў (U+040E)
  /* 0xAF */ {{0xD0, 0x8F}, 2}, // Џ (U+040F)

  /* 0xB0 */ {{0xD0, 0x90}, 2}, // А (U+0410)
  /* 0xB1 */ {{0xD0, 0x91}, 2}, // Б (U+0411)
  /* 0xB2 */ {{0xD0, 0x92}, 2}, // В (U+0412)
  /* 0xB3 */ {{0xD0, 0x93}, 2}, // Г (U+0413)
  /* 0xB4 */ {{0xD0, 0x94}, 2}, // Д (U+0414)
  /* 0xB5 */ {{0xD0, 0x95}, 2}, // Е (U+0415)
  /* 0xB6 */ {{0xD0, 0x96}, 2}, // Ж (U+0416)
  /* 0xB7 */ {{0xD0, 0x97}, 2}, // З (U+0417)
  /* 0xB8 */ {{0xD0, 0x98}, 2}, // И (U+0418)
  /* 0xB9 */ {{0xD0, 0x99}, 2}, // Й (U+0419)
  /* 0xBA */ {{0xD0, 0x9A}, 2}, // К (U+041A)
  /* 0xBB */ {{0xD0, 0x9B}, 2}, // Л (U+041B)
  /* 0xBC */ {{0xD0, 0x9C}, 2}, // М (U+041C)
  /* 0xBD */ {{0xD0, 0x9D}, 2}, // Н (U+041D)
  /* 0xBE */ {{0xD0, 0x9E}, 2}, // О (U+041E)
  /* 0xBF */ {{0xD0, 0x9F}, 2}, // П (U+041F)

  /* 0xC0 */ {{0xD0, 0xA0}, 2}, // Р (U+0420)
  /* 0xC1 */ {{0xD0, 0xA1}, 2}, // С (U+0421)
  /* 0xC2 */ {{0xD0, 0xA2}, 2}, // Т (U+0422)
  /* 0xC3 */ {{0xD0, 0xA3}, 2}, // У (U+0423)
  /* 0xC4 */ {{0xD0, 0xA4}, 2}, // Ф (U+0424)
  /* 0xC5 */ {{0xD0, 0xA5}, 2}, // Х (U+0425)
  /* 0xC6 */ {{0xD0, 0xA6}, 2}, // Ц (U+0426)
  /* 0xC7 */ {{0xD0, 0xA7}, 2}, // Ч (U+0427)
  /* 0xC8 */ {{0xD0, 0xA8}, 2}, // Ш (U+0428)
  /* 0xC9 */ {{0xD0, 0xA9}, 2}, // Щ (U+0429)
  /* 0xCA */ {{0xD0, 0xAA}, 2}, // Ъ (U+042A)
  /* 0xCB */ {{0xD0, 0xAB}, 2}, // Ы (U+042B)
  /* 0xCC */ {{0xD0, 0xAC}, 2}, // Ь (U+042C)
  /* 0xCD */ {{0xD0, 0xAD}, 2}, // Э (U+042D)
  /* 0xCE */ {{0xD0, 0xAE}, 2}, // Ю (U+042E)
  /* 0xCF */ {{0xD0, 0xAF}, 2}, // Я (U+042F)

  /* 0xD0 */ {{0xD0, 0xB0}, 2}, // а (U+0430)
  /* 0xD1 */ {{0xD0, 0xB1}, 2}, // б (U+0431)
  /* 0xD2 */ {{0xD0, 0xB2}, 2}, // в (U+0432)
  /* 0xD3 */ {{0xD0, 0xB3}, 2}, // г (U+0433)
  /* 0xD4 */ {{0xD0, 0xB4}, 2}, // д (U+0434)
  /* 0xD5 */ {{0xD0, 0xB5}, 2}, // е (U+0435)
  /* 0xD6 */ {{0xD0, 0xB6}, 2}, // ж (U+0436)
  /* 0xD7 */ {{0xD0, 0xB7}, 2}, // з (U+0437)
  /* 0xD8 */ {{0xD0, 0xB8}, 2}, // и (U+0438)
  /* 0xD9 */ {{0xD0, 0xB9}, 2}, // й (U+0439)
  /* 0xDA */ {{0xD0, 0xBA}, 2}, // к (U+043A)
  /* 0xDB */ {{0xD0, 0xBB}, 2}, // л (U+043B)
  /* 0xDC */ {{0xD0, 0xBC}, 2}, // м (U+043C)
  /* 0xDD */ {{0xD0, 0xBD}, 2}, // н (U+043D)
  /* 0xDE */ {{0xD0, 0xBE}, 2}, // о (U+043E)
  /* 0xDF */ {{0xD0, 0xBF}, 2}, // п (U+043F)

  /* 0xE0 */ {{0xD1, 0x80}, 2}, // р (U+0440)
  /* 0xE1 */ {{0xD1, 0x81}, 2}, // с (U+0441)
  /* 0xE2 */ {{0xD1, 0x82}, 2}, // т (U+0442)
  /* 0xE3 */ {{0xD1, 0x83}, 2}, // у (U+0443)
  /* 0xE4 */ {{0xD1, 0x84}, 2}, // ф (U+0444)
  /* 0xE5 */ {{0xD1, 0x85}, 2}, // х (U+0445)
  /* 0xE6 */ {{0xD1, 0x86}, 2}, // ц (U+0446)
  /* 0xE7 */ {{0xD1, 0x87}, 2}, // ч (U+0447)
  /* 0xE8 */ {{0xD1, 0x88}, 2}, // ш (U+0448)
  /* 0xE9 */ {{0xD1, 0x89}, 2}, // щ (U+0449)
  /* 0xEA */ {{0xD1, 0x8A}, 2}, // ъ (U+044A)
  /* 0xEB */ {{0xD1, 0x8B}, 2}, // ы (U+044B)
  /* 0xEC */ {{0xD1, 0x8C}, 2}, // ь (U+044C)
  /* 0xED */ {{0xD1, 0x8D}, 2}, // э (U+044D)
  /* 0xEE */ {{0xD1, 0x8E}, 2}, // ю (U+044E)
  /* 0xEF */ {{0xD1, 0x8F}, 2}, // я (U+044F)

  /* 0xF0 */ {{0xE2, 0x84, 0x96}, 3}, // № (U+2116)
  /* 0xF1 */ {{0xD1, 0x91}, 2}, // ё (U+0451)
  /* 0xF2 */ {{0xD1, 0x92}, 2}, // ђ (U+0452)
  /* 0xF3 */ {{0xD1, 0x93}, 2}, // ѓ (U+0453)
  /* 0xF4 */ {{0xD1, 0x94}, 2}, // є (U+0454)
  /* 0xF5 */ {{0xD1, 0x95}, 2}, // ѕ (U+0455)
  /* 0xF6 */ {{0xD1, 0x96}, 2}, // і (U+0456)
  /* 0xF7 */ {{0xD1, 0x97}, 2}, // ї (U+0457)
  /* 0xF8 */ {{0xD1, 0x98}, 2}, // ј (U+0458)
  /* 0xF9 */ {{0xD1, 0x99}, 2}, // љ (U+0459)
  /* 0xFA */ {{0xD1, 0x9A}, 2}, // њ (U+045A)
  /* 0xFB */ {{0xD1, 0x9B}, 2}, // ћ (U+045B)
  /* 0xFC */ {{0xD1, 0x9C}, 2}, // ќ (U+045C)
  /* 0xFD */ {{0xC2, 0xA7}, 2}, // § (U+00A7)
  /* 0xFE */ {{0xD1, 0x9E}, 2}, // ў (U+045E)
  /* 0xFF */ {{0xD1, 0x9F}, 2}  // џ (U+045F)
};

#endif