#ifndef LIMESDR_FEI_BASE_IMPL_BASE_H
#define LIMESDR_FEI_BASE_IMPL_BASE_H

#include <boost/thread.hpp>
#include <ossie/Device_impl.h>
#include <ossie/ThreadedComponent.h>

#include "port_impl.h"
#include <bulkio/bulkio.h>
#include <frontend/frontend.h>
#include "struct_props.h"

class LimeSDR_FEI_base : public Device_impl, protected ThreadedComponent
{
    friend class FRONTEND_RFInfo_In_i;
    friend class FRONTEND_DigitalTuner_In_i;

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

    protected:
        void connectionTableChanged(const std::vector<connection_descriptor_struct>* oldValue, const std::vector<connection_descriptor_struct>* newValue);

        // Member variables exposed as properties
        /// Property: device_kind
        std::string device_kind;
        /// Property: device_model
        std::string device_model;
        /// Property: oversample_ratio
        short oversample_ratio;
        /// Property: device_addr
        std::string device_addr;
        /// Property: reset
        bool reset;
        /// Property: frontend_listener_allocation
        frontend_listener_allocation_struct frontend_listener_allocation;
        /// Property: frontend_tuner_allocation
        frontend_tuner_allocation_struct frontend_tuner_allocation;
        /// Property: frontend_tuner_status
        std::vector<frontend_tuner_status_struct_struct> frontend_tuner_status;
        /// Property: connectionTable
        std::vector<connection_descriptor_struct> connectionTable;
        /// Property: device_channels
        std::vector<channel_struct> device_channels;

        // Ports
        /// Port: RFInfo_in
        FRONTEND_RFInfo_In_i *RFInfo_in;
        /// Port: RFInfo_in_2
        FRONTEND_RFInfo_In_i *RFInfo_in_2;
        /// Port: DigitalTuner_in
        FRONTEND_DigitalTuner_In_i *DigitalTuner_in;
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

    private:
        void construct();
};
#endif // LIMESDR_FEI_BASE_IMPL_BASE_H
