A template parameter pack is a template parameter that accepts zero or more template arguments (non-types, types, or templates). To read more about parameter pack, [click here](http://en.cppreference.com/w/cpp/language/parameter_pack).

Create a template function named _reversed\_binary\_value_. It must take an arbitrary number of _bool_ values as template parameters. These booleans represent binary digits in reverse order. Your function must return an integer corresponding to the binary value of the digits represented by the booleans. For example: _reversed\_binary\_value<0,0,1>()_ should return .

**Input Format**

The first line contains an integer, , the number of test cases. Each of the subsequent lines contains a test case. A test case is described as space-separated integers, and , respectively.

-   is the value to compare against.
-   represents the range to compare: to .

**Constraints**

-   The number of template parameters passed to _reversed\_binary\_value_ will be .

**Output Format**

Each line of output contains binary characters (i.e., 's and 's). Each character represents one value in the range. The _first_ character corresponds to the _first_ value in the range. The _last_ character corresponds to the _last_ value in the range. The character is if the value in the range matches ; otherwise, the character is .

**Sample Output**

```
0100000000000000000000000000000000000000000000000000000000000000
0000000000100000000000000000000000000000000000000000000000000000
```

**Explanation**

The second character on the first line is a , because the second value in the range is and is .

The eleventh character on the second line is a , because the eleventh value in the range is and is .

All other characters are zero, because the corresponding values in the range do not match .