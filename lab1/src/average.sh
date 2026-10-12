#!/bin/bash

count=$#


sum=0
for num in "$@"; do
    sum=$((sum + num))
done

average=$(awk "BEGIN {printf \"%.2f\", $sum / $count}")

echo "Количество чисел: $count"
echo "Сумма: $sum"
echo "Среднее арифметическое: $average"
