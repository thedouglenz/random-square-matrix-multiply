<?php
/*
 * A PHP application that does a heavy computation - matrix multiplication
 *
 * Douglas Lenz 2015
 *
 */

// Pick some arbitrary constraints to make the problem harder
$SIZE_XY = 100;
$MIN_VAL = 5600;
$MAX_VAL = 7900000;

// Generate two 2D arrays to be filled with random numbers
$a = array();
$b = array();

for($i=0; $i<$SIZE_XY; $i++) {
    $a[$i] = array();
    for($j=0; $j<$SIZE_XY; $j++) {
	array_push($a[$i], rand($MIN_VAL, $MAX_VAL));
    }
}

echo "Array A allocated and filled with random numbers ... \n";

for($i=0; $i<$SIZE_XY; $i++) {
    $b[$i] = array();
    for($j=0; $j<$SIZE_XY; $j++) {
	array_push($b[$i], rand($MIN_VAL, $MAX_VAL));
    }
}

echo "Array B allocated and filled with random numbers ... \n";

// Initialize $c to all 0s
$c = array();
for($k=0; $k<$SIZE_XY; $k++) {
    $c[$k] = array();
    for($l=0; $l<$SIZE_XY; $l++) {
	$c[$k][$l] = 0;
    }
}
echo "Array C initialized ... \n";

// Dot product the two arrays together to produce a third array
for($i=0; $i<$SIZE_XY; $i++) { // a
    for($j=0; $j<$SIZE_XY; $j++) { // b
	for($k=0; $k<$SIZE_XY; $k++) {
	    $c[$i][$j]  = $c[$i][$j] + $a[$i][$k] * $b[$k][$j];
	}
    }
}
echo "Matrices multiplied ... \n";

echo "The first three values of A x B are: {$c[0][0]}, {$c[0][1]}, {$c[0][2]} \n";
echo "Done. Exiting ... \n";
