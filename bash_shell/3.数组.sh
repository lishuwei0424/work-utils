#!/bin/bash

#定义数组
value=(1 2 3 4 5 7)

#读取数组
echo  ${value[3]}

#获取数组的长度
echo  ${#value[3]}  #单个长度
echo  ${#value[@]}  #数组长度

