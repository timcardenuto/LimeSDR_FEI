#ifndef PORT_H
#define PORT_H

#include <boost/thread/locks.hpp>
#include <ossie/Port_impl.h>
#include <ossie/debug.h>
#include <FRONTEND/RFInfo.h>
#include <FRONTEND/TunerControl.h>

class LimeSDR_FEI_base;
class LimeSDR_FEI_i;

#define CORBA_MAX_TRANSFER_BYTES omniORB::giopMaxMsgSize()

// ----------------------------------------------------------------------------------------
// FRONTEND_RFInfo_In_i declaration
// ----------------------------------------------------------------------------------------
class FRONTEND_RFInfo_In_i : public POA_FRONTEND::RFInfo, public Port_Provides_base_impl
{
    public:
        FRONTEND_RFInfo_In_i(std::string port_name, LimeSDR_FEI_base *_parent);
        ~FRONTEND_RFInfo_In_i();

        char* rf_flow_id();
        void rf_flow_id(const char* data);
        FRONTEND::RFInfoPkt* rfinfo_pkt();
        void rfinfo_pkt(const FRONTEND::RFInfoPkt& data);
        std::string getRepid() const;

    protected:
        LimeSDR_FEI_i *parent;
        boost::mutex portAccess;
};
// ----------------------------------------------------------------------------------------
// FRONTEND_DigitalTuner_In_i declaration
// ----------------------------------------------------------------------------------------
class FRONTEND_DigitalTuner_In_i : public POA_FRONTEND::DigitalTuner, public Port_Provides_base_impl
{
    public:
        FRONTEND_DigitalTuner_In_i(std::string port_name, LimeSDR_FEI_base *_parent);
        ~FRONTEND_DigitalTuner_In_i();

        char* getTunerType(const char* id);
        CORBA::Boolean getTunerDeviceControl(const char* id);
        char* getTunerGroupId(const char* id);
        char* getTunerRfFlowId(const char* id);
        CF::Properties* getTunerStatus(const char* id);
        void setTunerCenterFrequency(const char* id, CORBA::Double freq);
        CORBA::Double getTunerCenterFrequency(const char* id);
        void setTunerBandwidth(const char* id, CORBA::Double bw);
        CORBA::Double getTunerBandwidth(const char* id);
        void setTunerAgcEnable(const char* id, CORBA::Boolean enable);
        CORBA::Boolean getTunerAgcEnable(const char* id);
        void setTunerGain(const char* id, CORBA::Float gain);
        CORBA::Float getTunerGain(const char* id);
        void setTunerReferenceSource(const char* id, CORBA::Long source);
        CORBA::Long getTunerReferenceSource(const char* id);
        void setTunerEnable(const char* id, CORBA::Boolean enable);
        CORBA::Boolean getTunerEnable(const char* id);
        void setTunerOutputSampleRate(const char* id, CORBA::Double sr);
        CORBA::Double getTunerOutputSampleRate(const char* id);
        std::string getRepid() const;

    protected:
        LimeSDR_FEI_i *parent;
        boost::mutex portAccess;
};
#endif // PORT_H
