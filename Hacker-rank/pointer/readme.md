A [pointer](http://en.wikipedia.org/wiki/Pointer_%28computer_programming%29) in C++ is used to share a memory address among different contexts (primarily functions). They are used whenever a function needs to modify the content of a variable, but it does not have ownership.

In order to access the memory address of a variable, , prepend it with sign. For example, `&val` returns the memory address of .

This memory address is assigned to a pointer and can be shared among functions. For example, assigns the memory address of to pointer . To access the content of the memory pointed to, prepend the variable name with a `*`. For example, `*p` will return the value stored in and any modification to it will be performed on .

```
void increment(int *v) {
    (*v)++;
}

int main() {
    int a;
    scanf("%d", &a);
    increment(&a);
    printf("%d", a);
    return 0;
}  
```

**Function Description**

Complete the _update_ function in the editor below.

_update_ has the following parameters:

-   _int \*a:_ an integer
-   _int \*b:_ an integer

**Returns**

-   The function is declared with a `void` return type, so there is no value to return. Modify the values in memory so that contains their sum and contains their absoluted difference.