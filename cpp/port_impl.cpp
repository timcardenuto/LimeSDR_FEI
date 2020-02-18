/*******************************************************************************************

    AUTO-GENERATED CODE. DO NOT MODIFY

    Source: LimeSDR_FEI.spd.xml

*******************************************************************************************/

#include "LimeSDR_FEI.h"


/******************************************
 *
 * Logging:
 *      To log, use the _portLog member (not available in the constructor)
 *
 *      For example,
 *          RH_DEBUG(_portLog, "this is a debug message");
 *
 ******************************************/

// ----------------------------------------------------------------------------------------
// FRONTEND_RFInfo_In_i definition
// ----------------------------------------------------------------------------------------
FRONTEND_RFInfo_In_i::FRONTEND_RFInfo_In_i(std::string port_name, LimeSDR_FEI_base *_parent) : 
Port_Provides_base_impl(port_name)
{
    parent = static_cast<LimeSDR_FEI_i *> (_parent);
}

FRONTEND_RFInfo_In_i::~FRONTEND_RFInfo_In_i()
{
}

char* FRONTEND_RFInfo_In_i::rf_flow_id()
{
    boost::mutex::scoped_lock lock(portAccess);
    CORBA::String_var retval = CORBA::string_dup("");
    // TODO: Fill in this function
    return retval._retn();
}

void FRONTEND_RFInfo_In_i::rf_flow_id(const char* data)
{
    boost::mutex::scoped_lock lock(portAccess);
    // TODO: Fill in this function
}

FRONTEND::RFInfoPkt* FRONTEND_RFInfo_In_i::rfinfo_pkt()
{
    boost::mutex::scoped_lock lock(portAccess);
    FRONTEND::RFInfoPkt_var retval = new FRONTEND::RFInfoPkt();
    // TODO: Fill in this function
    return retval._retn();
}

void FRONTEND_RFInfo_In_i::rfinfo_pkt(const FRONTEND::RFInfoPkt& data)
{
    boost::mutex::scoped_lock lock(portAccess);
    // TODO: Fill in this function
}

std::string FRONTEND_RFInfo_In_i::getRepid() const
{
    return FRONTEND::RFInfo::_PD_repoId;
}
// ----------------------------------------------------------------------------------------
// FRONTEND_DigitalTuner_In_i definition
// ----------------------------------------------------------------------------------------
FRONTEND_DigitalTuner_In_i::FRONTEND_DigitalTuner_In_i(std::string port_name, LimeSDR_FEI_base *_parent) : 
Port_Provides_base_impl(port_name)
{
    parent = static_cast<LimeSDR_FEI_i *> (_parent);
}

FRONTEND_DigitalTuner_In_i::~FRONTEND_DigitalTuner_In_i()
{
}

char* FRONTEND_DigitalTuner_In_i::getTunerType(const char* id)
{
    boost::mutex::scoped_lock lock(portAccess);
    CORBA::String_var retval = CORBA::string_dup("");
    // TODO: Fill in this function
    return retval._retn();
}

CORBA::Boolean FRONTEND_DigitalTuner_In_i::getTunerDeviceControl(const char* id)
{
    boost::mutex::scoped_lock lock(portAccess);
    CORBA::Boolean retval = 0;
    // TODO: Fill in this function
    return retval;
}

char* FRONTEND_DigitalTuner_In_i::getTunerGroupId(const char* id)
{
    boost::mutex::scoped_lock lock(portAccess);
    CORBA::String_var retval = CORBA::string_dup("");
    // TODO: Fill in this function
    return retval._retn();
}

char* FRONTEND_DigitalTuner_In_i::getTunerRfFlowId(const char* id)
{
    boost::mutex::scoped_lock lock(portAccess);
    CORBA::String_var retval = CORBA::string_dup("");
    // TODO: Fill in this function
    return retval._retn();
}

CF::Properties* FRONTEND_DigitalTuner_In_i::getTunerStatus(const char* id)
{
    boost::mutex::scoped_lock lock(portAccess);
    CF::Properties_var retval = new CF::Properties();
    // TODO: Fill in this function
    return retval._retn();
}

void FRONTEND_DigitalTuner_In_i::setTunerCenterFrequency(const char* id, CORBA::Double freq)
{
    boost::mutex::scoped_lock lock(portAccess);
    // TODO: Fill in this function
}

CORBA::Double FRONTEND_DigitalTuner_In_i::getTunerCenterFrequency(const char* id)
{
    boost::mutex::scoped_lock lock(portAccess);
    CORBA::Double retval = 0;
    // TODO: Fill in this function
    return retval;
}

void FRONTEND_DigitalTuner_In_i::setTunerBandwidth(const char* id, CORBA::Double bw)
{
    boost::mutex::scoped_lock lock(portAccess);
    // TODO: Fill in this function
}

CORBA::Double FRONTEND_DigitalTuner_In_i::getTunerBandwidth(const char* id)
{
    boost::mutex::scoped_lock lock(portAccess);
    CORBA::Double retval = 0;
    // TODO: Fill in this function
    return retval;
}

void FRONTEND_DigitalTuner_In_i::setTunerAgcEnable(const char* id, CORBA::Boolean enable)
{
    boost::mutex::scoped_lock lock(portAccess);
    // TODO: Fill in this function
}

CORBA::Boolean FRONTEND_DigitalTuner_In_i::getTunerAgcEnable(const char* id)
{
    boost::mutex::scoped_lock lock(portAccess);
    CORBA::Boolean retval = 0;
    // TODO: Fill in this function
    return retval;
}

void FRONTEND_DigitalTuner_In_i::setTunerGain(const char* id, CORBA::Float gain)
{
    boost::mutex::scoped_lock lock(portAccess);
    // TODO: Fill in this function
}

CORBA::Float FRONTEND_DigitalTuner_In_i::getTunerGain(const char* id)
{
    boost::mutex::scoped_lock lock(portAccess);
    CORBA::Float retval = 0;
    // TODO: Fill in this function
    return retval;
}

void FRONTEND_DigitalTuner_In_i::setTunerReferenceSource(const char* id, CORBA::Long source)
{
    boost::mutex::scoped_lock lock(portAccess);
    // TODO: Fill in this function
}

CORBA::Long FRONTEND_DigitalTuner_In_i::getTunerReferenceSource(const char* id)
{
    boost::mutex::scoped_lock lock(portAccess);
    CORBA::Long retval = 0;
    // TODO: Fill in this function
    return retval;
}

void FRONTEND_DigitalTuner_In_i::setTunerEnable(const char* id, CORBA::Boolean enable)
{
    boost::mutex::scoped_lock lock(portAccess);
    // TODO: Fill in this function
}

CORBA::Boolean FRONTEND_DigitalTuner_In_i::getTunerEnable(const char* id)
{
    boost::mutex::scoped_lock lock(portAccess);
    CORBA::Boolean retval = 0;
    // TODO: Fill in this function
    return retval;
}

void FRONTEND_DigitalTuner_In_i::setTunerOutputSampleRate(const char* id, CORBA::Double sr)
{
    boost::mutex::scoped_lock lock(portAccess);
    // TODO: Fill in this function
}

CORBA::Double FRONTEND_DigitalTuner_In_i::getTunerOutputSampleRate(const char* id)
{
    boost::mutex::scoped_lock lock(portAccess);
    CORBA::Double retval = 0;
    // TODO: Fill in this function
    return retval;
}

std::string FRONTEND_DigitalTuner_In_i::getRepid() const
{
    return FRONTEND::DigitalTuner::_PD_repoId;
}

