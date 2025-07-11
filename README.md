# 📝 Word Frequency Counter

This is a simple C program that counts how many times each word appears in your input.

## ✨ Features

* 🚀 Reads words until you type **`end`** to stop.
* 🔤 Counts words **case-insensitively** (treats “Word” and “word” the same).
* 📊 Shows the frequency of each distinct word you entered.

## ▶️ How to Use

1. **Compile** the program:

   ```bash
   gcc -o word_freq word_freq.c
   ```

2. **Run** it:

   ```bash
   ./word_freq
   ```

3. **Type words** one by one. When done, type:

   ```
   end
   ```

4. See the **word counts** displayed on the screen! 🎉

## 📚 Example

```
Enter words (type 'end' to stop):
Hello
world
hello
WORLD
test
end

Word Frequency Count:
hello: 2
world: 2
test: 1
```

## ⚠️ Limitations

* Can handle up to **1000 unique words**.
* Each word can be up to **50 characters** long.
* Does **not** handle punctuation — only plain words.

