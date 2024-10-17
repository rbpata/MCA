
words = [];

for i in range(5):
    word = input(f"Enter {i+1} name :- ");
    words.append(word);
sentence = " ".join(words)+"."

print(sentence);
