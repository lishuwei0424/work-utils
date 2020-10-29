#!/bin/bash

fuc_print()
{
    for var in  $*
    do
       echo  ${var}
    done
}


fuc_print  1  2  3