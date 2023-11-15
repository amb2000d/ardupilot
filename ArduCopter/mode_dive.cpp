#include "Copter.h"


bool ModeDive::init(bool ignore_checks)
{
    // reset flag indicating if pilot has applied roll or pitch inputs during landing
    copter.ap.land_repo_active = false;

    // this will be set true if prec land is later active
    copter.ap.prec_land_active = false;
    
    
    
    return true;
}

void ModeDive::run()
{
    if (!motors->armed()) {
        // Motors should be Stopped
        motors->set_desired_spool_state(AP_Motors::DesiredSpoolState::SHUT_DOWN);
    }
    
}
