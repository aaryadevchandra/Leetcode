from os import system, name

# clear screen function
def clear():
    if name == 'nt':
        _ = system('cls')

# pause and clear screen function
def pause():
    input('\nPress any key to continue...')
    clear()

# word input
word = input('Enter word to guess: ')

# utility variables
pause()
flag = 0
correct_guess = 0
misses = 0
check_list = []
var = 0

# check if all letters of the words have guessed
def check(check_list, word, var):

    for letter in check_list:
        for i in range(0, len(word)):
            if letter == word[i]:
                var = var + 1
                if var == len(word):
                    return True


while True:

    # flag to check if letter has been previously entered in 'check_list'
    prev_entered = 0

    print(check_list)
    print('\n')

    # guess letter input 
    letter = input(f'Enter guess letter {correct_guess + 1}: ')

    # checking if letter exists in word
    for i in range(0, len(word)):
        
        if letter == word[i]:
            flag = 1
            break
        
        elif letter != word[i]:
            if i == len(word) - 1:
                flag = -1

    # actions to perform if letter exists in given word
    if flag == 1:

        # checking if letter is present in check_list and adding if not
        if len(check_list) == 0:
            check_list.append(letter)

        else:
            # previously entered flag. if entered previously, flag = 1
            if letter in check_list:
                prev_entered = 1
                print('\nLetter is previously entered in check_list')

            # adding if letter not in check_list
            else:
                check_list.append(letter)

        # hit counter
        if prev_entered != 1:
            correct_guess = correct_guess + 1
        print('\nHits:', correct_guess)
        print('\nMisses:', misses)

        if check(check_list, word, var) is True:
            print('\nWord Guessed Successfully')
            exit(0)

        pause()

    # actions to perform if letter doesn't exist in given word
    elif flag == -1:
        
        # miss counter
        misses = misses + 1
        print('\nHits:', correct_guess)
        print('\nMisses:', misses)

        if misses == 6:
            print('\nMAN GOT HANGED')
            exit(0)

        pause() 