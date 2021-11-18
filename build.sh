#!/bin/bash
echo "compiling read_resistance program.."
g++ read_resistance.cpp AnalogIn.cpp -o read_resistance
echo "compilation complete.."
echo "run ./read_resistance"
