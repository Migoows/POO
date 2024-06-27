//=============================================================
// --- Abstract Class ---

//=============================================================
// --- Libraries ---

#ifndef CLOCK_HPP
#define CLOCK_HPP

//=============================================================
// --- Bibliotecas ---

#include <string>

//=============================================================
// --- Abstract base class ---

class Clock
{
public:
    virtual void update() = 0;           // Pure virtual function
    virtual void display() const = 0;    // Pure virtual function
    virtual ~Clock() = default;          // Virtual destructor
};

#endif
// CLOCK_HPP
