#ifndef LIMESDR_FEI_BASE_IMPL_BASE_H
#define LIMESDR_FEI_BASE_IMPL_BASE_H

#include <boost/thread.hpp>
#include <frontend/frontend.h>
#include <ossie/ThreadedComponent.h>

#include <frontend/frontend.h>
#include <bulkio/bulkio.h>
#include "struct_props.h"

#define BOOL_VALUE_HERE 0

class LimeSDR_FEI_base : public frontend::FrontendTunerDevice<frontend_tuner_status_struct_struct>, public virtual frontend::digital_tuner_delegation, public virtual frontend::rfinfo_delegation, protected ThreadedComponent
{
    public:
        LimeSDR_FEI_base(char *devMgr_ior, char *id, char *lbl, char *sftwrPrfl);
        LimeSDR_FEI_base(char *devMgr_ior, char *id, char *lbl, char *sftwrPrfl, char *compDev);
        LimeSDR_FEI_base(char *devMgr_ior, char *id, char *lbl, char *sftwrPrfl, CF::Properties capacities);
        LimeSDR_FEI_base(char *devMgr_ior, char *id, char *lbl, char *sftwrPrfl, CF::Properties capacities, char *compDev);
        ~LimeSDR_FEI_base();

        void start() throw (CF::Resource::StartError, CORBA::SystemException);

        void stop() throw (CF::Resource::StopError, CORBA::SystemException);

        void releaseObject() throw (CF::LifeCycle::ReleaseError, CORBA::SystemException);

        void loadProperties();
        void matchAllocationIdToStreamId(const std::string allocation_id, const std::string stream_id, const std::string port_name="");
        void removeAllocationIdRouting(const size_t tuner_id);
        void removeStreamIdRouting(const std::string stream_id, const std::string allocation_id="");

        virtual CF::Properties* getTunerStatus(const std::string& allocation_id);
        virtual void assignListener(const std::string& listen_alloc_id, const std::string& allocation_id);
        virtual void removeListener(const std::string& listen_alloc_id);
        void frontendTunerStatusChanged(const std::vector<frontend_tuner_status_struct_struct>* oldValue, const std::vector<frontend_tuner_status_struct_struct>* newValue);

    protected:
        void connectionTableChanged(const std::vector<connection_descriptor_struct>* oldValue, const std::vector<connection_descriptor_struct>* newValue);

        // Member variables exposed as properties
        /// Property: oversample_ratio
        short oversample_ratio;
        /// Property: device_addr
        std::string device_addr;
        /// Property: connectionTable
        std::vector<connection_descriptor_struct> connectionTable;
        /// Property: device_channels
        std::vector<channel_struct> device_channels;

        // Ports
        /// Port: RFInfo_in
        frontend::InRFInfoPort *RFInfo_in;
        /// Port: RFInfo_in_2
        frontend::InRFInfoPort *RFInfo_in_2;
        /// Port: DigitalTuner_in
        frontend::InDigitalTunerPort *DigitalTuner_in;
        /// Port: dataFloatTX_in
        bulkio::InFloatPort *dataFloatTX_in;
        /// Port: dataFloatTX_in_2
        bulkio::InFloatPort *dataFloatTX_in_2;
        /// Port: dataFloat_out
        bulkio::OutFloatPort *dataFloat_out;
        /// Port: RFInfoTX_out
        frontend::OutRFInfoPort *RFInfoTX_out;
        /// Port: RFInfoTX_out_2
        frontend::OutRFInfoPort *RFInfoTX_out_2;

        std::map<std::string, std::string> listeners;

    private:
        void construct();
};
#endif // LIMESDR_FEI_BASE_IMPL_BASE_H
