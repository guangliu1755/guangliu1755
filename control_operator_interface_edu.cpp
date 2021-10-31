#include "control_operator_interface_edu.hpp"

#include "tap/algorithms/math_user_utils.hpp"
#include "tap/drivers.hpp"
#include "tap/drivers_singleton.hpp"

namespace control
{
float ControlOperatorInterfaceEdu::getChassisLeftTankInput()
{
    drivers -> remote.getChannel(Remote::Channel::LEFT_VERTICAL);
    return 0.0f;
}

float ControlOperatorInterfaceEdu::getChassisRightTankInput()
{
    drivers -> remote.getChannel(Remote::Channel::RIGHT_VERTICAL); 
    return 0.0f;
}
}  // namespace control
