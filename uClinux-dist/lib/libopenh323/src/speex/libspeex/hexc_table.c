/* Copyright (C) 2002 Jean-Marc Valin 
   File: hexc_table.c
   Codebook for high-band excitation in SB-CELP mode (8000 bps with sign)

   Redistribution and use in source and binary forms, with or without
   modification, are permitted provided that the following conditions
   are met:
   
   - Redistributions of source code must retain the above copyright
   notice, this list of conditions and the following disclaimer.
   
   - Redistributions in binary form must reproduce the above copyright
   notice, this list of conditions and the following disclaimer in the
   documentation and/or other materials provided with the distribution.
   
   - Neither the name of the Xiph.org Foundation nor the names of its
   contributors may be used to endorse or promote products derived from
   this software without specific prior written permission.
   
   THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS
   ``AS IS'' AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT
   LIMITED TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR
   A PARTICULAR PURPOSE ARE DISCLAIMED.  IN NO EVENT SHALL THE FOUNDATION OR
   CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL,
   EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO,
   PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR
   PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF
   LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING
   NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF THIS
   SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
*/


signed char hexc_table[1024] = {
-27,19,-18,5,-10,-7,15,-11,
7,-20,20,-19,2,-32,24,15,
4,-10,-48,19,23,-24,-26,44,
45,25,-28,23,-15,15,-31,27,
-12,-27,-28,11,19,2,-5,-7,
69,-33,-15,51,-33,20,-5,4,
22,-13,-19,-17,50,34,-45,7,
15,-10,27,-36,4,49,-68,39,
-19,-22,-19,32,-20,13,-26,33,
55,-23,1,-2,-14,23,9,-16,
-7,-6,-24,31,4,-28,12,9,
29,45,22,37,4,-1,5,-22,
-9,6,-61,-11,47,-26,48,-24,
-5,1,0,7,-6,-10,-2,10,
2,-7,15,-3,-21,11,2,0,
-3,13,5,95,-64,-12,-16,-1,
-51,8,20,-26,18,-35,35,-18,
11,-32,48,-54,21,-3,39,-28,
-5,2,-35,11,-26,-19,52,-4,
16,0,37,-24,-21,-34,-4,47,
-8,14,7,-1,7,20,-22,-11,
127,6,11,27,-6,16,-1,4,
-1,7,-6,6,-22,20,-88,92,
1,13,-5,28,-13,29,-75,17,
3,-6,-12,-24,-18,-29,30,83,
12,-37,10,-20,66,-31,30,-33,
32,62,-38,-26,-23,12,11,11,
7,30,4,1,-31,23,3,-8,
-12,-1,-13,-5,15,6,17,-20,
-50,-2,-10,-18,22,-8,-1,-6,
7,6,-9,7,-17,46,-28,-2,
-18,-24,42,-23,32,-5,-15,-3,
-31,19,-29,28,-25,8,21,-22,
0,-3,13,-42,73,-76,60,-28,
-6,5,-14,8,-27,14,-45,127,
21,9,4,23,-67,-44,65,-1,
-5,-7,5,-20,88,-19,-31,-10,
14,-93,-2,11,-11,-9,11,10,
-13,1,-13,13,-30,91,-64,14,
-8,-7,22,-14,5,2,-3,1,
2,-71,63,18,-23,23,-17,3,
71,15,2,-36,-14,-3,23,5,
-6,-15,-75,33,36,6,-3,-6,
1,1,-1,4,-3,4,-1,-1,
11,-55,-43,-11,26,15,29,-22,
1,4,15,-25,26,-12,3,-3,
12,-44,75,-25,4,-17,7,4,
-96,7,-8,36,-34,7,-11,6,
-37,-1,24,-6,-6,13,11,-27,
40,3,34,-25,27,-33,17,-9,
27,8,-6,14,-55,9,0,32,
51,67,7,11,5,-15,-4,-5,
22,-18,31,8,3,-18,33,-37,
80,-16,-38,24,26,-1,-19,8,
-69,47,-43,19,-39,33,-30,17,
10,10,18,13,7,-8,-37,-12,
-20,-21,-3,-4,0,-2,6,1,
-25,22,-16,-48,17,-19,-11,52,
33,43,-9,-3,41,-17,-23,7,
-32,32,3,-38,24,13,-34,14,
-35,-18,-12,6,-5,37,31,-41,
25,3,4,-8,2,-3,-7,4,
8,-7,46,24,-48,3,30,-33,
6,0,5,14,-1,-19,-55,56,
-27,34,-12,-6,1,8,-8,7,
14,-5,5,-9,-10,-73,100,-4,
-4,2,-11,-7,-6,5,-1,19,
45,17,-31,23,-11,8,24,-29,
-62,-49,-8,17,26,15,-5,-17,
75,-53,57,-16,-1,14,-12,11,
-5,-2,-5,6,-21,79,6,-61,
-18,-41,37,-27,-21,22,-23,30,
-12,-38,-1,58,-36,-1,14,-7,
15,-7,-16,-5,-6,3,9,1,
60,8,-22,35,-1,-31,18,2,
105,48,57,33,33,16,-6,10,
-37,-37,-48,-4,-3,23,3,10,
-2,-3,1,26,-12,-2,4,-16,
-23,41,28,4,-18,-27,20,-9,
0,-36,2,28,-1,-19,-8,16,
-117,39,-28,-12,2,-8,-12,6,
37,-29,56,-61,52,-49,51,-26,
-27,8,10,-34,-9,-5,18,6,
-13,68,-32,15,-15,-31,12,6,
6,9,11,3,10,-11,13,-59,
42,11,-34,-29,31,-3,1,3,
2,1,-3,5,-9,16,-21,15,
6,-6,14,-8,49,-21,-77,48,
9,-38,-24,-42,-23,19,21,32,
27,-12,17,-38,11,6,13,-7,
12,25,-18,-17,12,-29,31,1,
27,43,-17,-52,9,49,-11,-10,
4,0,0,1,-5,-11,79,-58,
-20,12,10,-3,10,-45,-10,33,
4,-36,-7,17,-20,20,0,-2,
-8,8,55,35,9,-34,-16,-16,
-44,75,-63,49,-30,1,4,-4,
-42,62,-41,-24,48,-35,22,-16,
-40,6,2,4,-32,18,-25,30,
-24,-2,12,18,-39,-39,13,40,
-20,6,-26,-19,87,-61,23,-11,
37,-26,13,11,-22,44,-38,15,
0,-16,3,-46,-4,78,-16,-4,
-40,6,32,-4,-27,37,-24,-6,
-78,-51,25,-12,-10,-19,16,2,
15,16,-10,-36,-25,26,43,-14,
-25,10,-45,69,-4,-33,36,-34,
21,-19,-8,3,14,-3,15,-3,
11,27,-78,-2,-20,41,-8,13,
2,-19,14,-10,9,-3,10,-14,
2,-12,88,-69,-18,21,-7,-1,
-52,3,-19,15,28,-23,15,-14,
-65,-34,47,-61,32,-14,5,0,
56,-30,27,7,21,-21,2,0,
1,27,13,-47,-46,20,-2,38,
30,2,11,3,-5,-6,8,-5,
5,-4,9,-1,24,-10,31,-93,
39,3,13,2,27,-3,-10,-17,
-5,14,-51,76,-68,38,-5,-9,
-17,45,9,31,-15,-9,-39,18,
-10,0,11,8,-21,-13,32,-12,
13,33,47,-85,15,-5,-4,13,
1,29,-37,-10,18,9,-2,-8,
-66,66,13,-32,-29,12,3,-2,
-6,0,-21,16,-62,78,3,-10,
-97,-56,-24,-27,-26,-10,-14,10,
16,-24,42,-16,-21,32,7,-19,
7,7,1,21,32,-62,32,-35};
