#!/usr/bin/python3

def multiple_returns(sentence):
    if len(sentence) == 0:
        n = len(sentence), None
        return n
    n = len(sentence), sentence[0]
    return n
