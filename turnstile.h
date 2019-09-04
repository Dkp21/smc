/*
 * =====================================================================================
 *
 *       Filename:  turnstile.h
 *
 * =====================================================================================
 */
#ifndef __TURNSTILE_H__
#define __TURNSTILE_H__

#include <iostream>
#include <vector>
#include <list>

#include "turnstile_sm.h" // gen'd file

// fwd decls
class TurnStile
{
public:

    TurnStile() : _fsm(*this) {};
    ~TurnStile() {};

    // state machine methods
    void coin(bool is_valid)
    {
        _fsm.coin(is_valid);
    };

    void pass(void)
    {
        _fsm.pass();
    };

    const char *getStateName()
    {
        return _fsm.getState().getName();
    };

    void unlock(void)
    {
        std::cout << "Turnstile unlocked" << std::endl;
    };

    void alarm(void)
    {
        std::cout << "Unauthorized turnstile access" << std::endl;
    };

    void lock(void)
    {
        std::cout << "Turnstile locked" << std::endl;
    };

    void greeting(void)
    {
        std::cout << "Thank you" << std::endl;
    };

    void unsupported(void)
    {
        std::cout << "Unsupported state transition" << std::endl;
    };

protected:

private:
    turnstileContext _fsm;
};

#endif // __TURNSTILE_H__
