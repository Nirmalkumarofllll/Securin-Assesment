You are given two six-sided dice, DieA and DieB, each with faces numbered from1to 6. You can only roll both the dice together & your turn is guided by the obtained sum.
 Example: DieA=6, DieB =3.  Sum=6+3=9

1.	How many total combinations are possible? Show the math along with the code?
MATH LOGIC:
•	The face of die is initialized as 6.
•	Read number of dices from user.
•	To calculate the total number of combinations Total combinations = total number of faces^ total number of dices.

2.	Calculate and display the distribution of all possible combinations that can be obtained when rolling both Die A and Die B together. Show the math along with the code?

CODE LOGIC:
•	The face of die is initialized as 6.
•	Create two nested loops to iterate over the numbers from 1 to FaceofDie.
•	To display the distribution of all possible combinations print all the combinations of i,j.

3.	Calculate the Probability of all Possible Sums occurring among the number of combinations from (2). Example: P(Sum = 2) = 1/X as there is only one combination possible to obtain Sum = 2. Die A = Die B = 1.

CODE LOGIC:
•	The function takes three parameters: FaceofDie (number of faces on each die), totalCombinations (total possible outcomes when rolling the dice), (target sum).
•	Initializes a counter (count) to track valid combinations.
•	Iterate through all possible sums (from 2 to 12) by adding the values of two dice.
•	For each sum, it calculates the probability by dividing the count of valid combinations by the total possible combinations and prints the result.
