#define MAGS_2(CLASSNAME) CLASSNAME, CLASSNAME
#define MAGS_3(CLASSNAME) CLASSNAME, CLASSNAME, CLASSNAME
#define MAGS_4(CLASSNAME) CLASSNAME, CLASSNAME, CLASSNAME, CLASSNAME
#define MAGS_5(CLASSNAME) CLASSNAME, CLASSNAME, CLASSNAME, CLASSNAME, CLASSNAME
#define MAGS_6(CLASSNAME) CLASSNAME, CLASSNAME, CLASSNAME, CLASSNAME, CLASSNAME, CLASSNAME
#define MAGS_7(CLASSNAME) CLASSNAME, CLASSNAME, CLASSNAME, CLASSNAME, CLASSNAME, CLASSNAME, CLASSNAME
#define MAGS_8(CLASSNAME) CLASSNAME, CLASSNAME, CLASSNAME, CLASSNAME, CLASSNAME, CLASSNAME, CLASSNAME, CLASSNAME
#define MAGS_9(CLASSNAME) CLASSNAME, CLASSNAME, CLASSNAME, CLASSNAME, CLASSNAME, CLASSNAME, CLASSNAME, CLASSNAME, CLASSNAME
#define MAGS_10(CLASSNAME) CLASSNAME, CLASSNAME, CLASSNAME, CLASSNAME, CLASSNAME, CLASSNAME, CLASSNAME, CLASSNAME, CLASSNAME
#define MAGS_11(CLASSNAME) CLASSNAME, CLASSNAME, CLASSNAME, CLASSNAME, CLASSNAME, CLASSNAME, CLASSNAME, CLASSNAME, CLASSNAME, CLASSNAME
#define MAGS_12(CLASSNAME) CLASSNAME, CLASSNAME, CLASSNAME, CLASSNAME, CLASSNAME, CLASSNAME, CLASSNAME, CLASSNAME, CLASSNAME, CLASSNAME, CLASSNAME

#define mag_xx(a,b) class _xx_##a {magazine = a; count = b;}
#define weap_xx(a,b) class _xx_##a {weapon = a; count = b;}
#define item_xx(a,b) class _xx_##a {name = a; count = b;}