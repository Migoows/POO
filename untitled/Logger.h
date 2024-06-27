//=============================================================
// --- ---

#ifndef LOGGER_HPP
#define LOGGER_HPP

#include <string>

//=============================================================
// --- Abstract base class ---

class ILogger
{
public:
    virtual void log(const std::string& message) = 0; // Pure virtual function
    virtual ~ILogger() = default;                     // Virtual destructor
};

class Logger : public ILogger
{
public:
    void log(const std::string& message) override;
    void ensureLogDirectory();
};

#endif // LOGGER_HPP
