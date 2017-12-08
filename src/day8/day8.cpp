#include "../../core/include/constdict.h"
#include "../../core/include/constpair.h"
#include "../../core/include/word.h"
#include <array>
#include <iostream>
#include <tuple>

using TestDict = ConstDict<Word, int, 3>;
constexpr auto TEST = std::array<const char*, 4>{"b inc 5 if a > 1", "a inc 1 if b < 5",
                                                 "c dec -10 if a >= 1", "c inc -20 if c == 10"};

using ActualDict = ConstDict<Word, int, 1000>;
constexpr auto ACTUAL = std::array<const char*, 1000>{

    "q inc -541 if c != 4",         "s inc -555 if o > -5",         "px dec -84 if x >= -4",
    "y dec -822 if txk > -1",       "wdc inc -731 if tup < -5",     "ug dec -943 if s != -551",
    "rz inc 468 if j > 1",          "rz dec 628 if j >= -3",        "zeq inc -801 if gr >= 7",
    "jb dec 592 if px > 80",        "q inc -151 if rz <= -628",     "l dec -423 if b <= 7",
    "vhu inc 904 if q >= -700",     "b dec 438 if kyh == 0",        "o inc 491 if vhu < 908",
    "l inc 761 if tup >= 8",        "kq inc -790 if kyh > -9",      "tup dec 171 if vhu != 909",
    "y dec 473 if px != 81",        "kq inc 689 if jb < -590",      "vhu inc -802 if o > 488",
    "jb inc 165 if l >= 418",       "kps inc 49 if s >= -564",      "kps dec 508 if ug == 943",
    "txk dec 352 if djl > -2",      "axi dec -4 if y <= 347",       "rz inc -40 if x <= -4",
    "xhe inc -538 if l < 428",      "l dec 396 if kq < -97",        "djl inc -462 if rz < -619",
    "xhe dec -173 if vhu > 98",     "ug dec 227 if jb < -417",      "x dec 754 if q == -692",
    "kps inc 671 if gr < 10",       "ug inc 722 if o > 490",        "o inc 743 if s == -562",
    "rz inc -427 if mp >= -2",      "s dec -630 if j < 0",          "vhu inc -413 if kyh > -8",
    "kyh dec -389 if djl != -458",  "wdc inc 593 if ug >= 1432",    "o inc 988 if kq != -101",
    "b inc -550 if c > -5",         "c inc -390 if q != -701",      "axi inc 450 if wdc <= 586",
    "xhe dec 840 if kyh > 385",     "mp inc -789 if vhu > -313",    "wdc dec -387 if j <= 1",
    "kps dec 625 if wdc != 980",    "q inc 40 if b <= -979",        "gr inc 164 if b > -982",
    "ug inc 124 if kyh == 389",     "rz inc -893 if axi != 8",      "b dec 428 if x <= -757",
    "vhu dec -205 if o != 500",     "ug inc -375 if q < -644",      "djl inc -954 if jb >= -434",
    "px inc 170 if kyh <= 396",     "jb dec -844 if mp > -796",     "px dec -473 if c != -390",
    "rz dec 480 if x > -759",       "kyh inc -698 if l <= 32",      "q dec -185 if x <= -753",
    "c dec -765 if kps > 210",      "mp dec 207 if l < 28",         "l inc -870 if kyh <= -309",
    "kyh inc -323 if s <= -559",    "x dec 805 if axi == 0",        "q inc 376 if kq == -101",
    "x inc 550 if s < -550",        "x dec 647 if kps == 212",      "zeq inc -839 if rz >= -2436",
    "djl dec -759 if l > -850",     "tup inc -551 if o > 481",      "vhu inc 12 if kq != -101",
    "kq dec -953 if px == 254",     "c inc 523 if djl >= -657",     "kyh dec -524 if c == 898",
    "tup dec 478 if px == 254",     "xhe inc 301 if q == -91",      "kyh dec -638 if y == 350",
    "l inc -412 if rz <= -2421",    "ug dec 548 if kps > 207",      "djl dec -830 if mp <= -997",
    "tup inc 367 if gr <= 0",       "ug dec 997 if tup < -824",     "mp dec -253 if txk >= -356",
    "kq inc 204 if jb >= 415",      "px inc 567 if jb < 410",       "kps dec 306 if txk == -353",
    "kps dec -171 if kyh > 222",    "djl inc -833 if xhe <= -902",  "kyh dec 648 if vhu >= -114",
    "djl inc -903 if kq < 1051",    "kps inc -940 if djl < -1489",  "y dec -408 if j <= -10",
    "mp dec -886 if o == 491",      "rz inc 571 if l >= -1246",     "s dec -178 if kq < 1062",
    "kq dec 718 if jb < 421",       "axi dec 587 if kps <= -721",   "jb inc -879 if j != 0",
    "tup dec 632 if zeq > -843",    "tup dec -673 if s != -378",    "kq dec -88 if vhu > -114",
    "jb dec 74 if o <= 492",        "ug inc -716 if s <= -387",     "rz inc 265 if zeq > -842",
    "axi inc -995 if l != -1246",   "px inc 481 if gr <= -1",       "x dec -811 if axi < -1590",
    "y inc 375 if s != -386",       "wdc dec -484 if tup < -790",   "c inc -335 if xhe == -908",
    "c inc -80 if px == 254",       "c inc 263 if kq == 426",       "gr inc 259 if kq > 429",
    "tup dec -749 if txk == -356",  "jb inc 399 if wdc >= 1455",    "mp inc -334 if axi <= -1577",
    "b inc 442 if zeq <= -836",     "px inc -890 if xhe >= -912",   "zeq inc -41 if o != 488",
    "ug dec 781 if x >= -1654",     "wdc dec 246 if px > -645",     "gr dec -707 if djl <= -1482",
    "wdc dec -90 if y <= 730",      "y inc 674 if o != 491",        "j dec -911 if vhu <= -102",
    "jb dec 575 if y == 724",       "rz dec -10 if c <= 1088",      "axi dec 272 if axi != -1586",
    "gr dec -678 if s != -377",     "kyh inc -768 if gr == 707",    "s inc 499 if mp > -195",
    "zeq inc 574 if wdc <= 1317",   "axi dec -339 if x != -1647",   "o dec -884 if xhe >= -905",
    "mp inc 718 if c >= 1073",      "l inc 101 if px == -636",      "djl dec -7 if y != 723",
    "wdc dec 997 if b != -537",     "gr dec -155 if jb >= 176",     "tup dec -403 if kyh < -1201",
    "kps dec -240 if djl <= -1480", "c dec -786 if mp > 525",       "px inc -452 if ug >= -365",
    "x inc -527 if vhu >= -113",    "zeq inc 524 if b != -552",     "djl inc -429 if mp != 528",
    "c dec -667 if o >= 1368",      "o inc 724 if x >= -2185",      "gr dec 568 if kyh < -1195",
    "axi inc -571 if j <= 904",     "px inc 423 if b >= -547",      "txk inc -561 if q <= -87",
    "tup dec 382 if kps < -487",    "gr dec 18 if px > -674",       "xhe dec -981 if y > 721",
    "tup dec -68 if txk > -908",    "q inc 583 if axi < -1508",     "gr dec -404 if s != 122",
    "ug inc 743 if c == 2534",      "xhe inc 985 if c <= 2537",     "axi dec -258 if b != -538",
    "o dec 994 if gr >= 113",       "vhu inc -278 if tup != -1181", "djl inc 489 if djl == -1912",
    "axi dec 580 if kps <= -490",   "ug dec -803 if xhe >= 1055",   "kps inc 156 if mp != 526",
    "zeq inc 214 if mp >= 518",     "vhu inc 830 if mp < 536",      "b dec 249 if b > -549",
    "o inc -626 if rz == -2153",    "jb dec -220 if x > -2193",     "djl dec -546 if j >= 902",
    "px dec 964 if px >= -669",     "tup dec -719 if kps > -326",   "gr inc -555 if s >= 132",
    "j dec -922 if o >= 485",       "j dec -112 if q != 482",       "tup inc -463 if s <= 118",
    "jb dec -195 if o >= 472",      "x dec -973 if gr == 121",      "x inc 253 if axi == -1247",
    "o inc 818 if wdc == 311",      "gr dec 687 if tup != -1171",   "s inc -869 if vhu <= 450",
    "vhu dec 288 if l < -1149",     "rz dec 703 if xhe != 1067",    "rz dec 700 if o >= 1293",
    "txk inc -983 if zeq >= 440",   "kq inc -364 if q != 492",      "kq inc 789 if x == -1201",
    "px dec 560 if x <= -1208",     "wdc inc 562 if s == -741",     "j inc -665 if kyh != -1198",
    "s inc 332 if kps >= -333",     "mp dec 411 if rz < -3552",     "axi dec 504 if wdc != 311",
    "kps dec 56 if ug > 1182",      "jb inc 497 if px > -2191",     "axi dec -364 if q < 501",
    "kq dec -308 if x < -1211",     "zeq dec 304 if q >= 489",      "kyh dec -957 if x >= -1211",
    "tup dec -670 if l > -1145",    "jb dec -166 if o <= 1297",     "l dec -900 if s <= -406",
    "txk inc 917 if px >= -2182",   "rz inc 426 if y == 724",       "kyh inc -993 if j > 353",
    "y dec -513 if kq != 425",      "zeq inc 329 if l >= -251",     "kps dec 460 if mp < 121",
    "wdc dec 492 if xhe != 1062",   "djl dec -945 if gr <= -560",   "px inc 368 if wdc == 311",
    "zeq inc 250 if y != 1247",     "wdc dec 182 if y < 1237",      "txk dec 577 if rz <= -3128",
    "b inc -252 if l < -247",       "j dec 173 if px == -1821",     "djl inc -858 if px == -1821",
    "mp dec 609 if wdc != 321",     "wdc inc -723 if kyh != -1230", "kyh dec -172 if kyh < -1229",
    "wdc dec -702 if ug < 1187",    "px inc -276 if jb <= 1245",    "l dec -208 if txk > -1483",
    "y dec 319 if kps < -850",      "kyh inc -597 if kps != -848",  "c dec 161 if tup == -1170",
    "kps inc 320 if o <= 1302",     "rz inc 972 if px == -2097",    "kyh dec 483 if rz >= -2165",
    "kps dec -845 if q <= 494",     "kyh dec 268 if o == 1301",     "jb dec 835 if ug >= 1192",
    "kq inc 93 if vhu != 158",      "vhu inc -693 if q != 490",     "x dec -75 if txk <= -1484",
    "jb dec 419 if jb >= 1243",     "b dec -84 if x >= -1137",      "xhe inc -156 if kq <= 424",
    "s dec 653 if o >= 1297",       "kyh inc 880 if c >= 2530",     "wdc inc 295 if xhe > 1061",
    "y dec 140 if xhe != 1062",     "txk dec 28 if wdc == -117",    "kps dec 640 if rz >= -2166",
    "x dec 369 if y > 1232",        "kps inc 232 if l >= -255",     "b dec 89 if gr < -566",
    "wdc inc -217 if b <= -954",    "vhu inc -29 if zeq <= 385",    "kyh inc 861 if zeq <= 370",
    "rz inc 425 if jb == 826",      "ug inc -857 if ug >= 1189",    "mp inc -418 if x != -1505",
    "jb dec -815 if kq == 426",     "ug inc -584 if xhe >= 1055",   "kyh dec 216 if y <= 1240",
    "txk inc 106 if s <= -1064",    "gr inc -775 if xhe > 1063",    "o inc 647 if l == -254",
    "djl inc -461 if kq == 426",    "s dec 962 if x >= -1512",      "s dec -721 if y < 1230",
    "rz dec 289 if vhu == -567",    "kq inc 651 if kq < 432",       "px inc 371 if vhu <= -564",
    "axi dec -325 if kq > 1071",    "b inc -971 if s != -2030",     "c dec -526 if zeq >= 380",
    "zeq dec 239 if jb <= 1643",    "kq inc -757 if kps != -87",    "q dec 436 if y < 1241",
    "kq dec -557 if kps < -81",     "s dec 115 if y >= 1236",       "s inc -134 if c < 2543",
    "q inc -304 if txk <= -1407",   "xhe dec 975 if rz == -1733",   "tup dec 814 if rz >= -1742",
    "l inc 969 if ug == 604",       "vhu dec 625 if wdc < -333",    "xhe inc -406 if zeq != 136",
    "xhe inc 448 if jb >= 1640",    "c dec -894 if q > -249",       "b dec -778 if axi == -568",
    "zeq inc 966 if o <= 1953",     "zeq dec 148 if wdc <= -334",   "mp inc 812 if zeq <= 958",
    "zeq inc -295 if kyh != -878",  "j dec -719 if axi >= -574",    "tup inc -59 if c > 3425",
    "txk inc 538 if jb == 1641",    "zeq dec 854 if jb <= 1644",    "mp dec 735 if o <= 1949",
    "axi dec 750 if c >= 3421",     "gr dec 633 if axi >= -1321",   "x dec 626 if mp >= -827",
    "xhe inc 138 if txk <= -872",   "axi inc -838 if txk < -866",   "px inc 571 if tup >= -2045",
    "jb dec 793 if px >= -1730",    "l inc -759 if zeq == -202",    "kyh inc -923 if kq <= 881",
    "tup dec 903 if b <= -181",     "o dec -958 if l != 707",       "xhe inc 814 if x == -1504",
    "o inc 454 if o != 2906",       "djl inc 469 if jb == 848",     "mp dec -114 if q != -240",
    "y dec -393 if djl < -776",     "ug inc -365 if mp > -713",     "tup dec -254 if gr == -1199",
    "rz dec 587 if gr > -1203",     "px dec -611 if b > -191",      "txk inc -488 if kyh <= -1800",
    "axi dec 834 if c <= 3437",     "tup inc -946 if gr <= -1199",  "x inc -225 if wdc < -342",
    "j inc 526 if s < -2273",       "ug dec -654 if c != 3427",     "mp dec -521 if s <= -2274",
    "vhu dec -319 if txk >= -1352", "c inc 615 if gr > -1203",      "vhu inc -464 if zeq == -192",
    "ug inc 469 if txk > -1367",    "l dec 541 if px >= -1106",     "s dec 632 if s <= -2282",
    "djl dec 289 if q <= -245",     "xhe dec -816 if b >= -189",    "kps dec -166 if rz != -2326",
    "txk inc -207 if txk == -1362", "o inc -566 if kq < 879",       "ug dec 662 if kyh == -1807",
    "s inc -147 if vhu != -1653",   "djl dec -675 if mp >= -200",   "c inc 734 if zeq < -191",
    "y dec 440 if x < -1503",       "tup dec 267 if zeq == -192",   "o dec 971 if tup == -3909",
    "c dec -880 if x > -1510",      "o dec 75 if s == -2279",       "jb dec 956 if c < 5659",
    "txk dec -95 if c > 5655",      "wdc inc -521 if jb > -113",    "djl dec -798 if xhe <= 1901",
    "vhu inc 711 if jb <= -104",    "jb dec -44 if tup < -3906",    "kyh inc 57 if wdc != -860",
    "jb dec -817 if xhe <= 1902",   "x inc 91 if rz <= -2313",      "txk dec -604 if kps != 69",
    "vhu inc -714 if xhe != 1894",  "txk inc 590 if rz <= -2318",   "tup dec -557 if vhu > -1649",
    "wdc inc 621 if c == 5657",     "q inc -39 if ug <= 1067",      "s inc 947 if jb > 752",
    "rz inc 974 if xhe != 1902",    "kq dec 787 if tup < -3913",    "px dec 41 if djl != 399",
    "q dec 618 if kyh >= -1758",    "kq inc -265 if xhe != 1906",   "kps dec 748 if zeq >= -188",
    "s dec 78 if q != -908",        "c inc 10 if px >= -1160",      "j inc 526 if djl < 411",
    "s dec -329 if vhu == -1653",   "l inc 922 if px < -1149",      "y dec 546 if o >= 1738",
    "tup dec 505 if rz >= -1347",   "zeq dec 983 if px < -1149",    "j inc -997 if txk < -275",
    "rz inc 216 if xhe >= 1890",    "jb inc -616 if vhu >= -1664",  "kps dec 357 if wdc == -234",
    "jb inc 241 if zeq >= -1184",   "djl dec -907 if kps < -285",   "xhe dec 699 if y < 650",
    "x inc 319 if tup <= -4415",    "l dec -715 if x != -1419",     "tup dec -13 if rz > -1133",
    "vhu dec -127 if mp > -209",    "kps inc 907 if mp < -196",     "kyh dec -953 if vhu >= -1530",
    "gr dec 47 if mp >= -196",      "wdc dec 462 if px != -1164",   "wdc dec 441 if zeq > -1184",
    "s dec 846 if ug > 1057",       "djl inc 418 if s >= -2260",    "tup inc -428 if ug == 1065",
    "djl inc -471 if ug >= 1065",   "x dec 580 if tup < -4825",     "o dec 825 if kps < 619",
    "s inc -901 if tup <= -4823",   "c dec -641 if xhe >= 1200",    "j inc -966 if gr > -1205",
    "px dec 141 if zeq < -1173",    "kyh inc -244 if gr < -1192",   "j inc 759 if zeq < -1166",
    "xhe dec -129 if axi >= -2999", "gr inc 567 if axi == -2990",   "x inc 856 if axi <= -2993",
    "kq dec -151 if djl < 351",     "kps dec -397 if q != -907",    "axi inc -714 if jb > 370",
    "y inc -630 if tup > -4834",    "o dec 610 if y <= 16",         "ug inc -172 if jb > 380",
    "gr dec -531 if s == -3157",    "s dec -860 if o > 1126",       "djl inc 584 if j >= 745",
    "tup inc 861 if c < 5677",      "axi inc 562 if px < -1290",    "axi inc 55 if txk > -271",
    "djl inc -747 if gr < -100",    "ug inc 601 if q > -896",       "x inc -77 if b < -175",
    "l dec 448 if txk > -289",      "gr inc 469 if axi <= -3135",   "jb inc -627 if q < -913",
    "s dec 830 if kps > 1020",      "l dec -386 if j <= 760",       "c dec -119 if axi != -3149",
    "djl inc 960 if x == -2070",    "kq dec 326 if mp != -197",     "s inc -453 if y == 17",
    "gr inc 386 if j == 752",       "q inc -147 if ug == 1065",     "s dec 657 if px <= -1303",
    "b dec 810 if c < 5781",        "b inc -918 if q < -1051",      "zeq inc 342 if px > -1300",
    "o inc 54 if kps >= 1018",      "j inc 239 if zeq <= -827",     "ug dec 428 if y < 23",
    "ug inc -433 if mp <= -203",    "jb inc -356 if txk <= -286",   "ug dec -760 if j <= 989",
    "djl inc -770 if axi >= -3142", "wdc inc -880 if wdc != -1140", "b dec -461 if o != 1184",
    "mp inc 319 if px >= -1301",    "txk dec -110 if o <= 1196",    "s dec -752 if wdc < -2007",
    "vhu dec 278 if zeq <= -825",   "px dec -505 if b == -642",     "ug dec -184 if kq > 430",
    "kyh dec 507 if kps <= 1024",   "l inc -115 if kq > 445",       "q inc -359 if s > -2375",
    "kq dec -35 if o >= 1193",      "l dec -610 if vhu <= -1810",   "xhe dec 124 if x <= -2064",
    "txk inc 167 if ug <= 828",     "y inc 684 if q > -1058",       "xhe dec 706 if c > 5777",
    "vhu inc -533 if rz > -1137",   "ug inc 140 if s >= -2379",     "kyh dec -93 if l <= 2294",
    "jb inc -112 if axi < -3139",   "ug dec 987 if x < -2060",      "zeq dec 828 if axi > -3146",
    "jb dec -573 if ug >= -31",     "gr inc -56 if o != 1190",      "txk dec 752 if xhe > 494",
    "c dec 616 if l != 2289",       "tup inc 474 if tup < -3961",   "l dec -950 if mp != 125",
    "zeq inc 516 if j == 991",      "l inc 313 if x >= -2071",      "rz inc 545 if djl > 370",
    "txk inc 268 if o <= 1190",     "kq dec -484 if vhu >= -2330",  "s dec 241 if kq > 442",
    "xhe inc -956 if kyh != -1456", "mp dec 315 if mp == 120",      "wdc dec 925 if vhu >= -2345",
    "y dec -789 if vhu < -2336",    "tup dec 281 if j != 990",      "s dec 899 if vhu == -2340",
    "c dec 308 if j < 999",         "l inc 982 if s == -3274",      "axi inc 374 if gr >= 692",
    "vhu dec 586 if kyh > -1465",   "mp dec 73 if xhe <= -457",     "o inc -210 if zeq >= -1154",
    "vhu inc -484 if txk == -487",  "rz inc -481 if gr >= 689",     "q inc 882 if djl < 379",
    "s inc -771 if xhe > -466",     "zeq inc 804 if c < 4871",      "djl inc -899 if kq <= 441",
    "axi inc -29 if ug == -26",     "jb inc -562 if txk != -495",   "j inc 921 if q <= -168",
    "s inc -148 if y != 1478",      "j inc -277 if xhe >= -468",    "txk dec 210 if jb != 277",
    "zeq dec -86 if vhu > -3419",   "ug inc -330 if x <= -2062",    "xhe dec -893 if c != 4859",
    "gr dec -290 if j == 1635",     "zeq dec -98 if b < -647",      "kps inc 954 if ug >= -357",
    "wdc dec -497 if o != 974",     "q dec -882 if o > 969",        "axi inc -65 if kq <= 446",
    "wdc inc -492 if wdc > -2455",  "vhu inc 704 if gr > 987",      "x dec 672 if j > 1626",
    "kyh inc -785 if jb == 268",    "ug dec 0 if djl < -514",       "jb inc -706 if txk >= -487",
    "mp inc -786 if y > 1485",      "px dec -734 if j == 1635",     "jb dec 43 if c <= 4869",
    "rz inc -239 if tup <= -3775",  "kyh dec -694 if djl != -531",  "l dec -520 if txk <= -483",
    "q dec 499 if jb > -474",       "l dec -452 if c > 4858",       "b dec -583 if axi > -2867",
    "txk inc 556 if s != -4193",    "j inc 590 if c == 4860",       "y dec -309 if q >= 204",
    "xhe inc 9 if s < -4197",       "xhe inc 92 if y == 1796",      "gr dec 184 if rz == -1304",
    "jb inc 213 if zeq != -251",    "xhe dec -784 if q < 217",      "q inc -117 if xhe <= 1312",
    "axi dec 140 if c <= 4870",     "gr inc 915 if ug <= -351",     "px dec -135 if djl > -523",
    "rz inc 475 if kyh <= -756",    "mp inc 216 if jb < -249",      "q dec 337 if wdc > -2938",
    "wdc inc 288 if kyh <= -757",   "jb inc -395 if ug == -356",    "c dec 747 if rz < -827",
    "jb inc 930 if px > -60",       "tup inc -581 if jb > 285",     "px inc 340 if djl < -525",
    "kps inc 973 if q < -243",      "vhu dec 753 if xhe <= 1313",   "o dec -284 if s >= -4199",
    "xhe dec 196 if q == -241",     "l inc 818 if x == -2742",      "txk inc 917 if rz != -837",
    "kps dec 247 if ug >= -361",    "zeq inc -944 if txk >= 431",   "axi dec 700 if j <= 1643",
    "x inc 958 if x >= -2751",      "axi dec 413 if tup >= -3782",  "y dec -569 if x == -1784",
    "mp inc 838 if q <= -237",      "jb inc -736 if wdc < -2645",   "q inc -755 if s <= -4189",
    "gr dec 489 if tup < -3774",    "s inc 185 if tup < -3783",     "y dec 708 if l != 6327",
    "kyh dec 738 if zeq < -253",    "wdc dec 483 if c != 4110",     "q inc -994 if txk < 421",
    "px dec 942 if tup >= -3779",   "s dec 740 if djl > -527",      "q dec 924 if y >= 1655",
    "vhu dec -383 if xhe == 1114",  "b dec -285 if kyh != -1499",   "zeq inc -594 if ug < -351",
    "mp dec 349 if kps < 1733",     "gr inc -329 if gr < 1416",     "ug inc -423 if l > 6323",
    "s inc 681 if jb > -470",       "o inc 802 if s <= -4258",      "kyh inc 979 if kps <= 1738",
    "kq dec -48 if mp < -348",      "kyh dec 602 if b <= -58",      "zeq dec -844 if wdc != -3141",
    "gr inc -725 if zeq < -4",      "px dec -295 if px >= -1005",   "kq inc -756 if s >= -4259",
    "jb inc 775 if tup >= -3777",   "axi inc 181 if zeq != -6",     "txk dec 397 if c <= 4123",
    "gr inc 518 if s >= -4246",     "rz dec 497 if c != 4107",      "l dec -579 if wdc == -3132",
    "zeq inc 56 if kq < -269",      "wdc dec -268 if l <= 6906",    "zeq dec 241 if c >= 4106",
    "djl dec 866 if j < 1629",      "txk dec 546 if vhu >= -3081",  "kyh inc -667 if xhe < 1122",
    "o dec 759 if o == 1262",       "vhu inc -288 if rz != -1324",  "rz inc 355 if djl < -521",
    "x inc 126 if rz == -972",      "djl dec 845 if l == 6904",     "vhu inc 551 if mp == -349",
    "o dec -327 if axi == -3934",   "s inc 121 if mp < -349",       "djl inc 87 if q == -1920",
    "zeq dec -157 if x != -1659",   "c dec -953 if j > 1635",       "ug inc -247 if mp >= -351",
    "q dec 408 if l < 6914",        "rz dec 610 if axi >= -3936",   "jb dec 90 if kq <= -270",
    "o dec -899 if ug > -1027",     "c dec 985 if j <= 1638",       "vhu dec 684 if c != 3130",
    "s dec -392 if axi == -3934",   "tup inc 528 if kps != 1724",   "kyh dec 200 if j != 1635",
    "gr dec -288 if wdc != -2865",  "j inc 253 if b > -64",         "c inc 102 if zeq < -26",
    "q dec 415 if q >= -2336",      "l dec -913 if tup >= -3251",   "c inc 678 if px <= -705",
    "b inc -887 if wdc != -2864",   "gr dec -710 if axi >= -3936",  "kyh inc -871 if q != -2749",
    "j inc 262 if l <= 7821",       "tup dec -906 if o <= 1736",    "j dec -191 if jb > 218",
    "mp dec 296 if tup >= -2342",   "j inc 582 if ug == -1026",     "y dec -480 if c == 3910",
    "tup inc 184 if mp < -635",     "rz inc 825 if tup != -2162",   "q inc 931 if tup != -2153",
    "b inc 223 if kyh <= -2657",    "xhe inc -399 if jb > 216",     "vhu dec -109 if kq > -276",
    "txk inc -925 if xhe != 714",   "l inc -221 if axi <= -3934",   "axi inc -226 if b != 160",
    "px inc 820 if vhu <= -2702",   "rz inc 638 if mp <= -636",     "axi inc -198 if x <= -1653",
    "y inc 259 if djl >= -1285",    "j inc -665 if zeq <= -41",     "axi dec 906 if y <= 2403",
    "axi inc -807 if px < 117",     "zeq inc 372 if o >= 1723",     "x inc -462 if s >= -3851",
    "rz inc -852 if gr < 1355",     "y inc 698 if l >= 7606",       "y inc -731 if o == 1729",
    "o inc 894 if l <= 7599",       "x inc -722 if xhe <= 719",     "kps inc -502 if b <= 165",
    "djl dec 847 if zeq <= 335",    "s dec -400 if l >= 7594",      "zeq dec 513 if ug >= -1021",
    "y inc 797 if wdc != -2864",    "b inc 332 if b >= 158",        "gr dec -59 if wdc <= -2860",
    "vhu inc -968 if zeq < 334",    "wdc dec 100 if wdc == -2864",  "s dec -862 if y <= 1672",
    "axi dec -319 if o >= 2632",    "j dec -294 if kyh > -2670",    "mp inc 342 if mp > -647",
    "ug inc 337 if mp < -311",      "kq dec 702 if tup > -2163",    "px inc -729 if px >= 119",
    "zeq dec 161 if xhe != 711",    "jb inc -745 if kyh <= -2654",  "txk inc 671 if djl < -1280",
    "y inc -974 if gr < 1425",      "vhu inc 929 if gr == 1417",    "djl inc -771 if vhu < -1765",
    "y dec 764 if vhu >= -1783",    "axi inc 913 if kq >= -969",    "y inc 428 if rz != -122",
    "j inc 44 if c > 3901",         "wdc inc -219 if kyh == -2660", "rz dec -713 if wdc <= -3178",
    "jb dec -510 if kyh == -2660",  "rz inc -835 if mp <= -306",    "xhe inc 461 if tup <= -2152",
    "c dec -986 if ug < -1017",     "wdc dec 838 if txk != -777",   "xhe dec -402 if zeq != 186",
    "x inc -791 if tup < -2155",    "o inc -453 if jb >= -12",      "ug dec -531 if s <= -2591",
    "s inc -552 if b > 500",        "vhu inc -780 if tup == -2157", "zeq inc -198 if l <= 7601",
    "ug dec 875 if vhu == -2555",   "y inc -896 if j == 3261",      "o dec -9 if kq >= -973",
    "ug inc 383 if c == 4896",      "y dec 592 if l < 7601",        "q dec -111 if px < 122",
    "l inc -845 if s < -2593",      "tup dec -602 if zeq >= -12",   "o dec -689 if ug > -997",
    "c dec -587 if ug < -984",      "c dec -376 if mp >= -305",     "px inc 159 if o > 2866",
    "txk dec -763 if rz < 597",     "rz inc -403 if ug <= -983",    "px dec 393 if l != 6759",
    "kq dec 65 if q >= -1707",      "q dec 363 if gr <= 1407",      "rz inc -205 if c >= 5856",
    "ug inc -810 if kyh < -2653",   "px inc -11 if jb >= -19",      "tup inc -997 if mp >= -297",
    "l inc 365 if kps <= 1219",     "c dec 568 if txk <= 0",        "x dec 704 if s != -2598",
    "gr inc 997 if gr != 1417",     "djl dec -200 if j <= 3270",    "vhu dec 534 if jb < -8",
    "px inc 726 if q == -1701",     "mp dec -952 if wdc < -4016",   "zeq dec 851 if axi < -6072",
    "rz dec -92 if djl <= -1849",   "wdc dec 115 if y == -1133",    "vhu dec -641 if mp < 652",
    "b inc -389 if y != -1126",     "kps dec -429 if vhu <= -2440", "rz dec 242 if l < 6758",
    "axi dec -745 if jb > -16",     "j inc 343 if gr > 1415",       "x dec -733 if ug <= -1795",
    "axi dec 6 if txk != -4",       "jb dec -438 if b == 107",      "axi inc -488 if q <= -1699",
    "kq inc -648 if j <= 3610",     "jb dec 270 if wdc != -4139",   "txk dec 356 if axi >= -5819",
    "txk dec -620 if b <= 111",     "l dec 394 if s == -2601",      "o inc 128 if x <= -2433",
    "ug dec -749 if rz > -174",     "zeq dec 374 if gr > 1410",     "kyh dec -901 if mp != 647",
    "b inc -161 if tup != -2157",   "txk inc -208 if o <= 3002",    "ug dec 940 if y != -1126",
    "kyh inc -956 if tup == -2157", "xhe dec 457 if b >= 101",      "mp inc -966 if c > 5290",
    "px inc -408 if djl <= -1844",  "kps dec -599 if kq > -1683",   "jb dec 798 if gr <= 1426",
    "wdc inc -749 if kq < -1685",   "tup inc 254 if txk != 51",     "b dec 841 if jb < -631",
    "o dec 961 if l > 6758",        "wdc dec -597 if kq <= -1677",  "px dec -414 if l < 6757",
    "kps inc 373 if px < 610",      "xhe dec 887 if ug >= -1992",   "kyh inc -715 if kyh > -2712",
    "l dec -919 if rz <= -164",     "xhe dec -127 if l <= 7675",    "x dec 483 if b <= -727",
    "jb inc 659 if ug >= -1997",    "tup dec -278 if jb > 17",      "jb dec 295 if c >= 5299",
    "kq dec 624 if q >= -1703",     "xhe dec -771 if vhu != -2455", "c inc 809 if kyh > -2716",
    "djl inc 533 if mp < -307",     "xhe inc -291 if q == -1701",   "kyh inc -677 if x > -2928",
    "b inc 828 if txk <= 54",       "s dec -989 if x > -2929",      "txk dec -303 if x != -2930",
    "rz dec 462 if jb < 25",        "tup dec 378 if mp < -308",     "y dec -173 if xhe == 841",
    "tup inc -808 if l >= 7669",    "s inc -185 if txk >= 347",     "s dec -782 if txk < 361",
    "axi inc 551 if xhe >= 834",    "kq dec -155 if tup > -2814",   "rz inc -169 if gr >= 1422",
    "mp dec -938 if y == -960",     "vhu dec 779 if zeq != -394",   "rz dec -788 if zeq != -389",
    "djl dec 936 if kq != -2164",   "x inc -767 if c != 6096",      "xhe inc 425 if kyh <= -3394",
    "kq dec 653 if rz == 162",      "ug dec -256 if kyh >= -3399",  "djl dec 160 if kyh == -3392",
    "tup inc -748 if q != -1711",   "kq dec -338 if axi < -5254",   "o inc 223 if ug < -1723",
    "c dec -66 if q < -1699",       "gr inc -340 if tup <= -3550",  "txk inc 471 if s == -1012",
    "wdc dec 105 if y != -951",     "gr dec -866 if tup < -3566",   "kps dec 5 if wdc <= -4392",
    "wdc dec -614 if wdc != -4390", "l inc 511 if tup <= -3555",    "y dec 479 if ug != -1732",
    "txk dec 712 if y != -960",     "b dec -508 if wdc < -3776",    "ug dec -573 if b != 609",
    "vhu inc -954 if kps > 2022",   "gr dec -964 if djl >= -2412",  "txk inc 533 if px != 595",
    "x inc 538 if gr < 1084",       "j inc -31 if b != 602",        "rz inc -934 if b != 600",
    "j dec 566 if wdc != -3788",    "l dec 756 if l != 8189",       "q inc -567 if zeq < -384",
    "rz inc -745 if wdc > -3788",   "px dec 453 if tup > -3558",    "ug inc -665 if l >= 7425",
    "tup inc 798 if ug != -1816",   "ug inc 709 if jb == 23",       "txk dec -173 if ug > -1822",
    "ug inc 501 if xhe < 850",      "gr inc 90 if o != 3219",       "tup inc -919 if kq <= -2461",
    "axi dec -83 if xhe == 841",    "y dec 200 if wdc >= -3779",    "wdc dec 424 if o != 3226",
    "zeq dec 253 if kq > -2473",    "rz dec -281 if mp <= 629",     "tup inc 760 if kps != 2031",
    "mp dec -248 if y >= -1161",    "s dec 902 if djl <= -2408",    "mp dec -498 if txk < 1359",
    "mp inc 996 if kyh == -3394",   "jb inc 492 if px <= 604",      "px dec 701 if mp >= 863",
    "s dec -957 if tup < -2912",    "gr inc 214 if tup == -2920",   "o inc -730 if jb > 508",
    "rz dec -646 if jb <= 513",     "x dec -2 if x == -3150",       "b inc -938 if l != 7420",
    "x inc -268 if j != 3048",      "kq inc -589 if ug > -1317",    "xhe inc 83 if kps <= 2027",
    "mp dec -962 if kyh <= -3383",  "j inc 977 if djl == -2415",    "axi dec 169 if mp <= 1831",
    "px dec -774 if px != -92",     "kps dec 279 if px < 678",      "j inc -731 if o <= 2489",
    "x inc -58 if c > 6167",        "gr inc 610 if vhu <= -3398",   "vhu inc 209 if kq > -2467",
    "txk inc 11 if jb == 511",      "rz dec 341 if zeq >= -639",    "djl dec 297 if q > -2263",
    "xhe dec -357 if o < 2496",     "kyh dec -579 if b >= -330",    "kps inc 186 if l < 7426",
    "kyh dec -25 if y == -1160",    "djl inc 996 if djl >= -2416",  "mp inc 773 if zeq < -637",
    "xhe inc 759 if tup > -2929",   "s inc -122 if axi == -5349",   "vhu dec -603 if l == 7425",
    "gr dec 741 if tup <= -2919",   "djl dec -996 if mp < 2608",    "kps dec -645 if vhu < -2793",
    "px dec -25 if djl < -416",     "px dec -624 if djl > -429",    "px dec -380 if kq > -2480",
    "mp dec -526 if xhe != 2031",   "q dec -358 if zeq <= -639",    "rz inc 218 if jb > 507",
    "q inc -54 if x >= -3420",      "mp dec 140 if kps < 2581",     "vhu inc 234 if vhu == -2799",
    "q dec -428 if b == -336",      "mp dec 825 if wdc > -4209",    "px dec 22 if x != -3416",
    "j dec -952 if axi > -5352",    "y inc -551 if y > -1167",      "djl inc -832 if txk >= 1364",
    "vhu inc -318 if px >= 1701",   "o dec 783 if txk <= 1376",     "o inc -479 if txk >= 1365",
    "j dec -924 if px > 1700",      "ug dec -230 if ug == -1323",   "q inc -572 if o > 1231",
    "xhe inc 266 if ug <= -1099",   "y inc 810 if xhe >= 2035",     "j inc 599 if tup == -2920",
    "xhe dec -795 if o <= 1232",    "b inc -972 if vhu <= -2884",   "q dec 715 if s != -1079",
    "vhu inc -143 if y <= -902",    "wdc inc -704 if kq >= -2477",  "wdc inc 718 if rz >= -372",
    "jb dec -224 if vhu != -2889",  "kps inc -197 if ug <= -1092",  "x inc -81 if x == -3416",
    "xhe dec 492 if tup < -2917",   "px inc -853 if kq != -2470",   "djl inc 881 if kq < -2462",
    "q inc 306 if j < 5768",        "mp inc 618 if b <= -332",      "s inc 651 if vhu >= -2889",
    "x dec 852 if ug == -1092",     "x inc -61 if ug >= -1088",     "tup inc -674 if mp > 2775",
    "j dec 656 if y < -892",        "kps inc 314 if djl < -364",    "txk inc -344 if x >= -3498",
    "c dec -768 if ug >= -1101",    "mp dec -693 if axi != -5349",  "zeq inc 495 if axi <= -5347",
    "b inc -944 if b <= -330",      "x inc 790 if mp == 2783",      "djl inc -776 if y > -911",
    "txk inc 156 if wdc == -4189",  "x dec 929 if c < 6942",        "q dec -922 if j >= 5103",
    "x dec 254 if ug <= -1089",     "mp inc 781 if px >= 1697",     "kps dec 639 if djl != -1141",
    "j dec -543 if rz == -372",     "jb dec -961 if y <= -892",     "djl inc 430 if o == 1237",
    "q dec -64 if o == 1227",       "txk dec -438 if px >= 1702",   "wdc inc -117 if x > -3894",
    "px dec -660 if b >= -1287",    "tup inc 18 if o <= 1230",      "jb inc 27 if vhu != -2883",
    "vhu inc 554 if x != -3890",    "s inc -344 if xhe == 2343",    "px dec 208 if axi < -5347",
    "px inc -859 if o <= 1233",     "rz inc 717 if q > -242",       "x dec 315 if y != -910",
    "vhu inc 846 if s == -779",     "zeq dec -557 if x == -4205",   "xhe inc -897 if txk < 1621",
    "y inc -130 if kq <= -2464",    "c dec 430 if djl == -1150",    "b dec -73 if kyh < -3363",
    "o inc -337 if kyh == -3367",   "xhe inc 924 if l < 7417",      "tup dec -126 if x == -4205",
    "j dec -967 if kps == 2054",    "zeq inc -908 if mp == 3559",   "j inc -501 if txk != 1619",
    "djl inc -810 if y >= -1033",   "y dec 525 if djl <= -1960",    "l inc 389 if x <= -4199",
    "gr inc 111 if jb > 1692",      "x inc -206 if b > -1200",      "o inc -928 if s <= -765",
    "l dec -372 if txk > 1612",     "jb inc -937 if kq == -2470",   "kq dec -296 if gr < 1276",
    "j dec -643 if rz > -378",      "kps dec 412 if zeq >= 399",    "o inc -224 if kq < -2172",
    "y inc -572 if jb == 759",      "l inc -663 if j < 6760",       "xhe inc -284 if l <= 7531",
    "kps dec 209 if y <= -2119",    "tup inc 216 if mp != 3574",    "px dec -421 if ug >= -1101",
    "wdc inc 854 if ug != -1095",   "djl inc -860 if wdc > -3453",  "j dec -541 if ug < -1087",
    "b dec -27 if q != -234",       "kyh inc -345 if y == -2128",   "o inc -84 if xhe > 1163",
    "b inc -512 if s > -782",       "ug dec -772 if l >= 7516",     "wdc inc -718 if wdc >= -3453",
    "tup inc 48 if rz == -375",     "c inc 372 if kyh <= -3703",    "tup dec 753 if b <= -1683",
    "l inc -573 if kps <= 1434",    "kq inc -589 if axi == -5349",  "q dec -905 if x >= -4213",
    "jb inc 716 if y >= -2137",     "q dec -864 if gr <= 1278",     "axi dec -402 if ug != -322",
    "px dec -442 if j <= 7300"};

struct Instruction
{
    constexpr Instruction() : target(), amount() {}
    constexpr Instruction(Word const& target, int amount) : target(target), amount(amount) {}

    Word target;
    int amount;
};

template <typename Dict>
constexpr auto actionable =
    [](const auto& registers, size_t size, auto key, auto action, int amount) {
        if (action == Word(">", ">" + 1))
        {
            return Dict::getValue(registers, size, key, 0) > amount;
        }
        if (action == Word("<", "<" + 1))
        {
            return Dict::getValue(registers, size, key, 0) < amount;
        }
        if (action == Word(">=", ">=" + 2))
        {
            return Dict::getValue(registers, size, key, 0) >= amount;
        }
        if (action == Word("<=", "<=" + 2))
        {
            return Dict::getValue(registers, size, key, 0) <= amount;
        }
        if (action == Word("==", "==" + 2))
        {
            return Dict::getValue(registers, size, key, 0) == amount;
        }
        if (action == Word("!=", "!=" + 2))
        {
            return Dict::getValue(registers, size, key, 0) != amount;
        }
        return false;
    };

template <typename Dict>
constexpr auto tokenize = [](const auto& line, auto const& registers, size_t size) {
    auto tokens = Word::split<10>(line);
    auto& words = tokens.first;
    Instruction result(words[0], words[2].toInt());
    if (words[1] == Word("dec", "dec" + 3))
    {
        result.amount *= -1;
    }
    auto execute = actionable<Dict>(registers, size, words[4], words[5], words[6].toInt());
    return ConstPair<bool, Instruction>(execute, result);
};

template <typename Dict>
constexpr auto max = [](auto const& registers, size_t size) {
    auto result = registers[0].second;
    for (int i = 1; i < size; ++i)
    {
        if (registers[i].second > result)
        {
            result = registers[i].second;
        }
    }

    return result;
};

template <typename Dict>
constexpr auto solve = [](const auto& input) {
    auto registers = Dict::create();
    size_t size = 0;
    int max = 0;
    for (auto& line : input)
    {
        auto token = tokenize<Dict>(line, registers, size);
        if (token.first)
        {
            auto& instruction = token.second;
            auto find = Dict::find(registers, size, instruction.target);
            auto amount = find.second.second;
            if (!find.first)
            {
                registers = Dict::add(registers, size, instruction.target, 0).first;
                size++;
                amount = 0;
            }
            amount += instruction.amount;
            // Part 2
            if (amount > max)
            {
                max = amount;
            }
            registers = Dict::mutate(registers, size, instruction.target, amount).first;
        }
    }
    return std::make_tuple(::max<Dict>(registers, size), max);
};

int main(int argc, char const* argv[])
{
    auto testResult = solve<TestDict>(TEST);
    std::cout << "Test result 1: " << std::get<0>(testResult) << std::endl;
    std::cout << "Test result 2: " << std::get<1>(testResult) << std::endl;
    constexpr auto result = solve<ActualDict>(ACTUAL);
    std::cout << "Actual result 1: " << std::get<0>(result) << std::endl; // Expected: 7296
    std::cout << "Actual result 2: " << std::get<1>(result) << std::endl; // Expected: 8186
    return 0;
}
