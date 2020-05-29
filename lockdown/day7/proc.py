from multiprocessing import Process
import time

def funca():
    for i in range(12, 0, -1):
        print("A will take {} seconds more".format(i))
        time.sleep(1)
        
def funcb():
    for i in range(6, 0, -1):
        print("B will take {} seconds more".format(i))
        time.sleep(1)
        
def funcc():
    for i in range(9, 0, -1):
        print("C will take {} seconds more".format(i))
        time.sleep(1)

pa = Process(target=funca)
pb = Process(target=funcb)
pc = Process(target=funcc)

pa.start()
pb.start()
pc.start()