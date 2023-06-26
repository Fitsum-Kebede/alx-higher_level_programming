#!/usr/bin/python3

def safe_print_list(my_list=[], x=0):
    total = 0
    for list in range(x):
        try:
            print(f"{my_list[list]}", end="")
            total += 1
        except IndexError:
            break
    print()
    return(total)
