#pickle write
import pickle

dictx = {1:"one", 2:"two", 3:"three"}



with open("pickle_1", "w+b") as fa:
    pickle.dump(dictx, fa)


# for reading use pickle.load
