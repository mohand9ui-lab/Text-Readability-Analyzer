# Text Readability Analyzer - CS50x Project

## 📌 Description
This program calculates the reading grade level of a given text using the **Coleman-Liau index**. It analyzes the text to count letters, words, and sentences, then applies a mathematical formula to determine the complexity of the writing.

This project was developed as part of Harvard University's **CS50x: Introduction to Computer Science**.

## 🚀 How it Works
The program determines the grade level based on three factors:
1. **Letter Count:** Total number of alphabetic characters.
2. **Word Count:** Calculated by identifying spaces in the text.
3. **Sentence Count:** Determined by counting punctuation marks like `.`, `!`, and `?`.

The final score is calculated using the formula:
`index = 0.0588 * L - 0.296 * S - 15.8`
*(Where **L** is the average number of letters per 100 words, and **S** is the average number of sentences per 100 words).*

## 🛠 Skills & Technologies
* **Language:** C
* **Concepts:** Loops, String Analysis, Data Type Casting (Int to Float), Mathematical Rounding.
* **Libraries:** `stdio.h`, `cs50.h`, `string.h`, `ctype.h`, `math.h`.

## 💻 Usage
Compile the program and provide a paragraph of text when prompted:
```bash
make readability
./readability
