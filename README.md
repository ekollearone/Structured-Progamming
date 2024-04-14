#structured_programming_basics/magic number.c
The program consists of two main functions: isMagicNumber() and main().

isMagicNumber(int num): This function takes an integer as input and returns 1 if the sum of its digits is 1, indicating that it's a magic number. Otherwise, it returns 0.

main(): This is the entry point of the program. It prompts the user to enter a 3-digit number, reads the input, and checks if it's a valid 3-digit number. If the number is valid, it calls the isMagicNumber() function to determine if it's a magic number or not, and prints the result accordingly.

Usage
Compile the program using a C compiler. For example, using gcc:

Copy code
gcc magic_number.c -o magic_number
Run the compiled program:

bash
Copy code
./magic_number
Enter a 3-digit number when prompted.

Example
less
Copy code
Enter a 3-digit number: 123
123 is not a magic number.
less
Copy code
Enter a 3-digit number: 19
19 is a magic number.
Note
The program only accepts 3-digit numbers. If the user enters a number that is not a 3-digit number, it will prompt to enter a valid 3-digit number.
Feel free to customize and expand upon this README as needed!
By sending a message, you agree to our Terms. Read our Privacy Policy. Don't share sensiti



#structured_programming_basics/power.c
The program consists of two main components: the power() function and the main() function.

power(double x, int y): This function takes a base x (double) and an exponent y (integer) as input and returns x raised to the power of y. If y is negative, the function returns -1 indicating an error.

main(): This is the entry point of the program. It prompts the user to enter the value of x and y, reads the input, and calculates x raised to the power of y using the power() function. If y is negative, it prints an error message; otherwise, it prints the result.

Usage
Compile the program using a C compiler. For example, using gcc:

Copy code
gcc power_calculator.c -o power_calculator
Run the compiled program:

bash
Copy code
./power_calculator
Enter the value of x and y when prompted.

Example
mathematica
Copy code
Enter the value of x: 2.5
Enter the value of y: 3
2.50 raised to the power of 3 is 15.63
yaml
Copy code
Enter the value of x: 4
Enter the value of y: -2
Invalid input: y should be greater than or equal to 0.




#structured_programing_basics/pyramid.c
The program consists of a single main() function.

main(): This is the entry point of the program. It prompts the user to enter the number of rows for the pyramid pattern. It then iterates through each row, printing spaces followed by numbers according to the pattern described above.
Usage
Compile the program using a C compiler. For example, using gcc:

Copy code
gcc pyramid_pattern.c -o pyramid_pattern
Run the compiled program:

bash
Copy code
./pyramid_pattern
Enter the number of rows for the pattern when prompted.

Example
markdown
Copy code
Enter the number of rows: 5
        1
      2 3 2
    3 4 5 4 3
  4 5 6 7 6 5 4
5 6 7 8 9 8 7 6 5




#structured_programming_basics\star.c
The program consists of a single main() function.

main(): This is the entry point of the program. It prompts the user to enter the number of rows for the pyramid pattern. It then iterates through each row, printing spaces and asterisks accordingly to form the pyramid shape.
Usage
Compile the program using a C compiler. For example, using gcc:

Copy code
gcc pyramid_star_pattern.c -o pyramid_star_pattern
Run the compiled program:

bash
Copy code
./pyramid_star_pattern
Enter the number of rows for the pattern when prompted. 
Note
The number of rows entered by the user should be a positive integer.




#structured_programming_basics\time_table.c
The program consists of a single main() function.

main(): This is the entry point of the program. It prompts the user to enter an integer. It then iterates from 1 to 10 and prints each multiplication operation in the format: <number> * <i> = <result>.
Usage
Compile the program using a C compiler. For example, using gcc:

Copy code
gcc multiplication_table.c -o multiplication_table
Run the compiled program:

bash
Copy code
./multiplication_table
Enter the integer for which you want to generate the multiplication table when prompted
