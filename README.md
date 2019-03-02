# 6410-wm8960

1. the sound card canbe seen, hw-params with err;
2. Makefile in sound/soc/samsung add 2 line of 6410/8960;
3. arch/arm/mach-s3c64xx/mach-mini6410.c +391 : capless = 1;

1. revise i2s.c/h sysclk/clkdir/fmt to set the 6410-i2s register OK
2. revise machine driver hwparams to avoid crash
3. can play with following hand set before play
amixer cset numid=5 80
amixer cset numid=38 on
amixer cset numid=35 on

1. update orignal wm8960 mistakes, record not OK
