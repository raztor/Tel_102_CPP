**Objective**  
In this challenge, we practice reading input from stdin and printing output to stdout.

___

In C++, you can read a single whitespace-separated token of input using [cin](http://www.cplusplus.com/cin), and print output to stdout using [cout](http://www.cplusplus.com/printf). For example, let's say we declare the following variables:

and we want to use _cin_ to read the input "High 5" from stdin. We can do this with the following code:

This reads the first word ("High") from stdin and saves it as string , then reads the second word ("") from stdin and saves it as integer . If we want to print these values to stdout, separated by a space, we write the following code:

```
cout << s << " " << n << endl;

```

This code prints the contents of string , a single space (), then the integer . We end our line of output with a newline using [endl](http://www.cplusplus.com/endl). This results in the following output:

```
High 5
```

**Task**  
Read numbers from stdin and print their sum to stdout.

[Input and Output | HackerRank](https://www.hackerrank.com/challenges/cpp-input-and-output/problem?isFullScreen=true)