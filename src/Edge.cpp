/*
 * The MIT License
 *
 * Copyright 2017 buele.
 *
 * Permission is hereby granted, free of charge, to any person obtaining a copy
 * of this software and associated documentation files (the "Software"), to deal
 * in the Software without restriction, including without limitation the rights
 * to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
 * copies of the Software, and to permit persons to whom the Software is
 * furnished to do so, subject to the following conditions:
 *
 * The above copyright notice and this permission notice shall be included in
 * all copies or substantial portions of the Software.
 *
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 * IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
 * AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
 * LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
 * OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
 * THE SOFTWARE.
 */

/* 
 * File:   Edge.cpp
 * Author: buele
 * 
 * Created on December 3, 2017, 10:56 PM
 */
#include <string>
#include <vector>
#include <iostream>
class State;
#include "Action.h"
#include "State.h"
#include "Edge.h"

using namespace std;

Edge::Edge(Action* source, Action* destination) {
    this->source = source;
    this->destination = destination;
}

Edge::Edge(const Edge& orig) {
}

Edge::~Edge() {
}

void Edge::Print() {
    this->source->Print();
    cout << " --> ";
    this->destination->Print();
}


