# 6Companies30Days

## Company : Microsoft 

### Day 1:

Que : https://leetcode.com/problems/evaluate-reverse-polish-notation/

intution : 
we need minimum 2 operands and 1 operator(among "+","-","/","*") to find the value.
so here stack DataStructure would be helpful.
when operator appear in tokens top 2 elements of stack will be taken out and the output using the operator will be inserted to stack;
