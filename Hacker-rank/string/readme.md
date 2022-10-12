C++ provides a nice alternative data type to manipulate strings, and the data type is conveniently called _string_. Some of its widely used features are the following:

-   _Declaration:_

    ```
    string a = "abc";
    ```

-   _Size:_

    ```
    int len = a.size();
    ```

-   _Concatenate two strings:_

    ```
    string a = "abc";
    string b = "def";
    string c = a + b; // c = "abcdef".
    ```

-   _Accessing element:_

    ```
    string s = "abc";
    char   c0 = s[0];   // c0 = 'a'
    char   c1 = s[1];   // c1 = 'b'
    char   c2 = s[2];   // c2 = 'c'
    
    s[0] = 'z';         // s = "zbc"
    ```


_P.S.:_ We will use _cin/cout_ to read/write a string.

**Input Format**

You are given two strings, and , separated by a new line. Each string will consist of lower case Latin characters ('a'-'z').

**Output Format**

In the first line print two space-separated integers, representing the length of and respectively.  
In the second line print the string produced by concatenating and ().  
In the third line print two strings separated by a space, and . and are the same as and , respectively, except that their first characters are swapped.

**Explanation**

-   _"abcd"_
-   _"ef"_

-   _"abcdef"_
-   _"ebcd"_
-   _"af"_