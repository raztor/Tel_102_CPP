_if_ and _else_ are two of the most frequently used conditionals in C/C++, and they enable you to execute zero or one conditional statement among many such dependent conditional statements. We use them in the following ways:

1.  _if:_ This executes the body of bracketed code starting with if evaluates to _true_.

    ```
    if (condition) {
        statement1;
        ...
    }
    ```

2.  _if - else:_ This executes the body of bracketed code starting with if evaluates to _true_, or it executes the body of code starting with if evaluates to _false_. Note that only _one_ of the bracketed code sections will ever be executed.

    ```
    if (condition) {
        statement1;
        ...
    }
    else {
        statement2;
        ...
    }
    ```

3.  _if - else if - else:_ In this structure, dependent statements are chained together and the for each statement is only checked if all prior conditions in the chain evaluated to _false_. Once a evaluates to _true_, the bracketed code associated with that statement is executed and the program then skips to the end of the chain of statements and continues executing. If each in the chain evaluates to false, then the body of bracketed code in the _else_ block at the end is executed.

    ```
    if(first condition) {
        ...
    }
    else if(second condition) {
        ...
    }
    .
    .
    .
    else if((n-1)'th condition) {
        ....
    }
    else {
        ...
    }
    ```


___

Given a positive integer , do the following:

-   If , print the lowercase English word corresponding to the number (e.g., `one` for , `two` for , etc.).
-   If , print `Greater than 9`.

**Output Format**

If , then print the lowercase English word corresponding to the number (e.g., `one` for , `two` for , etc.); otherwise, print `Greater than 9`.

**Explanation 0**

`five` is the English word for the number .

**Explanation 1**

`eight` is the English word for the number .

**Explanation 2**

is greater than , so we print `Greater than 9`.

[Conditional Statements | HackerRank](https://www.hackerrank.com/challenges/c-tutorial-conditional-if-else/problem?isFullScreen=true)