# 6410-wm8960

1.1. the sound card canbe seen, hw-params with err;
1.2. Makefile in sound/soc/samsung add 2 line of 6410/8960;
1.3. arch/arm/mach-s3c64xx/mach-mini6410.c +391 : capless = 1;

2.1 revise i2s.c/h sysclk/clkdir/fmt to set the 6410-i2s register OK
2.2 revise machine driver hwparams to avoid crash
