// generated by Mozzi/extras/python/audio2huff.py 

#ifndef THUMB3_H_
#define THUMB3_H_

#if ARDUINO >= 100
#include "Arduino.h"
#else
#include "WProgram.h"
#endif 

#include PGMSPACE_INCLUDE_H
 

#define THUMB3_SAMPLERATE 16384
#define THUMB3_SAMPLE_BITS 8
int16_t const CONSTTABLE_STORAGE THUMB3_HUFFMAN[265] = {
262,4,0,1,0,-1,256,145,142,4,0,-3,0,3,136,130,106,52,4,0,13,0,-11,46,22,10,4,0,48,0,47,4,0,46,0,44,10,4,0,40,
0,39,4,0,37,0,36,22,10,4,0,34,0,31,4,0,28,0,25,10,4,0,23,0,-36,4,0,-38,0,-39,52,34,22,10,4,0,-41,0,-43,4,
0,-46,0,-48,10,4,0,-49,0,-50,4,0,-55,0,-61,10,4,0,50,0,43,4,0,35,0,22,16,10,4,0,19,0,-20,4,0,-24,0,-25,4,0,
29,0,27,22,19,10,4,0,24,0,21,4,0,-16,0,-17,7,4,0,-18,0,-26,0,11,0,6,4,0,4,0,5,0,2,109,0,-2,106,76,31,28,
10,4,0,10,0,8,4,0,-19,0,-15,16,0,-10,13,7,4,0,-40,0,53,0,26,4,0,18,0,-21,0,-5,43,19,0,-6,16,10,4,0,-23,0,
-27,4,0,-28,0,-29,4,0,15,0,14,22,16,4,0,-9,0,-12,10,0,-42,7,0,-30,4,0,52,0,49,4,0,12,0,-7,28,0,-4,25,13,0,
7,10,4,0,20,0,-13,4,0,-14,0,-22,10,4,0,9,0,-8,4,0,17,0,16,0,0
};
uint32_t const THUMB3_SOUNDDATA_BITS = 19728L;
uint8_t const CONSTTABLE_STORAGE THUMB3_SOUNDDATA[] = {
38,80,121,196,236,184,14,57,209,245,69,252,254,127,36,15,142,39,9,228,183,234,66,248,144,23,46,187,174,225,165,55,227,189,218,117,73,223,2,80,
127,59,220,52,18,7,82,225,42,66,234,31,201,42,236,164,41,16,72,171,180,227,9,91,185,196,255,73,71,5,35,238,142,220,146,174,26,82,127,190,
206,211,245,34,110,57,194,74,46,223,118,156,73,110,217,213,39,125,92,97,58,68,146,4,155,14,178,72,210,78,235,36,101,213,36,210,75,56,212,147,
36,137,35,14,11,238,148,82,44,201,32,72,82,183,229,241,37,222,116,117,146,56,157,43,127,187,222,117,159,137,11,128,227,41,48,234,89,23,80,138,
74,36,231,82,147,41,3,162,85,127,164,231,97,196,250,93,91,137,248,251,164,121,146,4,164,226,72,162,69,221,90,73,18,163,234,237,37,52,136,164,
187,171,119,190,137,77,36,44,148,28,5,69,202,85,113,58,201,69,40,160,253,76,224,165,184,15,138,175,213,73,233,61,193,69,40,37,187,79,187,141,
127,57,73,233,44,225,37,87,93,220,227,220,55,5,4,168,248,250,59,46,19,128,153,219,36,219,185,215,74,142,137,57,146,74,251,164,109,58,85,75,
73,201,73,35,174,2,70,146,23,30,255,125,18,163,143,119,56,41,11,226,79,187,98,148,46,195,253,252,236,164,41,48,235,63,75,249,58,83,116,127,
165,110,93,206,54,225,4,129,7,235,128,238,126,187,9,105,91,206,251,162,66,253,80,239,121,59,151,221,222,150,236,36,205,241,194,117,15,143,231,19,
137,248,130,77,59,46,186,119,217,95,75,134,248,227,145,15,247,93,216,119,187,146,4,238,231,251,224,112,93,201,202,90,87,65,248,238,80,139,206,27,
236,168,177,87,156,55,213,209,196,225,59,209,121,245,114,157,231,217,222,243,236,148,149,43,76,157,240,184,159,170,47,142,228,180,95,143,196,201,159,21,
228,92,7,199,196,129,43,84,42,131,39,75,132,180,207,57,121,209,196,232,83,166,37,203,137,217,118,28,185,40,171,200,80,126,187,221,28,211,167,85,
86,116,42,169,159,143,134,150,158,175,137,169,159,22,157,46,200,166,209,188,130,171,32,131,207,51,18,200,57,116,114,131,60,131,51,114,80,114,128,8,
166,71,69,61,147,34,81,126,37,132,233,101,234,42,153,45,56,1,152,182,160,11,206,142,94,121,128,65,2,243,206,92,188,131,66,153,121,209,3,9,
147,38,10,165,149,85,59,130,157,20,233,141,20,85,45,44,4,84,161,4,128,204,80,116,114,207,32,131,60,131,60,243,207,60,242,6,170,40,33,21,
84,83,38,76,161,84,83,62,38,69,50,154,34,169,133,65,37,144,96,0,179,151,40,60,129,7,100,30,65,231,144,162,20,50,15,54,168,172,9,128,
168,166,69,81,24,85,69,58,42,160,120,85,80,10,8,32,241,37,153,144,121,231,158,65,4,25,139,51,51,19,145,80,138,170,162,168,170,100,233,147,
34,138,170,40,162,153,50,40,168,206,0,37,158,114,243,200,60,197,7,144,114,232,232,243,151,144,37,153,153,230,109,85,16,136,80,169,147,167,75,124,
78,153,21,84,83,167,75,75,78,153,16,12,0,171,37,7,46,92,188,130,8,60,243,206,142,142,142,142,92,160,242,12,242,15,32,243,24,168,0,42,
166,75,78,157,45,58,116,201,211,162,153,45,45,50,90,116,232,162,160,0,34,73,65,231,158,116,121,231,158,114,243,151,71,71,46,92,188,243,200,32,
130,12,204,216,1,66,40,162,138,100,233,211,165,165,167,78,153,50,100,201,211,167,75,78,138,168,28,100,160,243,151,156,185,121,7,156,185,114,229,209,
203,151,156,160,130,8,32,200,32,76,40,1,85,81,76,153,58,90,116,233,210,211,38,69,58,100,201,105,211,38,69,84,68,229,139,60,243,206,92,188,
243,151,156,185,114,229,231,158,121,4,16,102,102,98,97,85,84,42,42,138,100,201,211,167,78,153,50,101,69,20,201,147,38,69,20,64,231,50,200,32,
242,14,80,65,7,158,65,231,47,60,130,12,200,49,65,152,157,64,0,85,85,20,201,147,34,138,101,84,81,69,20,81,69,20,66,128,32,102,197,153,
144,102,65,7,144,65,228,25,6,100,25,6,100,11,30,56,133,85,85,69,21,69,81,85,85,69,81,84,66,128,4,70,73,44,196,179,50,12,131,32,
89,139,49,100,24,147,30,112,21,85,84,40,1,85,85,21,10,0,1,64,28,153,155,22,100,25,139,22,44,204,131,49,105,206,112,20,42,133,85,85,
85,85,69,66,168,80,160,124,146,73,44,204,200,50,12,204,89,153,153,152,177,62,48,2,170,170,162,170,138,170,162,170,170,170,0,0,12,146,88,177,
44,204,200,32,200,49,102,44,204,89,137,248,194,133,80,170,138,170,42,168,170,170,168,10,0,30,73,102,98,204,204,204,131,32,204,204,73,98,73,152,
128,160,42,132,85,85,85,85,21,85,80,160,15,204,150,102,100,25,6,102,102,100,25,6,98,76,252,66,168,85,85,69,85,20,85,21,80,170,170,20,
1,153,36,146,89,153,4,16,100,16,100,25,153,6,102,98,73,241,10,2,170,42,168,162,138,162,138,40,170,170,170,170,133,142,73,36,179,51,50,12,
130,8,32,130,12,131,51,51,49,99,56,128,20,42,170,162,168,162,168,162,138,42,170,170,20,0,0,146,73,37,139,22,100,25,4,25,144,44,204,197,
152,153,62,33,64,80,161,85,85,21,69,85,66,133,10,0,3,153,36,146,89,139,50,12,204,204,204,197,137,98,76,248,0,0,161,66,170,42,138,162,
161,85,84,40,1,99,153,44,75,22,102,65,153,6,102,100,11,49,98,88,153,196,0,0,80,170,168,170,42,138,170,162,170,161,85,64,3,228,146,197,
153,153,6,65,6,65,6,65,153,153,153,139,18,124,0,0,80,138,162,138,162,138,162,138,42,138,162,170,170,160,1,201,36,179,51,32,200,32,130,8,
32,130,12,200,51,51,49,36,200,128,0,80,168,170,42,138,42,138,42,138,162,170,170,160,40,140,203,18,204,204,200,50,12,130,8,51,51,51,51,22,
38,112,32,40,85,85,85,69,85,21,69,81,85,80,160,0,7,54,37,139,51,50,12,131,32,200,50,12,89,139,18,103,16,20,40,85,84,85,81,85,
69,85,81,80,160,0,49,50,75,49,102,102,102,102,100,25,153,152,150,36,206,68,66,128,161,85,85,66,170,170,168,85,0,64,254,73,37,139,18,204,
89,139,22,36,180,147,63,129,0,40,10,2,128,20,5,0,8,227,153,50,73,36,181,173,36,147,60,227,196,64,16,0,136,16,35,25,252,201,147,36,
204,204,231,254,49,136,128,4,68,68,12,126,121,147,36,146,73,146,100,204,254,49,16,32,5,0,1,0,64,17,252,228,201,36,146,88,146,100,147,51,
60,68,68,0,0,0,44,0,4,1,143,156,201,146,75,18,73,36,146,100,207,196,64,0,0,2,133,0,0,0,17,137,201,146,88,146,196,177,98,196,
146,76,231,136,0,40,80,20,40,85,80,160,40,16,63,50,75,22,44,197,152,179,49,102,44,73,153,241,0,0,170,21,84,42,170,170,168,80,160,1,
30,100,150,44,204,197,153,153,153,153,153,137,99,51,196,66,133,10,170,170,21,85,85,84,40,80,4,121,146,73,102,44,204,204,89,152,179,22,36,207,
226,0,1,66,133,10,161,66,128,160,0,35,243,36,146,88,177,44,88,150,37,137,38,127,24,0,0,160,40,80,160,40,0,0,35,243,50,73,98,88,
177,98,75,18,73,36,255,129,0,5,1,64,80,160,5,0,1,3,249,153,36,150,37,137,44,73,98,73,38,103,227,2,0,80,20,5,0,40,0,40,
129,143,153,146,88,146,88,146,196,177,36,147,51,248,128,42,0,10,0,10,0,0,1,143,230,73,36,146,73,36,146,100,147,63,227,2,0,0,0,0,
2,0,24,249,204,147,36,146,73,36,147,38,121,24,192,128,0,0,5,2,0,16,49,156,201,146,73,98,73,44,76,147,57,241,16,0,16,2,128,0,
0,64,140,121,201,146,76,146,73,36,147,51,159,226,4,8,0,64,2,4,99,254,102,76,153,38,76,201,231,142,48,32,1,2,4,68,127,57,153,50,
73,50,76,206,121,28,64,136,0,64,0,8,17,24,231,51,38,73,50,73,36,153,51,159,226,34,0,16,0,0,1,0,68,99,156,201,146,100,146,73,
36,153,51,63,196,68,1,0,0,0,128,34,49,249,201,153,38,73,38,73,153,207,248,136,129,0,64,2,4,68,113,158,76,201,146,73,36,153,38,115,
252,64,128,0,0,0,0,0,1,24,252,201,36,146,73,36,177,36,146,73,156,241,128,33,64,0,40,10,0,80,4,8,226,114,100,146,196,146,196,177,
44,73,38,78,124,64,0,0,2,128,20,40,1,64,129,31,153,50,75,18,75,18,88,146,73,153,228,112,32,0,0,80,0,0,0,4,99,230,100,147,
105,36,146,73,50,103,254,34,4,0,0,16,0,16,35,131,230,100,201,36,146,73,146,102,103,199,16,32,0,0,128,0,16,35,31,57,147,36,146,100,
146,100,204,231,199,17,16,4,8,16,34,35,31,231,57,147,50,102,102,115,255,227,17,24,136,198,49,252,252,230,115,156,243,252,120,227,17,199,199,243,
206,121,204,231,243,248,227,24,140,68,71,31,252,230,102,102,76,204,231,255,136,136,136,16,34,6,49,249,204,204,153,147,38,103,63,241,136,136,129,17,
17,31,254,115,38,102,102,103,63,248,196,68,8,129,24,143,252,204,204,153,38,76,204,231,227,17,2,0,16,0,129,17,143,204,204,153,36,153,36,153,
51,159,227,16,32,8,0,8,2,34,49,231,153,147,36,201,38,76,204,231,241,136,129,2,0,129,17,24,252,231,51,38,76,204,204,249,227,140,68,68,
68,70,49,255,57,204,204,204,206,121,255,28,70,34,34,34,49,255,231,51,51,51,51,51,207,241,196,68,68,68,12,71,31,207,51,51,51,51,51,207,
255,24,196,70,34,35,30,62,124,230,115,51,156,243,254,56,198,49,140,113,255,158,121,206,121,252,241,241,199,24,227,227,207,231,156,243,207,159,248,241,
198,49,199,31,254,121,231,57,231,207,248,248,227,28,120,255,252,252,243,231,255,255,199,227,241,255,252,254,127,159,255,241,248,248,255,193,255,207,159,63,
63,254,62,60,120,241,255,252,249,243,231,231,255,227,241,227,199,241,254,127,159,159,159,255,255,143,143,199,255,255,63,159,207,255,252,127,31,143,255,254,
127,63,63,255,255,143,143,143,255,255,207,207,207,255,255,241,241,248,255,255,243,252,255,63,255,227,254,63,254,60,255,254,127,255,255,255,199,255,255,255,
249,255,255,255,255,31,255,255,255,249,255,255,255,255,227,255,255,255,255,159,255,255,255,248,32,137
};
#endif /* THUMB3_H_ */
