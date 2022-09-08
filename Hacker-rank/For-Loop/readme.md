A _for_ loop is a programming language statement which allows code to be repeatedly executed.

The syntax is

```
for ( <expression_1> ; <expression_2> ; <expression_3> )
    <statement>
```

-   _expression\_1_ is used for intializing variables which are generally used for controlling the terminating flag for the loop.
-   _expression\_2_ is used to check for the terminating condition. If this evaluates to false, then the loop is terminated.
-   _expression\_3_ is generally used to update the flags/variables.

A sample loop is

```
for(int i = 0; i < 10; i++) {
    ...
}
```

In this challenge, you will use a for loop to increment a variable through a range.

**Input Format**

You will be given two positive integers, and (), separated by a newline.

**Output Format**

For each integer in the inclusive interval :

-   If , then print the English representation of it in lowercase. That is "one" for , "two" for , and so on.
-   Else if and it is an even number, then print "even".
-   Else if and it is an odd number, then print "odd".

**Note:**

Test against custom input

[For Loop | HackerRank](https://www.hackerrank.com/challenges/c-tutorial-for-loop/problem?isFullScreen=true)