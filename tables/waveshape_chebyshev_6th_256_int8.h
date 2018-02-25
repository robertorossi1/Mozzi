#ifndef CHEBYSHEV_6TH_256_H_
#define CHEBYSHEV_6TH_256_H_

#if ARDUINO >= 100
 #include "Arduino.h"
#else
 #include "WProgram.h"
#endif
#include PGMSPACE_INCLUDE_H

/* table for waveshaper using chebyshev polynomials
*/

#define CHEBYSHEV_6TH_256_NUM_CELLS 256
const int8_t CONSTTABLE_STORAGE CHEBYSHEV_6TH_256_DATA [] =
        {
                127, 93, 62, 34, 8,
                -15, -35, -53, -69, -82, -94, -103, -111, -118, -122, -126, -128, -128, -128,
                -127, -124, -121, -117, -112, -107, -101, -94, -87, -80, -72, -64, -56, -47,
                -39, -30, -22, -13, -5, 4, 12, 20, 28, 36, 44, 51, 59, 65, 72, 78, 84, 90, 95,
                100, 104, 108, 112, 115, 118, 121, 123, 124, 126, 127, 127, 127, 127, 127, 126,
                125, 123, 121, 119, 116, 113, 110, 107, 103, 99, 95, 90, 85, 80, 75, 70, 65, 59,
                53, 48, 42, 36, 30, 24, 17, 11, 5, -1, -7, -14, -20, -26, -32, -38, -44, -49,
                -55, -60, -66, -71, -76, -81, -85, -90, -94, -98, -102, -105, -109, -112, -115,
                -117, -120, -122, -123, -125, -126, -127, -128, -128, -128, -128, -128, -127,
                -126, -125, -123, -122, -120, -117, -115, -112, -109, -105, -102, -98, -94, -90,
                -85, -81, -76, -71, -66, -60, -55, -49, -44, -38, -32, -26, -20, -14, -7, -1, 5,
                11, 17, 24, 30, 36, 42, 48, 53, 59, 65, 70, 75, 80, 85, 90, 95, 99, 103, 107,
                110, 113, 116, 119, 121, 123, 125, 126, 127, 127, 127, 127, 127, 126, 124, 123,
                121, 118, 115, 112, 108, 104, 100, 95, 90, 84, 78, 72, 65, 59, 51, 44, 36, 28,
                20, 12, 4, -5, -13, -22, -30, -39, -47, -56, -64, -72, -80, -87, -94, -101,
                -107, -112, -117, -121, -124, -127, -128, -128, -128, -126, -122, -118, -111,
                -103, -94, -82, -69, -53, -35, -15, 8, 34, 62, 93,
        };

#endif /* CHEBYSHEV_6TH_256_H_ */
