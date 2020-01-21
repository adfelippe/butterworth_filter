# Simple Butterworth filter library

This library provides two simple functions to filter an analog signal input (stored in an double array) using a Butterworth filter (4th and 5th orders) that are preset to the following parameters:
- sample frequency: 1 kHz
- cut-off frequency: 30 Hz (-3 dB attenutation at it)

This functions were based on the code generated by Tom Fisher's filter design tool, available at:
https://www-users.cs.york.ac.uk/~fisher/mkfilter/
If you need different input parameters, it's quite easy to redesign the filter on the website.
Please, bear in mind this library was written for a very specific use, so it'll probably need to be rewritten for other cases.

Just add .h and .c to your code, include "butterworth.h" and you're good to go.
