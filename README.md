# C++ Studies

## Introduction
This repository exists just to keep me motivated through my studies in the world of C++ Language. When I had the discipline of Applied Programmation at 6th Semester, wasn't sufficient to me just do a script, compile, execute and delete after that.

This work contains all exercise lists of that discipline. Hope you like it!

## First steps to program in C++

First of all you need to download and install an IDE. I recommend Visual Studio, but it has a lot of IDEs in the world at all...

After, to compile a code, you must install a compiler (I use GCC).

For each one of these steps, google it.

---

## Important Libraries
### The library ```<iostream>```

I think this is the most important library in C++, is this library who permit funcionalities for input and output operations using streams.

With std::cin you can read a data from the user and with std::cout its possible to display data. Others objets are cerr, clog, etc...

### The library ```<string>```

## Oriented Object Programming (OOP) 

## Effectively Programming 
<details>
  <summary> Exercise 1 (Gym Student System with BMI) </summary>
  
Implement a basic registration system for gym students by creating a Student class.

a) The class must have private attributes corresponding to the student's **height**, **weight**, and **name**.

b) Implement a constructor that assigns values to the attributes. When no values are provided, default zero and null values should be assigned.

c) A method that returns the student's BMI (Body Mass Index): A person's BMI is the ratio of weight in kilograms to the square of the height in meters: BMI = weight_kg / (height_m * height_m) A student who is 1.80m tall and weighs 80kg should have a BMI of 24.6914.

d) The main function should instantiate a student with default values and then update the data of the created student. It should prompt the user for the values for the student's height, weight, and full name, assigning these values to the attributes of the existing object instance. It must check if the entered values are valid: weight and height must be numbers, and the name cannot be blank.

e) Finally, it must print the registered student's BMI to the screen in the following format: The Student [STUDENT'S FULL NAME VARIABLE] has a BMI = [CALCULATED BMI VALUE USING THE STUDENT'S HEIGHT AND WEIGHT]
</details>
