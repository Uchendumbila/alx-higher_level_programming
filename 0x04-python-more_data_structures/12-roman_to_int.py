#!/usr/bin/python3

def roman_value(prmCharacter):
    roman_list = [('I', 1), ('V', 5), ('X', 10),
                  ('L', 50), ('C', 100), ('D', 500), ('M', 1000)]
    for item in roman_list:
        character, value = item
        if (prmCharacter is character):
            return value
    return None
