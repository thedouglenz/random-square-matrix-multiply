# random-square-matrix-multiply

In this project, I have written the same program in various different languages. So far, the languages used are C, JavaScript, Python and PHP. The programs should do the exact same thing. I have chosen **dot product of two very large square matrices** as the task. The programs should then be run with the `time ` linux shell program to time their execution. Then a comparison can be made about which language performs faster.

### The program works like this:

1. Generate two square matrices, *a* and *b*, of *SIZE_XY* x *SIZE_XY*
2. Fill *a* and *b* with random integers between *MIN_VAL* and *MAX_VAL*
3. Do a dot product of *a* and *b* and store it in *c*

### Goal

I want to be able to time the execution of each program when the parameters, *SIZE_XY*, *MIN_VAL*, *MAX_VAL*, are the same. When *SIZE_XY* is relatively high, (1000+), the program can take several minutes to complete.

### How to run the programs
Javascript

`time node heavy.js`

PHP

`time php -f heavy.php`

Python

`time python heavy.py`

C

`gcc -o heavy heavy.c`

`time ./heavy`
