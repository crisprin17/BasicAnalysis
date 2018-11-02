#!/usr/bin/env python

def print_usage():
    print "Usage: run_file.py"


filename = open("/nova/app/users/crisprin/GENIE_relS17_10_30/neutrino_mom.log","r+")
print "----------------------1---------: "
flines = filename.readlines()
count = len(flines)
print "------------------------2--------------: "
for j in range(1,len(flines)):
    try:
        px = float((flines[j].split(' '))[0])
        py = float((flines[j].split(' '))[1])
        pz = float((flines[j].split(' '))[2])
        for i in range(j,len(flines)):
            try:
                px_j = float((flines[i].split(' '))[0])
                py_j = float((flines[i].split(' '))[1])
                pz_j = float((flines[i].split(' '))[2])
                if(i!=j and px == px_j and py == py_j and pz == pz_j):
                    print("Match found!!!")
                    print("First particle for j:"+str(j)+" px:"+str(px)+" py:"+str(py)+" pz:"+str(pz)+" AND Second i:"+str(i)+" px:"+str(px_j)+" py:"+str(py_j)+" pz:"+str(pz_j))
            except ValueError:
                break
            
    except ValueError:
        break

    
filename.close()

