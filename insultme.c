#include <stdio.h>
#include <cs50.h>

/* This is InsultMe Math Quiz, a program that asks you solve simple math problems. If you are correct,
you get a theoretical cookie. If you are wrong, you are insulted. If youre right, youre still sorta insulted.
The takeaway is youre insulted. It uses an if/else statement nested inside a do/while loop*/

int main(void)

{ /*below the opening prompt to introduce program and to grab user name */

    printf("Welcome to the InsultMe Math Quiz, the whacky math quiz that insults you if you're wrong. Press ENTER to proceed...\n");
    getchar();
    printf("You may want to grab a piece of paper for this, you look like you'll need it... press ENTER to proceed.\n");
    getchar();
    printf("First, I'll need your name so that I know who I'm making fun of: ");
    string name = get_string();
    printf("Okay, %s, lets get started. Press ENTER to continue...\n", name);
    getchar();

    int answer1;
    do                          /* below is the do/while loop for question 1 */
     {

        printf("Solve. 5 x 8 + 6 / 6 - 12 x 2\n");
        answer1 = get_int();

        if (answer1 == 17)
            {
                printf("Correct, I knew you were a smart cookie. Now here, try another...\n");
            }
        else if (answer1 < 30)
            {
                printf("No, dummy...try again, don't fuck it up this time...\n");
            }
        else
            {
                printf("No, you fucking idiot! You must be a god-damn moron, this is basic 7th grade math. PEMDAS, motherfucker...\n");
            }
     }
    while (answer1 < 17 || answer1 > 17);

    int answer2;
    do                          /* below is the do/while loop for question 2 */
     {

        printf("Solve. 12 / 4 + 5 x 3 - 6\n");
        answer2 = get_int();

        if (answer2 == 12)
            {
                printf("Right again, you're not as dumb as you look. Now try another...\n");
            }
        else if (answer2 < 30)
            {
                printf("No, dummy...try again, don't fuck it up this time...\n");
            }
        else
            {
                printf("Maybe your dumb ass should'nt have children, %s...\n", name);
            }
     }
    while (answer2 < 12 || answer2 > 12);

    int answer3;
    do                          /* below is the do/while loop for question 3 */
     {

        printf("Solve. (6 + 4) x 7 - 3\n");
        answer3 = get_int();

        if (answer3 == 67)
            {
                printf("On a roll, keep going...\n");
            }
        else if (answer3 < 30)
            {
                printf("No, dummy...try again, don't fuck it up this time...\n");
            }
        else
            {
                printf("I have, quite frankly, had enough of this shit... get it right, dummy...\n");
            }
     }
    while (answer3 < 67 || answer3 > 67);

    int answer4;
    do                          /* below is the do/while loop for question 4 */
     {

        printf("Solve. (-797) x (-3) + 1\n");
        answer4 = get_int();

        if (answer4 == 2392)
            {
                printf("Only one more equation, don't fuck it up now...\n");
            }
        else if (answer4 < 30)
            {
                printf("Try again, dumbass, but I'm sure you already knew that...\n");
            }
        else
            {
                printf("I cant believe I wasted all this time writing this code for you to suck this bad...\n");
            }
     }
    while (answer4 < 2392 || answer4 > 2392);

    int answer5;
    do                          /* below is the do/while loop for question 5 */
     {

        printf("Solve. 5 + 7 x 4 - (11 + 6)\n");
        answer5 = get_int();

        if (answer5 == 16)
            {
                printf("Congratulations, %s, you made it through a quiz designed for 6th grade children.\n", name);
            }
        else if (answer5 < 30)
            {
                printf("It's the last one, you fuck, get it right or I'll send a virus to your computer...\n");
            }
        else
            {
                printf("Your mother should have swallowed you...\n");
            }
     }
    while (answer5 < 16 || answer5 > 16);

}
