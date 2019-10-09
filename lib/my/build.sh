gcc -c *.c
ar -rs libmy.a *.o
ranlib libmy.a
ar -t libmy.a
