/*
Title:Programming CA1

Program Desc:

    Write a program in C that will simulater a mathemetics quiz game.
    The game will include various features, each of which must be incorporated into your program

    {
    Simulate a mathemetics quiz game. The Game will include various features, each of which must be incorporated into your program. 

    Program should be menu-driven and must desplay main menu when run. The menu should include the folling options:

    1. Enter the number of questions to be asked for this round of the quiz
    (maximum of 5 questions allowed).
    2. Start and play quiz
    3. Display the number of questions that were answered (i) correctly and (ii)
    incorrectly for this round.
    4. Exit Program
    }

Student Number: C21394933
Author: Ernest John Decina
Due Date: 28th of November 2021

Edited by:
Date:
*/

// Libraries
#include <stdio.h>
#include <math.h>

// Symbolic Names
// Question 1 (Volume of a Cube)
#define SIDE 3

// Question 2 (Even Numbers in Range 10)
#define EVEN_ARRAY_SIZE 5 // Half of range (1 - 10)

// Question 3 (Volume of a Cylinder)
#define HEIGHT 10   // Lenght of Cylinder
#define PI 3.14     // Value of PI
#define RADIUS 2    // Radius of Cylinder

// Question 4 (Value of Hyp)
#define SIDE_A 3    // Side_a of Triangle
#define SIDE_B 4    // Side_b of Trianlge

// Question 5 (Total of Formula)
#define VALUE_A 5
#define VALUE_B 10
#define VALUE_C 4

int main()
{
    // Menu and Program Variables
    int program_status = 1;
    int menu_status = 1;

    // Option Variables
    int option = 0;

    // Quiz Status
    int quiz_status = 0;

    // Universal Question Variables
    float user_ans = 0;
    float calculation = 0.0;

    // Question 1 Variables
    int num_of_quiz = 0;
    int game_counter = 0;
    int correct_counter = 0;
    int incorrect_counter = 0;
    
    // Question 2 Variables
    int even[EVEN_ARRAY_SIZE];
    int ans_even[EVEN_ARRAY_SIZE];
    int total = 0;
    int total_ans = 0;
    
    // Array Variables
    int i = 0;

    // Full Program do while loop
    do
    {
        // Menu do while loop
        do
        {

            // Option 1
            printf("\n\n1. Enter the number of questions to be asked for this round of the quiz\n   (maximum of 5 questions allowed)");

            // Option 2
            printf("\n2. Start and play quiz");

            // Option 3
            printf("\n3. Display the number of questions that were answered (i) correctly and (ii)\n   incorrectly for this round.");

            // Option 4
            printf("\n4. Exit Program\n");

            // Chosing Option:
            printf("\nChoose Your Option: ");
            scanf("%d", &option);


            // Option Function
            switch (option)
            {

                // Option 1
                case 1:
                {
                    printf("You chose option 1");

                    // Choosing amount number of quizes
                    do
                    {

                        // Reading Input from User
                        printf("\nEnter the ammount of Questions: ");
                        scanf("%d", &num_of_quiz);

                        // Checking for Invalid Input
                        if (num_of_quiz < 1 || num_of_quiz > 5)
                        {
                            printf("\nInvalid Input\n");
                        } // end if

                        else
                        {
                            printf("\nValid Input");
                        } // end else

                    } while (num_of_quiz < 1 || num_of_quiz > 5); // end do

                    break;
                } // end case 1


                // Option 2
                case 2:
                {

                    printf("\nYou chose option 2\n");


                    // Checking if Valid number of Quizes Chosen
                    if (num_of_quiz < 1 || num_of_quiz > 5)
                    {

                        // Invalid Number of Quizes
                        printf("Invalid number number of quizes\nChoose Option 1 to choose ammount of questions\n");

                    } // end if


                    // Valid number of Questions, Ending loop, starting game for loop.
                    else
                    {

                        // Valid number of Questions
                        quiz_status = 1;
                        menu_status = 0;
                        option = 0;
                        
                    } // end else

                    // Resetting correct_counter
                    correct_counter = 0;

                    break;

                } // end case 2

                // Option 3
                case 3:
                {

                    printf("\nYou chose option 3");


                    //Checking if game started
                    if (quiz_status == 0)
                    {
                        printf("\nGame has not started");
                        printf("\nChoose option 2 to start game\n");
                    } // end if


                    else
                    {
                        // Printing Number of Correct and Incorrect Answer's
                        printf("\nYou had %d Correct answers\n", correct_counter);
                        printf("\nYou had %d Incorrect answers.\n", (num_of_quiz - correct_counter));
                    } // end else


                    // Returns to menu screen
                    menu_status = 1;


                    break;

                } // end case 3

                // Option 4
                case 4:
                {

                    printf("You chose option 4");


                    // Displaying That quiz has ended
                    printf("\nQuiz has ended");


                    // Ending menu status and Game status
                    menu_status = 0;
                    program_status = 0;


                    // Ending full program
                    return 0;


                    break;

                } // end case 4

                // Invalid Option
                default:
                {

                    printf("\nInvalid Input\nTry Again\n");
                    break;

                } // default

            } // end switch

        }// Rejecting Character input
        while (menu_status == 1 || option == getchar()); // end while


        
        // Start of Quiz
        // Telling User Quiz has started
        printf("\nQuiz Start:");


        for (game_counter = 0; game_counter <= num_of_quiz; game_counter++)
        {

            switch (game_counter)
            {

                // Question 1
                case 1:
                {

                    // Calculation
                    calculation = pow(SIDE, 3);


                    // Printing Question to User
                    printf("\nWhat is the Volume of a cube with Side's %d", SIDE);


                    


                    // Printing answer box
                    printf("\nEnter your answer : ");


                    // Taking Answer from User
                    scanf("%f", &user_ans);


                    // Printing User_ans
                    printf("\nYou entered: %.0f - ", user_ans);


                    // Checking If Answer is Correct
                    if (user_ans == calculation)
                    {

                        // Adding up Correct counter
                        printf("Correct !!\n");
                        correct_counter = correct_counter + 1;

                    }// end if


                    // Checking If Answer is Incorrect
                    else
                    {

                        printf("Wrong !! The Correct answer: %.2f\n", calculation);

                    }// end else


                    break;
                }// end case 1


                // Question 2
                case 2:
                {

                    // Calculation
                    for (i = 0; i < EVEN_ARRAY_SIZE; i++)
                    {

                        //Reading all even int's into array
                        //Formula starting at 4 to exclude 0 as answer
                        even[i] = 4 + ((i - 1) * 2);

                    } // end for


                    // Printing Question to User
                    printf("\nEnter even values of range 1 - %d (Inclusive) in order.", (EVEN_ARRAY_SIZE * 2));


                    // Taking Answer from User
                    printf("\nEnter your answer : \n");

                    for (i = 0; i < EVEN_ARRAY_SIZE; i++)
                    {

                        scanf("%d", &ans_even[i]);

                    } // end for


                    // Adding up Total for each array
                    for (i = 0; i < EVEN_ARRAY_SIZE; i++)
                    {

                        // Adding up array
                        total = total + even[i];

                        // Adding up Answer array
                        total_ans = total_ans + ans_even[i];

                    } // end for


                    // Checking if Answer is Correct
                    if (total_ans == total)
                    {

                        // Adding up Correct counter
                        printf("\nCorrect answers\n");
                        correct_counter = correct_counter + 1;

                    } // end if


                    // Checking if Answers is Incorrect
                    else
                    {

                        printf("\nIncorrect answer\n");

                    } // end else


                    break;

                } // end case 2

                
                // Question 3
                case 3:
                {
                    // Calculating Answer
                    calculation = (PI * (RADIUS * RADIUS) * HEIGHT);


                    // Printing Question to User
                    printf("\nCalculate the volume of a Cylinder with Radius %d, Hieght %d and PI = %.2f", RADIUS, HEIGHT, PI);


                    // Taking Answer from User
                    printf("\nVolume = ");
                    scanf("%f", &user_ans);

                    // Printing User_ans
                    printf("\nYou entered: %.1f - ", user_ans);


                    // Checking if Answer is Correct
                    if (user_ans == calculation)
                    {
                        
                        // Adding up Correct counter
                        printf("Correct !!\n");
                        correct_counter = correct_counter + 1;

                    }// end if

                    // Checking if Answer is Incorrect
                    else
                    {

                        printf("Wrong !! The Correct answer: %f\n", roundf(calculation));

                    }// end else


                    break;

                }// end case 3

                
                // Question 4
                case 4:
                {
                    // Calculating Answer
                    calculation = sqrt((pow(SIDE_A, 2)) + (pow(SIDE_B, 2)));


                    // Printing Question to User
                    printf("\nWhat is the Hyotenuse equal to with Side_a = %d and Side_b = %d", SIDE_A, SIDE_B);


                    // Taking Answer from User
                    printf("\nC = ");
                    scanf("%f", &user_ans);


                    // Printing User_ans
                    printf("\nYou entered: %.2f - ", user_ans);


                    // Checking if Answer is Correct
                    if (user_ans == calculation)
                    {

                        // Adding up Correct counter
                        printf("Correct !!\n");
                        correct_counter = correct_counter + 1;

                    }// end if

                    // Checking if Answer is Incorrect
                    else
                    {

                        printf("Wrong !! The Correct answer: %f\n", calculation);

                    }// end else

                    break;

                }//  end case 4

                
                // Question 5
                case 5:
                {
                    // Calculating Answer
                    calculation = (VALUE_A * VALUE_B) + VALUE_C;


                    // Printing Question to User
                    printf("\nCalculate the following: ");
                    printf("\n  (%d x %d) + %d = Ans", VALUE_A, VALUE_B, VALUE_C);


                    // Taking Answer from User
                    printf("\nAns = ");
                    scanf("%f", &user_ans);


                    // Printing User_ans
                    printf("\nYou entered: %.2f - ", user_ans);


                    // Checking if Answer is Correct
                    if (user_ans == calculation)
                    {

                        // Adding up Correct counter
                        printf("Correct !!\n");
                        correct_counter = correct_counter + 1;

                    }// end if

                    // Checking if Answer is Incorrect
                    else
                    {
                        printf("Wrong !! The Correct answer: %f\n", calculation);

                    }// end else


                    break;

                }// end case 5
                
            }// end switch

        } // end for
        // End of quiz

    } while (program_status == 1); // end do while

    return 0;
} // end main