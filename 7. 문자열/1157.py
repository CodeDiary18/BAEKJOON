word=input().upper()
set_word=list(set(word))
count_set=[word.count(x) for x in set_word]
if count_set.count(max(count_set))>1:
    print('?')
else:
    index=count_set.index(max(count_set))
    print(set_word[index])
