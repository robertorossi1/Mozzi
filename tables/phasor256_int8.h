#ifndef PHASOR256_H_
#define PHASOR256_H_

#if ARDUINO >= 100
 #include "Arduino.h"
#else
 #include "WProgram.h"
#endif
#include PGMSPACE_INCLUDE_H

/* ramp
*/

#define PHASOR256_NUM_CELLS 256
#define PHASOR256_SAMPLERATE 256

const int8_t CONSTTABLE_STORAGE PHASOR256_DATA []  =
        {
                -128, -127, -127, -126, -124, -124, -122,
                -122, -120, -120, -118, -118, -116, -115, -115, -113, -113, -111, -110, -110,
                -108, -108, -106, -105, -105, -103, -103, -101, -101, -99, -99, -97, -97, -95,
                -95, -93, -93, -91, -91, -89, -89, -87, -87, -85, -84, -83, -82, -82, -80, -79,
                -78, -77, -76, -76, -74, -74, -72, -72, -70, -69, -69, -67, -67, -65, -65, -63,
                -62, -61, -60, -60, -58, -57, -56, -55, -54, -54, -52, -51, -51, -49, -49, -47,
                -46, -45, -45, -43, -43, -41, -41, -39, -39, -37, -37, -35, -34, -33, -33, -31,
                -31, -29, -29, -27, -26, -26, -24, -24, -22, -21, -21, -19, -18, -18, -16, -16,
                -14, -13, -13, -11, -11, -9, -8, -8, -6, -5, -5, -3, -3, -1, -1, 1, 1, 3, 3, 5,
                5, 6, 8, 8, 10, 10, 11, 13, 13, 15, 16, 16, 18, 18, 20, 20, 22, 23, 23, 25, 26,
                26, 28, 28, 30, 31, 31, 33, 33, 35, 35, 37, 38, 39, 39, 41, 41, 43, 44, 44, 46,
                47, 47, 49, 49, 51, 52, 52, 54, 54, 56, 57, 57, 59, 59, 61, 61, 63, 63, 65, 66,
                66, 68, 69, 69, 71, 71, 72, 74, 74, 76, 76, 78, 78, 80, 80, 82, 82, 84, 84, 86,
                86, 88, 88, 90, 91, 92, 93, 94, 95, 96, 97, 98, 99, 100, 101, 102, 103, 104,
                105, 105, 107, 108, 109, 110, 110, 112, 112, 114, 114, 116, 117, 117, 119, 119,
                121, 121, 123, 123, 125, 126, 126,
        };

#endif /* PHASOR256_H_ */