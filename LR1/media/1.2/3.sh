#!/bin/bash

FILE="numbers.txt"

# Генеруємо 5 випадкових додатних чисел
for i in {1..5}; do
    echo $((RANDOM + 1))
done > "$FILE"

# Виводимо згенеровані числа
echo "Згенеровані числа:"
cat "$FILE"

# Знаходимо найменше число
MIN=$(sort -n "$FILE" | head -n 1)

# Залишаємо у файлі тільки найменше число
echo "$MIN" > "$FILE"

# Виводимо результат
echo "Найменше число:"
cat "$FILE"