# CP1-ACSL-4
ACSL 4 for CP1.  Written in C++.
The Task:

A series of numbers are inputted into the program and then referenced against a set of data values.  If the value can be subtracted from the number without a negative value resulting, a one is added on to a value, if the number isn't, then a 0 is added. A binary value is then returned with the qualifying numbers you get:
```c++
  Sample reference values: 8, 4, 2, 1
  Sample input: 8
  Binary: 1000
```
Since 8 can be subtracted from the eight without a negative returning, the first binary literal is 1, but since you cant subtract 4, 2, or 1 from 0 without getting a negative, the other three binary values are 0's.  The program also takes in multiple values seperated by commas, whose binaries are then crossed referenced to see if any of them match. Those that match are then passed down to the final binary, while an X is left in the place of the non-matching:
```c++
  Sample input : 8, 4
  Sample binanries: 1000, 0100
  Sample final binary: xx00
```
Since the first value of first binary was 1 and the second value being 0 and for the second binary the first value being 0 and the second value being 1, they do not match so 2 x's are in their place, while the matching 0's are brought down.

The last step is to then get letters based on the binary.  Since the binary is 4 values long, there are 4 letters, A-D.  If an x is in a binary, the letter isn't added. If 1 is at the position, an uppercase letter is formed, but if it is a 0, a lowercase letter is passed.  So if we talk the binary from the last activity and then get the letters formed:
```c++
  Sample binary: xx00
  Sample lettering: cd
```
Since the first two values are x's, no letters added.  Since the last two are zeroes, the final two letters are lower case.
