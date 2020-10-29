#!/bin/bash
readonly value=10
echo ${value}

str="lishuwei"${value}""
str2="lishuwei  ${value}"

str3='lishuwei  "${value}"'
str4='lishuwei  ${value}'

echo  ${str}
echo  ${str2}
echo  ${str3}
echo  ${str4}

echo   ${#str}
echo   ${str:2:8}
echo `expr index "$str" s`  