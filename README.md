# 6Companies30Days

## Company : Microsoft 



Que : https://leetcode.com/problems/evaluate-reverse-polish-notation/

Data Structure to Use: Stack
intution : 
we need minimum 2 operands and 1 operator(among "+","-","/","*") to find the value.
so here stack DataStructure would be helpful.
when operator appear in tokens top 2 elements of stack will be taken out and the output using the operator will be inserted to stack;
the final output will be the top element in stack
to change from string to int stoi() function will be useful.


Que : https://leetcode.com/problems/bulls-and-cows/

Data Struture to Use: map
intution : 
we need to check which digits appears how many times:
if the digit is only appears 1 time in secret message and 2 times in guess then there can be one cow or one bull but there is no possiblity for both cow and bull. so keep track of frequecny of the digits we need map to store the digit with its freq.

Que : https://leetcode.com/problems/rotate-function/

Data Structure to Use: Array to Store all the sum value
Intution : observation about two values how one value derived using previous element value;




## Company : Goldman Sachs

Que: https://leetcode.com/problems/factorial-trailing-zeroes

intution : to find trailing zero we need to find number of 5 appears in factorial
ex:
0! = 0;
1! = 1;
2! = 2 * 1;
3! = 3 * 2!;
.
.
5! = 5 * 4! =  120; => one trailing zero  because 5*2 = 10;
.
.
.
10! = 10(5*2) * 9 * 8 * 7 * 6 * 5! => 2 time (5 * 2) => 2 trailing zeros;


Que: https://leetcode.com/problems/minimum-consecutive-cards-to-pick-up/

Data Structure : map to store the index of cards

intution: we can store the indexes of cards in map with key as cards value and list of integers as its index 
and the index will be already sorted so no need to sort it again. and the minimum difference between indexes will be our answer.


que : https://leetcode.com/problems/max-points-on-a-line/description/

intution = if the slope of points are same then they are on the same line;
