Design a class named _Box_ whose dimensions are integers and private to the class. The dimensions are labelled: length , breadth , and height .

The default constructor of the class should initialize , , and to .

The parameterized constructor _Box(int length, int breadth, int height)_ should initialize _Box_'s and to length, breadth and height.

The copy constructor _Box__Box_ ) should set and to 's and , respectively.

Apart from the above, the class should have functions:

-   _int getLength()_ - Return box's length
-   _int getBreadth()_ - Return box's breadth
-   _int getHeight()_ - Return box's height
-   _long long CalculateVolume()_ - Return the volume of the box

Overload the operator for the class _Box_. _Box_ _Box_ if:

1.  <
2.  < and \==
3.  < and \== and \==

Overload operator for the class _Box()_.  
If is an object of class _Box_:

should print , and on a single line separated by spaces.

For example,

```
Box b1; // Should set b1.l = b1.b = b1.h = 0;
Box b2(2, 3, 4); // Should set b1.l = 2, b1.b = 3, b1.h = 4;
b2.getLength();// Should return 2
b2.getBreadth(); // Should return 3
b2.getheight();// Should return 4
b2.CalculateVolume(); // Should return 24
bool x = (b1 < b2);// Should return true based on the conditions given
cout<<b2; // Should print 2 3 4 in order.

```