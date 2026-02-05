#!/bin/bash

# Day 2 folder
DAY="Day02_Operators_Expressions"

# Create main folder and README
mkdir -p "$DAY"
touch "$DAY/README.md"

# Create subfolders
mkdir -p "$DAY/examples"
mkdir -p "$DAY/exercises/solutions"

# Example files (placeholders)
touch "$DAY/examples/arithmetic_ops.c"
touch "$DAY/examples/relational_ops.c"
touch "$DAY/examples/logical_ops.c"
touch "$DAY/examples/operator_precedence.c"

# Exercise files
touch "$DAY/exercises/exercise1.md"
touch "$DAY/exercises/exercise2.md"
touch "$DAY/exercises/solutions/solution1.c"
touch "$DAY/exercises/solutions/solution2.c"

echo "Day 2 skeleton created successfully."