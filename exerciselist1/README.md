Implement a basic registration system for gym students by creating a Student class.

a) The class must have private attributes corresponding to the student's height, weight, and name.

b) Implement a constructor that assigns values to the attributes. When no values are provided, default zero and null values should be assigned.

c) A method that returns the student's BMI (Body Mass Index): A person's BMI is the ratio of weight in kilograms to the square of the height in meters: BMI = weight_kg / (height_m * height_m) A student who is 1.80m tall and weighs 80kg should have a BMI of 24.6914.

d) The main function must create a student object with default values and then update the student’s data by asking the user to input the student’s height, weight, and full name. These values should be assigned to the attributes of the already instantiated object. It must also check whether the entered values are valid: weight and height must be numbers, and the name cannot be blank.

e) Finally, it must print the registered student's BMI to the screen in the following format: The Student [STUDENT'S FULL NAME VARIABLE] has a BMI = [CALCULATED BMI VALUE USING THE STUDENT'S HEIGHT AND WEIGHT]
