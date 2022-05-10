#pragma once
#include "Inventor.h"
struct Node {
Node(Inventor type);
Inventor data;
Node *next;
};