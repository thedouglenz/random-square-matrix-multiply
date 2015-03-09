/*
 * A node.js application that does a heavy computation - matrix multiplication
 *
 * Douglas Lenz 2015
 *
 */

// Pick some arbitrary constraints to make the problem harder
var SIZE_XY = 100;
var MIN_VAL = 5600;
var MAX_VAL = 7900000;

// Generate two 2d arrays to be filled with random numbers
var a = [];
var b = [];

for(var i=0; i<SIZE_XY; i++) {
    a[i] = Array();
    for(var j=0; j<SIZE_XY; j++) {
	a[i].push(Math.floor((Math.random() * MAX_VAL) + MIN_VAL));
    }
}

console.log("Array A allocated and filled with random numbers ...");

for(var i=0; i<SIZE_XY; i++) {
    b[i] = Array();
    for(var j=0; j<SIZE_XY; j++) {
	b[i].push(Math.floor((Math.random() * MAX_VAL) + MIN_VAL));
    }
}

console.log("Array B allocated and filled with random numbers ...");

// Initialize c to be all 0s
var c = [];
for(var k=0; k<SIZE_XY; k++) {
    c[k] = Array();
    for(var l=0; l<SIZE_XY; l++) {
	c[k][l] = 0;
    }
}

console.log("Array C initialized ...");

// Dot product the two arrays together into c
for(var i=0; i<SIZE_XY; i++) {
    for(var j=0; j<SIZE_XY; j++) {
	for(var k=0; k<SIZE_XY; k++) {
	    c[i][j] = c[i][j] + a[i][k] * b[k][j];
	}
    }
}

console.log("Matrices multiplied ...");

console.log("The first three values of A x B are: " + c[0][0] + ", " + c[0][1] + ", " + c[0][2]);
console.log("Done. Exiting ...");
