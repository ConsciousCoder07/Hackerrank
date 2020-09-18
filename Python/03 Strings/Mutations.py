def mutate_string(string, position, character):
    #Method 1: using list
    l = list(string)
    l[position] = character
    string = ''.join(l)
    #Method 2: Concatenation and slicing
    string = string[:position] + character + string[position+1:]
    return string
    