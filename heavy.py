"""A Python application that does a heavy computation - matrix multiplication
   Douglas Lenz 2015
"""

import random

# Pick some arbitrary constraints to make the problem harder
SIZE_XY = 100
MIN_VAL = 5600
MAX_VAL = 7900000

# Generate two 2D arrays to be filled with random numbers
a = [[random.randint(MIN_VAL, MAX_VAL) for i in range(SIZE_XY)] for j in range(SIZE_XY)]
print "Array A allocated and filled with random numbers ..."
b = [[random.randint(MIN_VAL, MAX_VAL) for i in range(SIZE_XY)] for j in range(SIZE_XY)]
print "Array B allocated and filled with random numbers ..."

# initialize c to all zeros
c = [[0 for i in range(SIZE_XY)] for j in range(SIZE_XY)]
print "Array C initialized ..."

# Dot product the two arrays together into c
for i in range(SIZE_XY):
    for j in range(SIZE_XY):
        for k in range(SIZE_XY):
            c[i][j] = c[i][j] + a[i][k]  * b[k][j]

print "Matrices multiplied ..."
print "The first three values of A x B are: %d, %d, %d" % (c[0][0], c[0][1], c[0][2])
print "Done. Exiting ..."
