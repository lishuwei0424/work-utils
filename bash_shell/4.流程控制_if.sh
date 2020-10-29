#!/bin/bash
num1=2
num2=3
if test ${num1} -eq ${num2} 
then
   echo "num1=num2" 
elif test ${num1} -gt ${num2} 
then
      echo "num1>=num2" 
else 
   echo "num1<=num2" 
fi


