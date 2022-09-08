Some _C++_ data types, their format specifiers, and their most common bit widths are as follows:

-   _Int ("%d"):_ 32 Bit integer
-   _Long ("%ld"):_ 64 bit integer
-   _Char ("%c"):_ Character type
-   _Float ("%f"):_ 32 bit real value
-   _Double ("%lf"):_ 64 bit real value

___

**Reading**  
To read a data type, use the following syntax:

```
scanf("`format_specifier`", &val)
```

For example, to read a _character_ followed by a _double_:

```
char ch;
double d;
scanf("%c %lf", &ch, &d);
```

For the moment, we can ignore the spacing between format specifiers.

___

**Printing**  
To print a data type, use the following syntax:

```
printf("`format_specifier`", val)
```

For example, to print a _character_ followed by a _double_:

```
char ch = 'd';
double d = 234.432;
printf("%c %lf", ch, d);
```

**Note:** You can also use _cin_ and _cout_ instead of _scanf_ and _printf_; however, if you are taking a million numbers as input and printing a million lines, it is faster to use _scanf_ and _printf_.

[Basic Data Types | HackerRank](https://www.hackerrank.com/challenges/c-tutorial-basic-data-types/problem)