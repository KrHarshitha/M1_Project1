# M1_Scientific_Calculator

This project is based upon scientific calculator using C language.In this project, a version of scientific calculator program in c which will 
perform basic arithmetic operation like addition,subtraction,multiplication division,modulus along with some scientific and trignometric operations,depending 
on the input from the user.
 
 ## Folder Structure
| Folder | Description |
|--------|-------------|
| 0.Certificates | Certificates |
| 1.Requirements | Documents detailing requirements |
| 2.Design | Documents specifying design details |
| 3.Implementation | All code and documentation |
| 4.TestPlanAndOutput | Documents with test plans and procedures |
| 5.Report | Documentation of whole project |
| 6.ImagesAndVideos | All output of the project |

# Requirements

## M1_Scientific Calculator
#                     ** SCIENTIFIC CALCULATOR **
  A Scientific Calculator or digital calculator is a type of electronic calculator, usually but not handheld,designed to calculate problem in science,Engineering,Mathematics etc.,
## Introduction
In this project, a version of scientific calculator program in c which will perform basic arithmetic operation like addition,subtraction,multiplication division,modulus along with some scientific and 
trignometric operations,depending on the input from the user.
## Research
The Scientific Calculator System does not involve any complex operations. It is easy to apply the operations in the systems to find the required result rather than 
spending the time by applying the techniques and formulas. Thus by finding and studying all these facts,the necessary functions has been implemented to get the proper results in a required or better way. 
## Objective
The main objective of this project are:
* To perform the required operation mentioned by the user.
* To meet the requirement by giving the same result as output.
## Cost and Featues
### Cost
The cost implementation of this project is minimal to none. Depending on the project extensions,how it is built and all the requirement will meet the cost and it can be varied accordingly to the market and business need.
### Features
| Feature ID | Feature Name | Features |
|------------|--------------|----------|
| F01 | Addition | add();takes the input form user and returns a+b |
| F02 | Subtraction | sub();takes the input from user and returns a-b |
| F03 | Multiplication | multiply();takes the input form user and returns a * b |
| F04 | Division | divide();takes the input form user and returns a/b |
| F05 | Modulus | mod();takes the input form user and returns a%b |
| F06 | Factorial | fact();takes the input form user and returns a! |
| F07 | Power | power();takes the input form user and returns a^b |
| F08 | Square | square();takes the input form user and returns a^2 |
| F09 | Cube | cube();takes the input form user and returns a^3 |
| F10 | Squareroot | squareroot();takes the input form user and returns sqrt(a) |
| F11 | Sine | sinx();takes the input form user and returns sin(a) |
| F12 | Cosine | cosx();takes the input form user and returns cos(a) |
| F13 | Tangent | tanx();takes the input form user and returns tan(a) |
| F14 | Secant | secx();takes the input form user and returns sec(a) |
| F15 | Cosecant | cosecx();takes the input form user and returns cosec(a) |
| F16 | Cotangent | cotx();takes the input form user and returns cot(a) |
## SWOT Analysis
### Strength:

   * It can solve the basic arithmetic operations.
   * Some complex operation such as square root and trignometric operations are performed.
### Weakness:

   * In case of trignometric calculations,it invloves most complex functions which leads to missing of values.
### Oppurtunities:
 
   * Exponential , Trignometric calculations can be implemented to higher.
### Threats:
    
   * If the user enters the high data than the fixed size, it throws error and return by quitting the function.
   * The user needs to enter the same fixed data to get the required output.
## *** 4 W's and 1H ***
 ### WHAT
   
   - This project deals with solving a mathematical operation.
 ### WHERE
 
   -It is used in schools,colleges,mathematics and in technology.
 ### WHEN
  
   - This project is widely used in many situation where it can be used in needed functions like trignometric operations.
 ### WHY
 
   - As this project is a simple function, it is easy to use for begineers.
 ### HOW
 
   - Implemented using simple switch cases and other functions in c.
   - It is implemented in C language for both Windows and Linus OS.
   - It is developed using multifile approach.
## Detail Requirements:
 
 ## High_Level_Requirements:
  
  | ID | DESCRIPTION | STATUS | Category |
  |-------|-------|-------|------------------|
  | H_01 | User shall view the operations available | Implemented | Technical |
  | H_02 | Selection of user choice | Implemented | Technical |
  | H_03 | Arithmetic operations | Implemented | Technical |
  | H_04 | Single input operations | Implemented | Technical |
  | H_05 | Trignometric Operations | Implemented | Technical |
  | H_06 | Logarithmic Operations | Not Implemented | Technical |
  | H_07 | Exit the program | Implemented | Technical |
  
  ## Low_Level_Requirements
  
  | ID | DESCRIPTION | HLR-ID | STATUS (Implemented/Future) | 
  |-------|-------|-------|-------|
  | L_01 | List of operations displayed | H_01 | Implemented |
  | L_02 | Input the user | H_02 | Implemented |
  | L_03 | Perform the addition for 1 | H_03 | Implemented |
  | L_04 | Perform the subtraction for 2 | H_03 | Implemented |
  | L_05 | Perform the multiplication for 3 | H_03 | Implemented | 
  | L_06 | Perform the division for 4 | H_03 | Implemented | 
  | L_07 | Perform the modulus for 5 | H_03 | Implemented | 
  | L_08 | Perform the power for 6 | H_03 | Implemented | 
  | L_09 | Perform the factorial operation for 7 | H_04 | Implemented | 
  | L_10 | Perform the square operation for 8 | H_04 | Implemented | 
  | L_11 | Perform the cube operation for 9 | H_04 | Implemented |
  | L_12 | Perform the squareroot operation for 10 | H_04 | Implemented |
  | L_13 | Perform the sine operation for 11 | H_05 | Implemented |
  | L_14 | Perform the cosine operation for 12 | H_05 | Implemented |
  | L_15 | Perform the tangent operation for 13 | H_05 | Implemented |
  | L_16 | Perform the secant operation for 14 | H_05 | Implemented |
  | L_17 | Perform the cosecant operation for 15 | H_05 | Implemented |
  | L_18 | Perform the tangent operation for 16| H_05 | Implemented |
  | L_19 | Perform the log operation | H_06 | Not Implemented |
  | L_20 | Exit the program for 0 | H_07 | Implemented |

  ### Best methods to be followed
  * Used functions to decrease dependency on main functions.
  * Used pointers, functions and built-in functions to accept the input from user and store the values which helped in creating easy design of scientific calculator.
  * Printf statements have been placed only whenever necessary to maximum lines of code and confusions.
  * Created header file so that the function can be used else where ever required without any difficulty.
# Architecture
## Behavioural Diagrams
## Activity Diagram
![alt text](https://github.com/keerthanaBaskar/M1_Scientific_Calculator/blob/main/2_Architecture/BehaviouralDiagram/activitydiagram.drawio.png)
## Usecase Diagram
![alt text](https://github.com/keerthanaBaskar/M1_Scientific_Calculator/blob/main/2_Architecture/BehaviouralDiagram/usecasediagram.drawio.png)
## Structural Diagrams
## Class Diagram
![alt text](https://github.com/keerthanaBaskar/M1_Scientific_Calculator/blob/main/2_Architecture/StructuralDiagram/classdiagram.drawio.png)
## Sequence Diagram
![alt text](https://github.com/keerthanaBaskar/M1_Scientific_Calculator/blob/main/2_Architecture/StructuralDiagram/sequencediagram.drawio.png)

# Implementation

## Folder Structure
| Folder | Description |
|--------|-------------|
|documentation | Doxygen configuration file which can generate document in html |
| inc | All the header files |
| src | Main source code for calculator |
| test | All the source code and data for testing the code and purposes |
| build | Build output(Not included in git) |

### Here are the few steps to run the code.
* For building the test file
   -  Type make create_test in terminal
* For running and building the code 
   - Type make Run in terminal
* For running the building tests
   - Type make Run_test in terminal
* For cleaning
   - Type make clean in terminal
   
# TEST PLAN and  Corresponding Output
## High Level Test Plan
| Test ID | Description | Exp.i/p | Exp.o/p | Actual o/p | Type of test |
|---------|-------------|---------|---------|------------|--------------|
| H_01 | Performs Addition operation | 10,20 | 30 | 30 | Technical |
| H_02 | Performs Subtraction operation | 30,15 | 15 | 15 | Technical |
| H_03 | Performs Multiplication operation | 7,5 | 35 | 35 | Technical |
| H_04 | Performs Division operation | 30,6 | 5 | 5 | Technical |
| H_05 | Performs Modulus operation | 30,4 | 2 | 2 | Technical |
| H_06 | Performs Power operation | 6,2 | 36 | 36 | Technical |
| H_07 | Performs Factorial operation | 7 | 5040 | 5040 | Technical |
| H_08 | Performs Square operation | 8 | 64 | 64 | Technical |
| H_09 | Performs Cube operation | 3 | 27 | 27 | Technical |
| H_10 | Performs Squareroot operation | 25 | 5 | 5 | Technical |
| H_11 | Performs Sine operation | 35 | 0.574 | 0.574 | Technical |
| H_12 | Performs Cosine operation | 87 | 0.052 | 0.052 | Technical |
| H_13 | Performs Tangent operation | 45 | 1.000 | 1.000 | Technical |
| H_14 | Performs Secant operation | 60 | 2.000 | 2.000 | Technical |
| H_15 | Performs Cosecant operation | 90 | 1.000 | 1.000 | Technical |
| H_16 | Performs Cotangent operation | 65 | 0.466 | 0.466 | Technical |
## Low Level Test Plan
| Test ID | Description | Exp.i/p | Exp.o/p | Actual o/p | Type of test |
|---------|-------------|---------|---------|------------|--------------|
| L_01 | Performs Addition operation | 10,-20 | -10 | -10 | Technical |
| L_02 | PerformsSubtraction operation | -4,-12 | 8 | 8 | Technical |
| L_03 | Performs Multiplication operation | 7,4 | 28 | 28 | Technical |
| L_04 | Performs Division operation | 24,-4 | 6 | -6 | Technical |
| L_05 | Performs Modulus operation | 56,4 | 0 | 0 | Technical |
| L_06 | Performs Power operation | -2,4 | 16 | 16 | Technical |
| L_07 | Performs Factorial operation | -4 | 24 | 24 | Technical |
| L_08 | Performs Square operation | 4 | 16 | 16 | Technical |
| L_09 | Performs Cube operation | 5 | 125 | 125 | Technical |
| L_10 | Performs Squareroot operation | 66 | 8.12 | 8 | Technical |
| L_11 | Performs Sine operation | 23 | 0.390 | 0.390 | Technical |
| L_12 | Performs Cosine operation | 47 | 0.681 | 0.681 | Technical |
| L_13 | Performs Tangent operation | 30 | 0.574 | 0.574 | Technical |
| L_14 | Performs Secant operation | 35 | 1.221 | 1.221 | Technical |
| L_15 | Performs Cosecant operation | 65 | 1.103 | 1.103 | Technical |
| L_16 | Performs Cotangent operation | 45 | 1.000 | 1.000 | Technical |

## Best Practices
- Checked the output for user defined inputs.
- Presented the outputs in tabular form for easy and better understanding
- Mentioned all the inputs for easy understanding.
- Both high level test plan and low level test plans are shown.

# ImagesAndVideos
## Some of the screenshots of the program testing each functionality..

### Mainmenu
![alt text](https://github.com/keerthanaBaskar/M1_Scientific_Calculator/blob/main/6_ImagesAndVideos/mainmenu.png)
### Arithmetic Operations
![alt text](https://github.com/keerthanaBaskar/M1_Scientific_Calculator/blob/main/6_ImagesAndVideos/arithmetic%20operations.png)
### Single Operations
![alt text](https://github.com/keerthanaBaskar/M1_Scientific_Calculator/blob/main/6_ImagesAndVideos/single%20operations.png)
### Trignometric Operations
![alt text](https://github.com/keerthanaBaskar/M1_Scientific_Calculator/blob/main/6_ImagesAndVideos/trignometric%20operations.png)
### Invalid Operation
![alt text](https://github.com/keerthanaBaskar/M1_Scientific_Calculator/blob/main/6_ImagesAndVideos/invalid%20operations.png)