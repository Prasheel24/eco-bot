/************************************************************************
BSD 3-Clause License

Copyright (c) 2019, Raj Shinde
Copyright (c) 2019, Prasheel Renkuntla
All rights reserved.

Redistribution and use in source and binary forms, with or without
modification, are permitted provided that the following conditions are met:

1. Redistributions of source code must retain the above copyright notice, this
   list of conditions and the following disclaimer.

2. Redistributions in binary form must reproduce the above copyright notice,
   this list of conditions and the following disclaimer in the documentation
   and/or other materials provided with the distribution.

3. Neither the name of the copyright holder nor the names of its
   contributors may be used to endorse or promote products derived from
   this software without specific prior written permission.

THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS"
AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE
IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE
DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT HOLDER OR CONTRIBUTORS BE LIABLE
FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL
DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR
SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER
CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY,
OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE
OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
 *************************************************************************/

/**
 *  @copyright BSD 3-Clause License 
 *  @copyright Copyright © 2019 Raj Shinde, Prasheel Renkuntla
 *  @file    gridSquare.cpp
 *  @author  Raj Shinde
 *  @author  Prasheel Renkuntla
 *  @date    12/09/2019
 *  @version 3.0
 *  @brief   Final Project - ecobot (A trash Collecting Robot)
 *  @section Implementation file for GridSquare class
 */

#include <stdio.h>
#include <set>
#include <numeric>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>
#include <sys/types.h>
#include <sys/socket.h>
#include <netinet/in.h>
#include <netdb.h>
#include <fstream>
#include <iostream>
#include <iomanip>
#include <iterator>
#include <algorithm>
#include <string>

#include "gridSquare.hpp"

GridSquare::GridSquare() {
  currentGridSquare = 0;
  fCost = 0.0;
}

GridSquare::~GridSquare() {
  currentGridSquare = 0;
  fCost = 0.0;
}

int GridSquare::getCurrentGridSquare() {
  return 1
}

float GridSquare::getFCost() {
  return 1;
}