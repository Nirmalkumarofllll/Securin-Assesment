Now comes the real challenge. You were happily spending a lazy afternoon playing your board game with your dice when suddenly the mischievous Norse God Loki (You love Thor too much & Loki didn’t like that much) appeared. Loki dooms your dice for his fun removing all the “Spots” off the dice. No problem! You have the tools to re-attach the “Spots” back on the Dice. However, Loki has doomed your dice with the following conditions: 
● Die A cannot have more than 4 Spots on a face.
 ● Die A may have multiple faces with the same number of spots.
 ● Die B can have as many spots on a face as necessary i.e. even more than 6. But in order to play your game, the probability of obtaining the Sums must remain the same! So if you could only roll P(Sum = 2) = 1/X, the new dice must have the spots reattached such that those probabilities are not changed. 
Input:
 ● Die A = [1, 2, 3, 4, 5, 6] & Die B = Die A = [1, 2, 3, 4, 5, 6]
 Output:
 ● A Transform Function undoom dice that takes (Die A, Die B) as input & outputs New Die A = [?, ?, ?, ?, ?, ?],New Die B = [?, ?, ?, ?, ?, ?] where, No New Die A[x] > 4

MATH LOGIC:
•	Read input from user Die A=Die B
•	To calculate the probabilities of each sum:
	The function takes three parameters: FaceofDie (number of faces on each die), totalCombinations (total possible outcomes when rolling the dice), (target sum).
	Initializes a counter (count) to track valid combinations.
	Iterate through all possible sums (from 2 to 12) by adding the values of two dice.
	For each sum, it calculates the probability by dividing the count of valid combinations by the total possible combinations and prints the result.
•	Create two new dices New Dice A and New Dice B
•	New Dice A cannot have more than 4 also they can have multiple faces with same number of spots.
•	The New Dice B can have the spots more than 6.
•	The probability of sum in new dices and input dice should remain the same.
