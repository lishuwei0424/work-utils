#!/bin/sh
hello=`ps -ef| grep helloworld.exe|grep -v grep |awk '{print $2}'`
while true;
do
if [ ! $hello ]; then
./helloworld.exe
fi
done