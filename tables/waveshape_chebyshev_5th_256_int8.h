#ifndef CHEBYSHEV_5TH_256_H_
#define CHEBYSHEV_5TH_256_H_

#if ARDUINO >= 100
 #include "Arduino.h"
#else
 #include "WProgram.h"
#endif
#include PGMSPACE_INCLUDE_H

/* table for waveshaper using chebyshev polynomials
*/

#define CHEBYSHEV_5TH_256_NUM_CELLS 256
const int8_t CONSTTABLE_STORAGE CHEBYSHEV_5TH_256_DATA [] =
        {
                -128, -104, -82,
                -60, -40, -22, -5, 11, 26, 39, 52, 63, 73, 82, 90, 98, 104, 110, 114, 118, 121,
                124, 126, 127, 127, 127, 127, 126, 124, 122, 120, 117, 113, 110, 106, 102, 97,
                92, 87, 82, 77, 71, 66, 60, 54, 48, 42, 35, 29, 23, 17, 10, 4, -2, -8, -14, -20,
                -26, -32, -38, -43, -49, -54, -59, -64, -69, -74, -79, -83, -87, -91, -95, -99,
                -102, -106, -109, -112, -114, -117, -119, -121, -122, -124, -125, -126, -127,
                -128, -128, -128, -128, -128, -128, -127, -126, -125, -124, -122, -121, -119,
                -117, -115, -112, -110, -107, -104, -101, -98, -94, -91, -87, -83, -80, -76,
                -71, -67, -63, -58, -54, -49, -45, -40, -35, -30, -25, -20, -15, -10, -5, 0, 4,
                9, 14, 19, 24, 29, 34, 39, 44, 48, 53, 57, 62, 66, 70, 75, 79, 82, 86, 90, 93,
                97, 100, 103, 106, 109, 111, 114, 116, 118, 120, 121, 123, 124, 125, 126, 127,
                127, 127, 127, 127, 127, 126, 125, 124, 123, 121, 120, 118, 116, 113, 111, 108,
                105, 101, 98, 94, 90, 86, 82, 78, 73, 68, 63, 58, 53, 48, 42, 37, 31, 25, 19,
                13, 7, 1, -5, -11, -18, -24, -30, -36, -43, -49, -55, -61, -67, -72, -78, -83,
                -88, -93, -98, -103, -107, -111, -114, -118, -121, -123, -125, -127, -128, -128,
                -128, -128, -127, -125, -122, -119, -115, -111, -105, -99, -91, -83, -74, -64,
                -53, -40, -27, -12, 4, 21, 39, 59, 81, 103,
        };

#endif /* CHEBYSHEV_5TH_256_H_ */
