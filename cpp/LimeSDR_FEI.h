#ifndef LIMESDR_FEI_I_IMPL_H
#define LIMESDR_FEI_I_IMPL_H

#include "LimeSDR_FEI_base.h"
#include "lime/LimeSuite.h"
#include <boost/lexical_cast.hpp>
#include <math.h>

class LimeSDR_FEI_i : public LimeSDR_FEI_base
{
    ENABLE_LOGGING
    public:
        LimeSDR_FEI_i(char *devMgr_ior, char *id, char *lbl, char *sftwrPrfl);
        LimeSDR_FEI_i(char *devMgr_ior, char *id, char *lbl, char *sftwrPrfl, char *compDev);
        LimeSDR_FEI_i(char *devMgr_ior, char *id, char *lbl, char *sftwrPrfl, CF::Properties capacities);
        LimeSDR_FEI_i(char *devMgr_ior, char *id, char *lbl, char *sftwrPrfl, CF::Properties capacities, char *compDev);
        ~LimeSDR_FEI_i();

        void constructor();

        int serviceFunction();

    protected:
        std::string getTunerType(const std::string& allocation_id);
        bool getTunerDeviceControl(const std::string& allocation_id);
        std::string getTunerGroupId(const std::string& allocation_id);
        std::string getTunerRfFlowId(const std::string& allocation_id);
        double getTunerCenterFrequency(const std::string& allocation_id);
        void setTunerCenterFrequency(const std::string& allocation_id, double freq);
        double getTunerBandwidth(const std::string& allocation_id);
        void setTunerBandwidth(const std::string& allocation_id, double bw);
        bool getTunerAgcEnable(const std::string& allocation_id);
        void setTunerAgcEnable(const std::string& allocation_id, bool enable);
        float getTunerGain(const std::string& allocation_id);
        void setTunerGain(const std::string& allocation_id, float gain);
        long getTunerReferenceSource(const std::string& allocation_id);
        void setTunerReferenceSource(const std::string& allocation_id, long source);
        bool getTunerEnable(const std::string& allocation_id);
        void setTunerEnable(const std::string& allocation_id, bool enable);
        double getTunerOutputSampleRate(const std::string& allocation_id);
        void setTunerOutputSampleRate(const std::string& allocation_id, double sr);
        std::string get_rf_flow_id(const std::string& port_name);
        void set_rf_flow_id(const std::string& port_name, const std::string& id);
        frontend::RFInfoPkt get_rfinfo_pkt(const std::string& port_name);
        void set_rfinfo_pkt(const std::string& port_name, const frontend::RFInfoPkt& pkt);

    private:
        ////////////////////////////////////////
        // Required device specific functions // -- to be implemented by device developer
        ////////////////////////////////////////

        // these are pure virtual, must be implemented here
        void deviceEnable(frontend_tuner_status_struct_struct &fts, size_t tuner_id);
        void deviceDisable(frontend_tuner_status_struct_struct &fts, size_t tuner_id);
        bool deviceSetTuning(const frontend::frontend_tuner_allocation_struct &request, frontend_tuner_status_struct_struct &fts, size_t tuner_id);
        bool deviceDeleteTuning(frontend_tuner_status_struct_struct &fts, size_t tuner_id);

        void getChannelProperties(int num_channels, bool transmit);
        void getChannelStatus(int channel, bool transmit);
        void getAdvancedControlStatus(int channel, bool transmit);
        void allocateLimeSDR(int channel, bool transmit, double freq, double sample_rate, int oversample_ratio, double bandwidth, double gain);
        void Error(std::string err);
        bulkio::OutFloatStream outputStream;

};

#endif // LIMESDR_FEI_I_IMPL_H
