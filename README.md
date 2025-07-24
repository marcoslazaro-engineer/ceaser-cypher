#  Caesar Cipher in C

This repository contains a clean and modular implementation of the **Caesar cipher**, written in C.  
It allows you to **encrypt and decrypt messages** using a user-defined shift key.  
Perfect for learning classic cryptography and C programming fundamentals.

---

## What is the Caesar Cipher?

The **Caesar cipher** is one of the oldest known encryption techniques, used by Julius Caesar.  
It works by shifting each **alphabetic character** in the message by a fixed number of positions in the alphabet.

###  How it works:

- **Encryption:** shift each letter **forward** by a given number (key)
- **Decryption:** shift each letter **backward** by the same number

###  Example (Shift = 3):
Plaintext : HELLO WORLD
Encrypted : KHOOR ZRUOG

 Features

- ✅ Encrypt and decrypt from user input
- ✅ Handles uppercase and lowercase letters
- ✅ Skips symbols, digits, whitespace
- ✅ Modular and readable code structure
- ✅ Cross-platform (Linux/Windows compatible)
- ✅ Loop for multiple operations in one session

How to Compile? :
gcc -o caesar caesar.c


How to Run? :
./caesar       # on Linux/macOS
caesar.exe     # on Windows (C compiler or cmd)

