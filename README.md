# Basic Calculator in C

A simple command-line calculator built using the C programming language. This project performs basic arithmetic operations on two numbers entered by the user.

## 📌 Overview

The Basic Calculator is a beginner-friendly C programming project that demonstrates fundamental programming concepts, including user input, arithmetic operations, switch statements, and basic error handling.

The program prompts the user to enter two numbers and an arithmetic operator, then calculates and displays the result.

## ✨ Features

➕ Addition: Adds two numbers.

➖ Subtraction: Subtracts the second number from the first.

✖️ Multiplication: Multiplies two numbers.

➗ Division: Divides the first number by the second.

⚠️ Division-by-zero check: Displays an error message when the divisor is zero.

🔢 Decimal support: Uses the double data type for numeric calculations.

❌ Operator validation: Detects unsupported arithmetic operators.

## 🛠️ Technologies Used

Language: C

Standard libraries:

stdio.h — Handles input and output.

stdlib.h — Provides general-purpose functions, including system().

## 📂 Project Structure

Basic-Calculator-C-program/

│

├── Calc.c

└── README.md

## ⚙️ Getting Started

Prerequisites

Before running the program, ensure that you have:

A C compiler, such as GCC.

A terminal or command prompt.

Git installed to clone the repository.

1. Clone the Repository

   Open your terminal and run:

   `git clone https://github.com/BJomo001/Basic-Calculator-C-program.git`
    
2. Navigate to the Project Directory

   `cd Basic-Calculator-C-program`

3. Compile the Program

   Compile the source file using GCC:

   `gcc Calc.c -o calculator`

4. Run the Program

   Windows:

   `calculator.exe`


   Linux/macOS:

   `./calculator`


Note: The source code uses system("pause"), which is intended for Windows. Remove that line if you want the program to run portably on Linux or macOS.

## ▶️ Usage

When you run the program, follow the prompts:

Enter the first number.

Enter an operator: +, -, *, or /.

Enter the second number.

View the calculation result.

### Example Output

Please enter the first number:

10

Please enter the operator (+, -, *, or /):

 + (Addition)

Please enter the second number:

5

✔ result: 15.00

### Supported Operations

Operation	Example	Result

Addition	10 + 5 =	15.00

Subtraction	10 - 5 =	5.00

Multiplication	10 * 5 =	50.00

Division	10 / 5 =	2.00

## ⚠️ Error Handling

The program checks for division by zero and unsupported operators.

Division by zero:

✔ Error! the divisor can`t be zero.

Invalid operator:

✔ Invalid operator

## 🎯 Learning Objectives

This project helps beginners practice:

✔ Declaring variables and using data types.

✔ Reading input with scanf().

✔ Displaying output with printf().

✔ Using arithmetic operators.

✔ Implementing switch statements and if-else conditions.

✔ Compiling and executing a C program.

✔ Handling basic calculation errors.

## 🔮 Future Improvements

Potential improvements include:

✔ Validating numeric input.

✔ Preventing the program from printing an undefined result after an error.

✔ Allowing multiple calculations in one session.

✔ Adding more mathematical operations.

✔ Improving portability across operating systems.

## 🤝 Contributing

Contributions, suggestions, and feedback are welcome!

To contribute:

Fork this repository.

Create a new branch for your changes.

Commit your improvements.

Push your branch to GitHub.

Open a pull request describing your changes.

## 📄 License

This project is licensed under the MIT License.

Copyright (c) 2026 BJomo001

Permission is hereby granted, free of charge, to any person obtaining a copy of this software and associated documentation files (the "Software"), to deal in the Software without restriction, including without limitation the rights to use, copy, modify, merge, publish, distribute, sublicense, and/or sell copies of the Software, and to permit persons to whom the Software is furnished to do so, subject to the following conditions:

The above copyright notice and this permission notice shall be included in all copies or substantial portions of the Software.

THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE SOFTWARE.

👨‍💻 Author

BJomo001

GitHub: [@BJomo001](https://github.com/BJomo001)

⭐ If you like this project, consider giving the repository a star!
